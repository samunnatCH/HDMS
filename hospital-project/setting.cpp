#include "setting.h"
#include "ui_setting.h"
#include "welcome.h"
#include "schedule.h"
#include "logout.h" // Include the header for the logout class
#include "medical.h"
#include "user.h"
#include "user_session.h"
#include "form2.h"

#include <QMessageBox>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
#include <QCryptographicHash>
#include <QDebug>
#include <QSqlDatabase>
#include <QSqlDriver>
#include <QInputDialog>
#include <QFileDialog>
#include <QFile>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QDir>
#include <QPropertyAnimation>
#include <QGraphicsOpacityEffect>
#include <QScreen>
#include <QGuiApplication>
#include <QLineEdit> // Added for QLineEdit functionality
#include <QIcon>
setting::setting(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::setting)
{
    ui->setupUi(this);

    setWindowIcon(QIcon(":/app_icon/icons/icon.jpeg"));
    this->setWindowTitle("HDMS");

    db = QSqlDatabase::addDatabase("QSQLITE", "setting_connection");
    db.setDatabaseName("hdmsdatabase.db");

    if (!db.open()) {
        QMessageBox::critical(this, "Database Error", "Could not connect to the database: " + db.lastError().text());
        qDebug() << "Setting widget database error: " << db.lastError().text();
    }
    int currentPatientId = UserSession::instance().patientId;
    QString firstnamae = UserSession::instance().firstname;
    QString lastnamae = UserSession::instance().lastname;
    QString email = UserSession::instance().email;
    
    ui->patientIdLabel->setText("Patient ID: " + QString::number(currentPatientId));
    ui->usernameLabel->setText(firstnamae+" "+lastnamae);
    ui->fname->setText("First Name: " + firstnamae);
    ui->lname->setText("Last Name: " + lastnamae);
    ui->email->setText("Email: " + email);

    if (currentPatientId != -1) {
        QSqlQuery query(db);
        query.prepare("SELECT date_of_birth, gender, phone_number, blood_type, address FROM patients WHERE patient_id = :patient_id");
        query.bindValue(":patient_id", currentPatientId);

        if (query.exec() && query.next()) {
            ui->dob->setText("Date of Birth: " + query.value("date_of_birth").toString());
            ui->gender->setText("Gender: " + query.value("gender").toString());
            ui->phone->setText("Phone: " + query.value("phone_number").toString());
            ui->home->setText("Address: " + query.value("address").toString());
            ui->bgroup->setText("Blood Group: " + query.value("blood_type").toString());
        } else {
            qDebug() << "Failed to load additional patient data: " << query.lastError().text();
            // Set labels to indicate data is not available
            ui->dob->setText("Date of Birth: N/A");
            ui->gender->setText("Gender: N/A");
            ui->phone->setText("Phone: N/A");
            ui->home->setText("Address: N/A");
            ui->bgroup->setText("Blood Group: N/A");
        }
    } else {
        qDebug() << "User session patient ID is invalid. Cannot fetch data.";
    }



    // Initialize the styles. They are now member variables from the header.
    activeStyle = R"(
    QPushButton {
        background-color: #2CA8A2;
        color: white;
        border-radius: 10px;
        font-family: 'Segoe UI';
        font-size: 14px;
        font-weight: bold;
        padding: 6px 12px;
        }
    )";

    inactiveStyle = R"(
    QPushButton {
        background-color: #DDDDDD;
        color: black;
        border-radius: 10px;
        font-family: 'Segoe UI';
        font-size: 14px;
        font-weight: normal;
        padding: 6px 12px;
        }
    )";


    /* Background Track */








    // Set initial page and style. Assuming Profile is the default page.
    ui->stackedWidget->setCurrentIndex(0); // Profile_2 is at index 1
    ui->Profile->setStyleSheet(activeStyle);
    ui->Security->setStyleSheet(inactiveStyle);
    ui->Privacy->setStyleSheet(inactiveStyle);

    // Connect buttons to their respective slot functions



    connect(ui->download, &QPushButton::clicked, this, &setting::on_download_pressed, Qt::UniqueConnection);

    // Connect the update password button to the new slot
    connect(ui->update_password, &QPushButton::pressed, this, &setting::on_updatepassword_pressed, Qt::UniqueConnection);

    // Set password echo mode for security (assuming the QLineEdit widgets exist and are named appropriately)
    if (ui->currentpass) ui->currentpass->setEchoMode(QLineEdit::Password);
    if (ui->newpass) ui->newpass->setEchoMode(QLineEdit::Password);
    if (ui->confirmpass) ui->confirmpass->setEchoMode(QLineEdit::Password);
}

