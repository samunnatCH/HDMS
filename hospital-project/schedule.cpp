#include "schedule.h"
#include "ui_schedule.h"
#include "welcome.h"
#include "user.h"
#include "logout.h"
#include "medical.h"
#include "setting.h"
#include "user_session.h"
#include <QMessageBox>
#include <QDebug>
#include <QDir>
#include <QFile>
#include <QTextStream>
#include <QIcon>
// Explicitly include from QtCore to ensure full type definition
#include <QtCore/QTime>
#include <QtCore/QList>
#include <QtCore/QSet>
#include <QtCore/QDateTime>


Schedule::Schedule(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Schedule)
{
    ui->setupUi(this);
    setWindowIcon(QIcon(":/app_icon/icons/icon.jpeg"));
    this->setWindowTitle("HDMS");
    // Establish the database connection
    db = QSqlDatabase::addDatabase("QSQLITE", "schedule_connection");
    db.setDatabaseName("hdmsdatabase.db");

    qDebug() << "Schedule: Attempting to open database at: " << QDir::currentPath() + QDir::separator() + db.databaseName();

    if (!db.open()) {
        QMessageBox::critical(this, "Database Error", "Could not connect to the database for scheduling: " + db.lastError().text());
    } else {
        // --- CRITICAL ORDER: Save BEFORE Cleanup ---
        savePastAppointmentsToFile(); // Save past appointments to file
        cleanupPastAppointments();    // Then mark them as completed
        // ------------------------------------------
    }
    int currentPatientId = UserSession::instance().patientId;
    QString firstnamae = UserSession::instance().firstname;
    QString lastnamae = UserSession::instance().lastname;
    ui->patientIdLabel->setText("Patient ID: " + QString::number(currentPatientId));
    ui->usernameLabel->setText(firstnamae+" "+lastnamae);
    ui->timeEdit->setTime(QTime::currentTime()); // Set current time as default

    // Connect signals
    connect(ui->calendarWidget, &QCalendarWidget::selectionChanged, this, &Schedule::on_calendarWidget_selectionChanged);
    connect(ui->select_Hospital, QOverload<int>::of(&QComboBox::currentIndexChanged), this, &Schedule::on_select_Hospital_currentIndexChanged);
    connect(ui->set_appointment, &QPushButton::clicked, this, &Schedule::on_set_appointment_pressed, Qt::UniqueConnection); // Connect the new button

    // Fetch doctors from the database
    fetchDoctorsFromDb();

    // Set initial display for slots
    ui->textBrowser_2->setText("Select a doctor and a date to see available slots.");
}

Schedule::~Schedule()
{
    if (db.isOpen()) {
        db.close();
    }
    QSqlDatabase::removeDatabase(db.connectionName());
    delete ui;
}

void Schedule::fetchDoctorsFromDb()
{
    if (!db.isOpen()) {
        QMessageBox::critical(this, "Database Error", "Database connection is closed. Cannot fetch doctors.");
        return;
    }

    QSqlQuery query(db);
    // Select full_name directly from the doctors table (no schedule_json)
    query.prepare("SELECT doctor_id, full_name, specialization FROM doctors");

    if (!query.exec()) {
        QMessageBox::critical(this, "Database Error", "Failed to fetch doctors: " + query.lastError().text());
        qDebug() << "Fetch doctors query error: " << query.lastError().text();
        return;
    }

    ui->select_Hospital->clear();
    doctorMap.clear(); // Clear previous map entries
    // doctorAvailabilityJsonMap.clear(); // Removed as per schedule.h

    while (query.next()) {
        int doctorId = query.value("doctor_id").toInt();
        QString fullName = query.value("full_name").toString();
        QString specialization = query.value("specialization").toString();
        // QString scheduleJson = query.value("schedule_json").toString(); // Removed as per schedule.h

        QString displayString = QString("%1 - %2").arg(fullName).arg(specialization);

        ui->select_Hospital->addItem(displayString, doctorId); // Store doctorId as user data
        doctorMap.insert(doctorId, qMakePair(fullName, specialization));
        // doctorAvailabilityJsonMap.insert(doctorId, scheduleJson); // Removed as per schedule.h
    }

    if (ui->select_Hospital->count() == 0) {
        ui->select_Hospital->addItem("No doctors found in database.");
        ui->select_Hospital->setEnabled(false); // Disable if no doctors
    } else {
        ui->select_Hospital->setEnabled(true);
        ui->select_Hospital->setCurrentIndex(-1); // No default selection
    }
}

