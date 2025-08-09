#include "welcome.h"
#include "ui_welcome.h"
#include "user.h"
#include "schedule.h"
#include "logout.h"
#include "medical.h"
#include "setting.h"
#include <QIcon>
#include <QDate>
#include <QDebug>
#include <QMessageBox>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
#include <QDir>
#include <QFileDialog>
#include <QIcon>
// Added for QDir::currentPath()

// The constructor now takes the patient's ID and loads their data.
Welcome::Welcome(int patientId, QWidget *parent)
    : QWidget(parent), ui(new Ui::Welcome)
{
    ui->setupUi(this);
    setWindowIcon(QIcon(":/app_icon/icons/icon.jpeg"));
    this->setWindowTitle("HDMS");

    // Establish a unique database connection
    db = QSqlDatabase::addDatabase("QSQLITE", "welcome_connection");
    db.setDatabaseName("hdmsdatabase.db");

    qDebug() << "Welcome: Attempting to open database at: " << QDir::currentPath() + QDir::separator() + db.databaseName();

    if (!db.open()) {
        QMessageBox::critical(this, "Database Error", "Could not connect to the database: " + db.lastError().text());
        return;
    }

    // Load all patient data using the ID


    // --- START: Changes for Upcoming Appointments ---
    // Fetch and display upcoming appointments in the QTextBrowser named 'current_appointment'
    fetchUpcomingAppointments(patientId);



    QPixmap pixmap1(":/icon/icons/email.png");
    ui->Email_E->size();
    QPixmap pixmap2(":/icon/icons/phone.png");
    ui->phonepicture->size();
    QPixmap pixmap3(":/icon/icons/location.png");
    ui->addresspicture->size();
    QPixmap pixmap4(":/icon/icons/blood.png");
    ui->Blood_E->size();
    // Set the current date
    QDate currentDate = QDate::currentDate();
    QString dateString = currentDate.toString("dddd, MMMM d, yyyy");
    ui->date->setText(dateString);

    // Establish a unique database connection
    db = QSqlDatabase::addDatabase("QSQLITE", "welcome_connection");
    db.setDatabaseName("hdmsdatabase.db");

    // --- CRITICAL DEBUG STEP: Print the database path for Welcome ---
    qDebug() << "Welcome: Attempting to open database at: " << QDir::currentPath() + QDir::separator() + db.databaseName();
    // ----------------------------------------------------------------

    if (!db.open()) {
        QMessageBox::critical(this, "Database Error", "Could not connect to the database: " + db.lastError().text());
        return;
    }

    // Load all patient data using the ID
    loadPatientData(patientId);

}

Welcome::~Welcome() {
    if (db.isOpen()) {
        db.close();
    }
    QSqlDatabase::removeDatabase(db.connectionName());
    delete ui;
}

void Welcome::loadPatientData(int patientId)
{
    if (!db.isOpen()) {
        QMessageBox::critical(this, "Database Error", "Database connection is closed. Cannot load patient data.");
        return;
    }

    QSqlQuery query(db);
    // Ensure column names exactly match the database schema
    query.prepare("SELECT p.full_name, p.date_of_birth, p.phone_number, p.address, p.blood_type, u.email "//p.blood_group  p.phone_number,//
                  "FROM patients p JOIN users u ON p.user_id = u.user_id "
                  "WHERE p.patient_id = :patient_id");
    query.bindValue(":patient_id", patientId);

    if (!query.exec()) {
        QMessageBox::critical(this, "Database Error", "Failed to fetch patient data: " + query.lastError().text());
        qDebug() << "Load patient data query error: " << query.lastError().text(); // More detailed debug
        return;
    }

    if (query.next()) {
        QString fullName = query.value("full_name").toString();
        QDate dob = query.value("date_of_birth").toDate();
        QString phone = query.value("phone_number").toString();
        QString location = query.value("address").toString(); // Mapped from 'address' in DB
        QString email = query.value("email").toString();
        QString bloodblood= query.value("blood_type").toString();





        // Calculate age
        // int age = QDate::currentDate().year() - dob.year();
        // if (QDate::currentDate().month() < dob.month() || (QDate::currentDate().month() == dob.month() && QDate::currentDate().day() < dob.day())) {
        //     age--;
        // }

        // Populate the UI labels
        ui->usernameLabel->setText(QString("Namaste, %1!").arg(fullName));
        ui->patientIdLabel->setText(QString(" Patient Id: %1").arg(patientId));
        ui->emailLabel->setText(QString(" %1").arg(email));
        ui->Phone_E->setText(QString(" %1").arg(phone));
        ui->Address_E->setText(QString(" %1").arg(location));
        ui->blood_out->setText(QString( "%1").arg(bloodblood));
        ui->usernameLabel_2->setText(QString(" %1").arg(fullName));
        // ui->age_E->setText(QString("Age: %1").arg(age));

        // Setting to N/A as per previous discussion, since UI doesn't collect it.

    } else {
        QMessageBox::warning(this, "Not Found", "Could not find patient data for the logged-in user.");
    }
}