setting::~setting()
{
    if (db.isOpen()) {
        db.close();
    }
    QSqlDatabase::removeDatabase(db.connectionName());
    delete ui;

    if(welcome) delete welcome;
    if(user) delete user;
    if(schedule) delete schedule;
    if(Logout) delete Logout;
    if(Medical) delete Medical;
    if(loginForm) delete loginForm;
}

// Correctly implemented slot functions for navigation
void setting::on_Profile_clicked()
{
    ui->stackedWidget->setCurrentIndex(0); // Profile_2 is at index 1
    ui->Profile->setStyleSheet(activeStyle);
    ui->Security->setStyleSheet(inactiveStyle);
    ui->Privacy->setStyleSheet(inactiveStyle);
}

void setting::on_Security_clicked()
{
    ui->stackedWidget->setCurrentIndex(2); // Security_2 is at index 2
    ui->Profile->setStyleSheet(inactiveStyle);
    ui->Security->setStyleSheet(activeStyle);
    ui->Privacy->setStyleSheet(inactiveStyle);
}

void setting::on_Privacy_clicked()
{
    ui->stackedWidget->setCurrentIndex(1); // Privacy_2 is at index 0
    ui->Profile->setStyleSheet(inactiveStyle);
    ui->Security->setStyleSheet(inactiveStyle);
    ui->Privacy->setStyleSheet(activeStyle);
}


void setting::switchWindow(QWidget *newWindow)
{
    newWindow->show();
    this->hide();
}


void setting::on_Dashboard_clicked()
{
    int patientId = UserSession::instance().patientId;
    if (!welcome) {
        welcome = new Welcome(patientId);
    }
    switchWindow(welcome);
}

void setting::on_Appointment_clicked()
{
    if (!user) {
        user = new User;
    }
    switchWindow(user);
}

void setting::on_Schedule_clicked()
{
    if (!schedule) {
        schedule = new Schedule;
    }
    switchWindow(schedule);
}

void setting::on_Medical_records_clicked()
{
    if (!Medical) {
        Medical = new medical;
    }
    switchWindow(Medical);
}

void setting::on_logOut_clicked()
{

    Logout = new logout;
    Logout->setModal(true);
    Logout->show();
}

void setting::on_delete_2_clicked()
{
    if (!db.isOpen()) {
        QMessageBox::critical(this, "Database Error", "Database connection is closed. Cannot delete account.");
        return;
    }
    bool ok;
    QString password = QInputDialog::getText(this, "Confirm Account Deletion",
                                            "To confirm, please enter your password:",
                                            QLineEdit::Password,
                                            QString(), &ok);

    if (!ok || password.isEmpty()) {
        QMessageBox::information(this, "Deletion Cancelled", "Account deletion was cancelled.");
        return;
    }

    QString userEmail = UserSession::instance().email;
    int patientId = UserSession::instance().patientId;
    QString hashedPassword = QString(QCryptographicHash::hash(password.toUtf8(), QCryptographicHash::Sha256).toHex());

    QSqlQuery query(db);
    query.prepare("SELECT u.user_id FROM users u JOIN patients p ON u.user_id = p.user_id "
                  "WHERE u.email = :email AND u.password_hash = :password_hash AND p.patient_id = :patient_id");
    query.bindValue(":email", userEmail);
    query.bindValue(":password_hash", hashedPassword);
    query.bindValue(":patient_id", patientId);

    if (!query.exec()) {
        QMessageBox::critical(this, "Database Error", "Password verification query failed: " + query.lastError().text());
        return;
    }

    if (!query.next()) {
        QMessageBox::warning(this, "Deletion Failed", "Incorrect password. Account deletion cancelled.");
        return;
    }

    int userId = query.value("user_id").toInt();

    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Confirm Deletion",
                                  "Are you sure you want to permanently delete your account? This action cannot be undone.",
                                  QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::No) {
        return;
    }

    db.transaction();

    try {
        query.prepare("DELETE FROM medical_records WHERE patient_id = :patient_id");
        query.bindValue(":patient_id", patientId);
        if (!query.exec()) {
            throw QString("Failed to delete medical records: " + query.lastError().text());
        }

        query.prepare("DELETE FROM appointments WHERE patient_id = :patient_id");
        query.bindValue(":patient_id", patientId);
        if (!query.exec()) {
            throw QString("Failed to delete appointments: " + query.lastError().text());
        }

        query.prepare("DELETE FROM patients WHERE patient_id = :patient_id");
        query.bindValue(":patient_id", patientId);
        if (!query.exec()) {
            throw QString("Failed to delete patient details: " + query.lastError().text());
        }

        query.prepare("DELETE FROM users WHERE user_id = :user_id");
        query.bindValue(":user_id", userId);
        if (!query.exec()) {
            throw QString("Failed to delete user account: " + query.lastError().text());
        }

        if (db.commit()) {
            QMessageBox::information(this, "Account Deletion", "Your account has been successfully deleted.");
            UserSession::instance().clearSession();
            loginForm = new Form2();
            switchWindow(loginForm);
        } else {
            db.rollback();
            QMessageBox::critical(this, "Database Error", "Failed to commit deletion. Transaction rolled back: " + db.lastError().text());
        }

    } catch (const QString& errorMsg) {
        db.rollback();
        QMessageBox::critical(this, "Database Error", errorMsg);
        qDebug() << "Transaction rolled back due to error: " << errorMsg;
    }
}