// generateTimeSlots function removed as per schedule.h


void Schedule::fetchAvailableSlotsFromDb(int doctorId, const QDate& date)
{
    if (!db.isOpen()) {
        QMessageBox::critical(this, "Database Error", "Database connection is closed. Cannot fetch available slots.");
        return;
    }
    if (doctorId == -1 || !date.isValid()) {
        ui->textBrowser_2->setText("Please select a doctor and a valid date.");
        return;
    }

    QSqlQuery query(db);
    query.prepare("SELECT appointment_date FROM appointments "
                  "WHERE doctor_id = :doctor_id AND DATE(appointment_date) = :appointment_date "
                  "AND status = 'scheduled' ORDER BY appointment_date ASC");
    query.bindValue(":doctor_id", doctorId);
    query.bindValue(":appointment_date", date.toString("yyyy-MM-dd"));

    if (!query.exec()) {
        QMessageBox::critical(this, "Database Error", "Failed to fetch unavailable slots: " + query.lastError().text());
        qDebug() << "Fetch slots query error: " << query.lastError().text();
        return;
    }

    QString slotsText;
    bool slotsFound = false;

    if (query.next()) {
        slotsFound = true;
        slotsText = QString("Unavailable slots for %1 on %2:\n").arg(ui->select_Hospital->currentText()).arg(date.toString("yyyy-MM-dd"));

        do {
            QDateTime appointmentDateTime = query.value("appointment_date").toDateTime();
            // Change the format string to "hh:mm ap" for 12-hour format with AM/PM
            slotsText += appointmentDateTime.toString("hh:mm ap") + "\n";
        } while (query.next());

    } else {
        slotsText = "\n All times are available for this doctor on this date.\n";
    }

    ui->textBrowser_2->setText(slotsText);
}

bool Schedule::isSlotAvailable(int doctorId, const QDateTime& dateTime)
{
    if (!db.isOpen()) {
        QMessageBox::critical(this, "Database Error", "Database connection is closed. Cannot check slot availability.");
        return false;
    }

    // This version only checks against already booked appointments, not general availability.
    QSqlQuery query(db);
    query.prepare("SELECT COUNT(*) FROM appointments "
                  "WHERE doctor_id = :doctor_id AND appointment_date = :appointment_date "
                  "AND status = 'scheduled'");
    query.bindValue(":doctor_id", doctorId);
    query.bindValue(":appointment_date", dateTime.toString(Qt::ISODate));

    if (!query.exec()) {
        QMessageBox::critical(this, "Database Error", "Failed to check slot availability: " + query.lastError().text());
        qDebug() << "Slot availability query error: " << query.lastError().text();
        return false;
    }

    if (query.next()) {
        int count = query.value(0).toInt();
        return count == 0; // Slot is available if count is 0
    }
    return false;
}