// --- START: New function to fetch and display upcoming appointments ---
void Welcome::fetchUpcomingAppointments(int patientId)
{
    if (!db.isOpen()) {
        qDebug() << "Database connection is closed. Cannot fetch upcoming appointments.";
        // Set text for the QTextBrowser to indicate error
        ui->current_appointment->setText("Database connection error. Cannot load appointments.");
        return;
    }

    QSqlQuery query(db);
    // Query to select upcoming scheduled appointments for the given patient
    // It joins with the doctors table to get the doctor's full name
    query.prepare("SELECT a.appointment_date, d.full_name, a.reason "
                  "FROM appointments a "
                  "JOIN doctors d ON a.doctor_id = d.doctor_id "
                  "WHERE a.patient_id = :patient_id "
                  "AND a.status = 'scheduled' "
                  "AND a.appointment_date >= :current_datetime " // Only appointments in the future or current time
                  "ORDER BY a.appointment_date ASC"); // Order by date ascending

    query.bindValue(":patient_id", patientId);
    query.bindValue(":current_datetime", QDateTime::currentDateTime().toString(Qt::ISODate)); // Bind current date and time

    if (!query.exec()) {
        qDebug() << "Failed to fetch upcoming appointments: " << query.lastError().text();
        // Set text for the QTextBrowser to indicate query error
        ui->current_appointment->setText("Failed to load upcoming appointments: " + query.lastError().text());
        return;
    }

    QString upcomingAppointmentsText = "<h3>Upcoming Appointments:</h3>";
    bool appointmentsFound = false;

    while (query.next()) {
        appointmentsFound = true;
        QDateTime appointmentDateTime = query.value("appointment_date").toDateTime();
        QString doctorName = query.value("full_name").toString();
        QString reason = query.value("reason").toString();

        // Format the output as HTML for better presentation in QTextBrowser
        upcomingAppointmentsText += QString("<p><b>Date:</b> %1<br>"
                                            "<b>Time:</b> %2<br>"
                                            "<b>Doctor:</b> %3<br>"
                                            "<b>Reason:</b> %4</p><hr>") // Add a horizontal rule for separation
                                        .arg(appointmentDateTime.toString("yyyy-MM-dd"))
                                        .arg(appointmentDateTime.toString("hh:mm ap"))
                                        .arg(doctorName)
                                        .arg(reason);
    }

    if (!appointmentsFound) {
        upcomingAppointmentsText += "<p>No upcoming appointments.</p>";
    }

    // Set the formatted text to the QTextBrowser
    ui->current_appointment->setHtml(upcomingAppointmentsText);
}
// --- END: New function to fetch and display upcoming appointments ---
// --- Navigation Slot Implementations ---

void Welcome::on_Medical_records_clicked()
{
    // Retrieve patientId from UserSession to pass to Medical constructor if needed
    // Currently, Medical constructor doesn't take patientId, but it's good practice
    // to ensure UserSession is populated before opening other windows.
    // int patientId = UserSession::instance().patientId; // Not used here, but for reference
    Medical = new medical;
    Medical->show();
    this->close();
}

void Welcome::on_Appointment_clicked()
{
    // Retrieve patientId from UserSession to pass to User constructor if needed
    // int patientId = UserSession::instance().patientId; // Not used here, but for reference
    user = new User;
    user->show();
    this->close();
}

void Welcome::on_Schedule_clicked()
{
    // Retrieve patientId from UserSession to pass to Schedule constructor if needed
    // int patientId = UserSession::instance().patientId; // Not used here, but for reference
    schedule = new Schedule;
    schedule->show();
    this->close();
}

void Welcome::on_logout_clicked()
{
    Logout = new logout;
    Logout->setModal(true);
    Logout->show();
}

void Welcome::on_Settings_clicked()
{
    // Retrieve patientId from UserSession to pass to Setting constructor if needed
    // int patientId = UserSession::instance().patientId; // Not used here, but for reference
    Setting = new setting;
    Setting->show();
    this->close();
}