void setting::on_download_pressed()
{
    if (!db.isOpen()) {
        QMessageBox::critical(this, "Database Error", "Database connection is closed. Cannot download data.");
        return;
    }

    int patientId = UserSession::instance().patientId;

    if (patientId == -1) {
        QMessageBox::warning(this, "Session Error", "User session is invalid. Please log in again.");
        return;
    }

    int userId = -1;
    QSqlQuery userIdQuery(db);
    userIdQuery.prepare("SELECT user_id FROM patients WHERE patient_id = :patient_id");
    userIdQuery.bindValue(":patient_id", patientId);

    if (userIdQuery.exec() && userIdQuery.next()) {
        userId = userIdQuery.value("user_id").toInt();
    } else {
        qDebug() << "Failed to fetch user_id for patient_id: " << patientId << "Error: " << userIdQuery.lastError().text();
        QMessageBox::critical(this, "Download Error", "Failed to retrieve user ID from the database.");
        return;
    }

    QString defaultFileName = QString("user_data_%1.json").arg(QDate::currentDate().toString("yyyyMMdd"));
    QString fileName = QFileDialog::getSaveFileName(this,
                                                   "Save User Data",
                                                   QDir::homePath() + "/" + defaultFileName,
                                                   "JSON Files (*.json)");

    if (fileName.isEmpty()) {
        QMessageBox::information(this, "Download Cancelled", "User data download was cancelled.");
        return;
    }

    QJsonObject userData;
    QSqlQuery query(db);

    query.prepare("SELECT p.patient_id, p.full_name, p.date_of_birth, p.gender, p.phone_number, p.address, u.email "
                  "FROM patients p JOIN users u ON p.user_id = u.user_id "
                  "WHERE p.patient_id = :patient_id AND u.user_id = :user_id");
    query.bindValue(":patient_id", patientId);
    query.bindValue(":user_id", userId);

    if (query.exec() && query.next()) {
        userData["user_details"] = QJsonObject({
            {"patient_id", query.value("patient_id").toInt()},
            {"full_name", query.value("full_name").toString()},
            {"date_of_birth", query.value("date_of_birth").toString()},
            {"gender", query.value("gender").toString()},
            {"phone_number", query.value("phone_number").toString()},
            {"address", query.value("address").toString()},
            {"email", query.value("email").toString()}
        });
    } else {
        qDebug() << "Failed to fetch user details: " << query.lastError().text();
        QMessageBox::critical(this, "Download Error", "Failed to fetch user details from the database.");
        return;
    }

    QJsonArray appointmentsArray;
    query.prepare("SELECT a.appointment_date, d.full_name AS doctor_name, a.reason, a.status "
                  "FROM appointments a JOIN doctors d ON a.doctor_id = d.doctor_id "
                  "WHERE a.patient_id = :patient_id ORDER BY a.appointment_date DESC");
    query.bindValue(":patient_id", patientId);

    if (query.exec()) {
        while (query.next()) {
            QJsonObject appointment;
            appointment["appointment_date"] = query.value("appointment_date").toString();
            appointment["doctor_name"] = query.value("full_name").toString();
            appointment["reason"] = query.value("reason").toString();
            appointment["status"] = query.value("status").toString();
            appointmentsArray.append(appointment);
        }
        userData["appointments"] = appointmentsArray;
    } else {
        qDebug() << "Failed to fetch appointments: " << query.lastError().text();
    }

    QJsonArray medicalRecordsArray;
    query.prepare("SELECT record_id, diagnosis, treatment, record_date "
                  "FROM medical_records WHERE patient_id = :patient_id ORDER BY record_date DESC");
    query.bindValue(":patient_id", patientId);

    if (query.exec()) {
        while (query.next()) {
            QJsonObject record;
            record["record_id"] = query.value("record_id").toInt();
            record["diagnosis"] = query.value("diagnosis").toString();
            record["treatment"] = query.value("treatment").toString();
            record["record_date"] = query.value("record_date").toString();
            medicalRecordsArray.append(record);
        }
        userData["medical_records"] = medicalRecordsArray;
    } else {
        qDebug() << "Failed to fetch medical records: " << query.lastError().text();
    }

    QFile saveFile(fileName);
    if (!saveFile.open(QIODevice::WriteOnly)) {
        QMessageBox::critical(this, "File Error", "Could not open file for writing: " + saveFile.errorString());
        return;
    }

    QJsonDocument saveDoc(userData);
    saveFile.write(saveDoc.toJson());
    saveFile.close();

    QMessageBox::information(this, "Download Complete", QString("User data has been successfully downloaded to:\n%1").arg(fileName));
}