void Schedule::savePastAppointmentsToFile()
{
    if (!db.isOpen()) {
        qDebug() << "Database not open for saving past appointments. Skipping.";
        return;
    }

    QDateTime currentDateTime = QDateTime::currentDateTime();
    QSqlQuery query(db);

    // Select appointments that are in the past and still 'scheduled'
    query.prepare("SELECT appointment_id, patient_id, doctor_id, appointment_date, reason, status "
                  "FROM appointments "
                  "WHERE appointment_date < :current_datetime AND status = 'scheduled'");
    query.bindValue(":current_datetime", currentDateTime.toString(Qt::ISODate));

    if (!query.exec()) {
        qDebug() << "Failed to query past appointments for saving: " << query.lastError().text();
        return;
    }

    // Check if there are any rows to save
    if (!query.next()) {
        qDebug() << "No past scheduled appointments to save.";
        return;
    }
    query.first(); // Go back to the first record after checking next()

    // Define the file path (e.g., in the application's current working directory)
    QString filePath = QDir::currentPath() + QDir::separator() + "past_appointments.csv";
    QFile file(filePath);

    // Open the file in append mode (or write mode if you want to overwrite each time)
    // Using Append mode to add new records without deleting old ones.
    if (!file.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text)) {
        qDebug() << "Failed to open file for saving past appointments: " << file.errorString();
        QMessageBox::warning(this, "File Save Error", "Could not open 'past_appointments.csv' for writing.");
        return;
    }

    QTextStream out(&file);

    // Write header only if the file is new/empty (or if you want a header every time it's opened in append mode)
    // For simplicity, we'll just append. A more robust solution would check if file exists and is empty.
    if (file.size() == 0) { // Only write header if file is empty
        out << "Appointment ID,Patient ID,Doctor ID,Appointment Date,Appointment Time,Reason,Status\n";
    }

    do {
        int appointmentId = query.value("appointment_id").toInt();
        int patientId = query.value("patient_id").toInt();
        int doctorId = query.value("doctor_id").toInt();
        QDateTime appointmentDateTime = query.value("appointment_date").toDateTime();
        QString reason = query.value("reason").toString();
        QString status = query.value("status").toString();

        // Format for CSV
        out << QString("%1,%2,%3,%4,%5,%6,%7\n")
                   .arg(appointmentId)
                   .arg(patientId)
                   .arg(doctorId)
                   .arg(appointmentDateTime.toString("yyyy-MM-dd")) // Date part
                   .arg(appointmentDateTime.toString("hh:mm"))     // Time part
                   .arg(reason.replace(",", ";")) // Replace commas in reason to avoid breaking CSV
                   .arg(status);

    } while (query.next());

    file.close();
    qDebug() << "Past appointments saved to: " << filePath;
}


void Schedule::cleanupPastAppointments()
{
    if (!db.isOpen()) {
        qDebug() << "Database not open for cleanup. Skipping past appointments cleanup.";
        return;
    }

    QDateTime currentDateTime = QDateTime::currentDateTime();
    QSqlQuery query(db);

    // Update appointments whose date and time are in the past and status is 'scheduled' to 'completed'
    query.prepare("UPDATE appointments SET status = 'completed' "
                  "WHERE appointment_date < :current_datetime AND status = 'scheduled'");
    query.bindValue(":current_datetime", currentDateTime.toString(Qt::ISODate));

    if (!query.exec()) {
        qDebug() << "Failed to cleanup past appointments: " << query.lastError().text();
    } else {
        qDebug() << "Successfully cleaned up past appointments. Rows affected: " << query.numRowsAffected();
    }
}


void Schedule::on_calendarWidget_selectionChanged()
{
    QDate selectedDate = ui->calendarWidget->selectedDate();
    int doctorId = ui->select_Hospital->currentData().toInt(); // Get doctorId from combobox user data
    fetchAvailableSlotsFromDb(doctorId, selectedDate);
}

void Schedule::on_select_Hospital_currentIndexChanged(int index)
{
    if (index != -1) {
        int doctorId = ui->select_Hospital->currentData().toInt(); // Get doctorId from combobox user data
        QDate selectedDate = ui->calendarWidget->selectedDate();
        fetchAvailableSlotsFromDb(doctorId, selectedDate);
    } else {
        ui->textBrowser_2->setText("Please select a doctor.");
    }
}




// --- Navigation Slot Implementations ---

void Schedule::on_Dashboard_clicked()
{
    // Retrieve patientId from UserSession
    int patientId = UserSession::instance().patientId;
    welcome = new Welcome(patientId); // Pass patientId to Welcome constructor
    welcome->show();
    this->close();
}

void Schedule::on_Appointment_clicked()
{
    user = new User;
    user->show();
    this->close();
}

void Schedule::on_Medical_records_clicked()
{
    Medical = new medical;
    Medical->show();
    this->close();
}

