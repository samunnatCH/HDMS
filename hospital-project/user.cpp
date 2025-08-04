#include "user.h"
#include "ui_user.h" // Ensure this matches your .ui file's name (e.g., ui_user.h or ui_form.h)
#include "welcome.h"
#include "schedule.h"
#include "logout.h"
#include "medical.h"
#include "setting.h"
#include "user_session.h"
#include <QMessageBox>
#include <QDebug>
#include <QDateTime> // Already included in user.h, but ensures it's available here
#include <QIcon>
User::User(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::user) // lowercase 'user' as per your .ui class name
{
    ui->setupUi(this);
    setWindowIcon(QIcon(":/app_icon/icons/icon.jpeg"));
    this->setWindowTitle("HDMS");
    // Establish the database connection for this form
    db = QSqlDatabase::addDatabase("QSQLITE", "user_appointment_connection");
    db.setDatabaseName("hdmsdatabase.db");

    qDebug() << "User: Attempting to open database at: " << db.databaseName();

    if (!db.open()) {
        QMessageBox::critical(this, "Database Error", "Could not connect to the database for appointments: " + db.lastError().text());
    } else {
        // --- START: Initial load of appointments for today's date ---
        int currentPatientId = UserSession::instance().patientId;
        QString firstnamae = UserSession::instance().firstname;
        QString lastnamae = UserSession::instance().lastname;
        ui->patientIdLabel->setText("Patient ID: " + QString::number(currentPatientId));
        ui->usernameLabel->setText(firstnamae+" "+lastnamae);
        if (currentPatientId != -1) {
            fetchAppointmentsForDate(currentPatientId, QDate::currentDate());
        } else {
            ui->appointmentShow->setText("Patient ID not found. Please log in.");
        }
        // --- END: Initial load ---
    }

    // --- START: Connect Calendar Widget Signal ---
    connect(ui->calendarWidget, &QCalendarWidget::selectionChanged, this, &User::on_calendarWidget_selectionChanged);
    // --- END: Connect Calendar Widget Signal ---

    // Placeholder for profile image (if you have one in user.ui)
    // QPixmap pixmap(":/image/resourse/profile.jpg");
    // if (!pixmap.isNull() && ui->profile) { // Check if ui->profile QLabel exists
    //     ui->profile->setPixmap(pixmap.scaled(
    //         ui->profile->size(),
    //         Qt::KeepAspectRatio,
    //         Qt::SmoothTransformation));
    // } else {
    //     qDebug() << "Failed to load profile.jpg or ui->profile does not exist.";
    // }
}

User::~User()
{
    if (db.isOpen()) {
        db.close();
    }
    QSqlDatabase::removeDatabase("user_appointment_connection");
    delete ui;
}

// --- START: New Slot for Calendar Widget Selection Change ---
void User::on_calendarWidget_selectionChanged()
{
    QDate selectedDate = ui->calendarWidget->selectedDate();
    int currentPatientId = UserSession::instance().patientId;

    if (currentPatientId != -1) {
        fetchAppointmentsForDate(currentPatientId, selectedDate);
    } else {
        ui->appointmentShow->setText("Patient ID not found. Please log in to view appointments.");
    }
}
// --- END: New Slot for Calendar Widget Selection Change ---

// --- START: New Function to fetch and display appointments for a specific date ---
void User::fetchAppointmentsForDate(int patientId, const QDate& date)
{
    if (!db.isOpen()) {
        qDebug() << "Database connection is closed. Cannot fetch appointments for date.";
        ui->appointmentShow->setText("Database connection error. Cannot load appointments.");
        return;
    }

    qDebug() << "Fetching appointments for Patient ID:" << patientId << "on Date:" << date.toString("yyyy-MM-dd");

    QSqlQuery query(db);
    // Query to select scheduled appointments for the given patient and specific date
    // It joins with the doctors table to get the doctor's full name
    query.prepare("SELECT a.appointment_date, d.full_name, a.reason, a.status "
                  "FROM appointments a "
                  "JOIN doctors d ON a.doctor_id = d.doctor_id "
                  "WHERE a.patient_id = :patient_id "
                  "AND DATE(a.appointment_date) = :selected_date " // Filter by selected date only
                  "AND a.status = 'scheduled' " // Only scheduled appointments for the selected date
                  "ORDER BY a.appointment_date ASC"); // Order by time ascending

    query.bindValue(":patient_id", patientId);
    query.bindValue(":selected_date", date.toString("yyyy-MM-dd"));



    qDebug() << "Executing query: " << query.lastQuery();
    qDebug() << "Bound values: :patient_id =" << patientId << ", :selected_date =" << date.toString("yyyy-MM-dd");

    if (!query.exec()) {
        qDebug() << "Failed to fetch appointments for date: " << query.lastError().text();
        ui->appointmentShow->setText("Failed to load appointments for " + date.toString("yyyy-MM-dd") + ": " + query.lastError().text());
        return;
    }

    QString displayText = QString("<h3>Appointments for %1:</h3>").arg(date.toString("dddd, MMMM d, yyyy"));
    bool appointmentsFound = false;

    while (query.next()) {
        appointmentsFound = true;
        QDateTime appointmentDateTime = query.value("appointment_date").toDateTime();
        QString doctorName = query.value("full_name").toString();
        QString reason = query.value("reason").toString();
        QString status = query.value("status").toString();

        displayText += QString("<p><b>Time:</b> %1<br>"
                               "<b>Doctor:</b> %2<br>"
                               "<b>Reason:</b> %3<br>"
                               "<b>Status:</b> %4</p><hr>")
                           .arg(appointmentDateTime.toString("hh:mm ap"))
                           .arg(doctorName)
                           .arg(reason)
                           .arg(status);
    }

    if (!appointmentsFound) {
        displayText += "<p>No scheduled appointments found for this date.</p>";
    }

    ui->appointmentShow->setHtml(displayText);
}
// --- END: New Function ---


// --- START: Navigation Slot Implementations ---

void User::on_Dashboard_clicked()
{
    int patientId = UserSession::instance().patientId;
    welcome = new Welcome(patientId);
    welcome->show();
    this->close();
}

void User::on_Schedule_clicked()
{
    schedule = new Schedule;
    schedule->show();
    this->close();
}

void User::on_logOut_clicked()
{
    Logout = new logout;
    Logout->setModal(true);
    Logout->show();
}

void User::on_Medical_records_clicked()
{
    Medical = new medical;
    Medical->show();
    this->close();
}

void User::on_Settings_clicked()
{
    Setting = new setting;
    Setting->show();
    this->close();
}

// Modified this existing slot: Now it will refresh the appointments for the current date
void User::on_Appointment_clicked()
{
    int currentPatientId = UserSession::instance().patientId;
    if (currentPatientId != -1) {
        // When the Appointment button is clicked, refresh for the currently selected date on the calendar
        // or default to today's date if no date is explicitly selected yet.
        fetchAppointmentsForDate(currentPatientId, ui->calendarWidget->selectedDate());
    } else {
        ui->appointmentShow->setText("Patient ID not found. Please log in to view appointments.");
    }
    // No need to create a new User window as we are already on the User window.
    // If this slot is used for navigation *to* this page, the constructor handles initial load.
}
// --- END: Navigation Slot Implementations ---