void setting::on_updatepassword_pressed()
{
    // Assuming you have QLineEdit widgets named 'currentPass', 'newPass', and 'confirmpass'
    QString currentPassword = ui->currentpass->text();
    QString newPassword = ui->newpass->text();
    QString confirmPassword = ui->confirmpass->text();

    // 1. Validate user input
    if (currentPassword.isEmpty() || newPassword.isEmpty() || confirmPassword.isEmpty()) {
        QMessageBox::warning(this, "Update Password Failed", "All password fields must be filled.");
        return;
    }
    if (newPassword != confirmPassword) {
        QMessageBox::warning(this, "Update Password Failed", "New passwords do not match.");
        return;
    }
    if (newPassword.length() < 6) { // Example: minimum password length
        QMessageBox::warning(this, "Update Password Failed", "New password must be at least 6 characters long.");
        return;
    }

    // 2. Hash the provided current password to check against the database
    QString hashedCurrentPassword = QString(QCryptographicHash::hash(currentPassword.toUtf8(), QCryptographicHash::Sha256).toHex());
    QString userEmail = UserSession::instance().email;

    if (userEmail.isEmpty()) {
        QMessageBox::critical(this, "Session Error", "User session is invalid. Please log in again.");
        return;
    }

    // 3. Verify the current password in the database
    if (!db.isOpen()) {
        QMessageBox::critical(this, "Database Error", "Database connection is closed. Cannot update password.");
        return;
    }

    QSqlQuery query(db);
    query.prepare("SELECT user_id FROM users WHERE email = :email AND password_hash = :password_hash");
    query.bindValue(":email", userEmail);
    query.bindValue(":password_hash", hashedCurrentPassword);

    if (!query.exec()) {
        QMessageBox::critical(this, "Database Error", "Password verification query failed: " + query.lastError().text());
        return;
    }

    if (query.next()) { // Current password is correct
        // 4. Hash the new password and update the database
        QString hashedNewPassword = QString(QCryptographicHash::hash(newPassword.toUtf8(), QCryptographicHash::Sha256).toHex());
        query.prepare("UPDATE users SET password_hash = :new_password_hash WHERE email = :email");
        query.bindValue(":new_password_hash", hashedNewPassword);
        query.bindValue(":email", userEmail);

        if (query.exec()) {
            QMessageBox::information(this, "Success", "Password updated successfully!");
        } else {
            QMessageBox::critical(this, "Database Error", "Failed to update password: " + query.lastError().text());
        }
    } else { // Current password is incorrect
        QMessageBox::warning(this, "Update Password Failed", "Incorrect current password. Please try again.");
    }

    // 5. Clear the password fields for security
    ui->currentpass->clear();
    ui->newpass->clear();
    ui->confirmpass->clear();
}