void Schedule::on_Settings_clicked()
{
    Setting = new setting;
    Setting->show();
    this->close();
}

void Schedule::on_logOut_clicked()
{
    Logout = new logout;
    Logout->setModal(true);
    Logout->show();
}

// Include the MOC file at the end of the .cpp file
#include "moc_schedule.cpp"

void Schedule::on_set_appointment_pressed()
{
    qDebug() << "on_set_appointment_clicked() entered.";
    ui->set_appointment->setEnabled(false);

    // 1. Get data from UI
    QDate selectedDate = ui->calendarWidget->selectedDate();
    QTime selectedTime = ui->timeEdit->time(); // Assuming timeEdit is the QTimeEdit object name
    int doctorId = ui->select_Hospital->currentData().toInt(); // Doctor ID from combobox user data
    QString reason = ui->reasoning->toPlainText().trimmed(); // Reason from QTextEdit, trimmed for whitespace
    int patientId = UserSession::instance().patientId; // Patient ID from UserSession

    // Combine date and time into a QDateTime object
    QDateTime appointmentDateTime(selectedDate, selectedTime);

    // 2. Validate inputs
    if (!selectedDate.isValid()) {
        QMessageBox::warning(this, "Set Appointment Error", "Please select a valid date.");
        ui->set_appointment->setEnabled(true); // Re-enable button on validation failure
        return;
    }
    if (!selectedTime.isValid()) { // Check if time is valid
        QMessageBox::warning(this, "Set Appointment Error", "Please select a valid time.");
        ui->set_appointment->setEnabled(true); // Re-enable button on validation failure
        return;
    }
    if (doctorId == -1) {
        QMessageBox::warning(this, "Set Appointment Error", "Please select a doctor.");
        ui->set_appointment->setEnabled(true); // Re-enable button on validation failure
        return;
    }
    if (reason.isEmpty()) {
        QMessageBox::warning(this, "Set Appointment Error", "Please provide a reason for the appointment.");
        ui->set_appointment->setEnabled(true); // Re-enable button on validation failure
        return;
    }
    if (patientId == -1) {
        QMessageBox::critical(this, "Set Appointment Error", "Patient ID not found. Please log in again.");
        ui->set_appointment->setEnabled(true); // Re-enable button on validation failure
        return;
    }
    if (!db.isOpen()) {
        QMessageBox::critical(this, "Database Error", "Database connection is closed. Cannot set appointment.");
        ui->set_appointment->setEnabled(true); // Re-enable button on validation failure
        return;
    }

    // 3. Check if the slot is available (only against existing bookings)
    if (!isSlotAvailable(doctorId, appointmentDateTime)) {
        QMessageBox::warning(this, "Appointment Error", "This slot is already booked for the selected doctor. Please choose a different time.");
        ui->set_appointment->setEnabled(true); // Re-enable button on validation failure
        return;
    }

    // 4. Insert into database
    QSqlQuery query(db);
    query.prepare("INSERT INTO appointments (patient_id, doctor_id, appointment_date, reason, status) "
                  "VALUES (:patient_id, :doctor_id, :appointment_date, :reason, :status)");
    query.bindValue(":patient_id", patientId);
    query.bindValue(":doctor_id", doctorId);
    query.bindValue(":appointment_date", appointmentDateTime.toString(Qt::ISODate)); // ISO format for DATETIME
    query.bindValue(":reason", reason);
    query.bindValue(":status", "scheduled"); // Default status

    if (query.exec()) {
        QMessageBox::information(this, "Appointment Set", "Your appointment has been successfully scheduled!");
        // Refresh the available slots for the selected doctor and date
        fetchAvailableSlotsFromDb(doctorId, selectedDate);
        ui->reasoning->clear();// Clear the reason text
    } else {
        QMessageBox::critical(this, "Appointment Error", "Failed to set appointment: " + query.lastError().text());
        qDebug() << "Set appointment query error: " << query.lastError().text();
    }
    ui->set_appointment->setEnabled(true);
}

