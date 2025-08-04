#include "medical.h"
#include "ui_medical.h"
#include "welcome.h"
#include "user.h"
#include "schedule.h"
#include "logout.h"
#include "setting.h"
#include "user_session.h"

// Required for file handling and UI
#include <QFileDialog>
#include <QFile>
#include <QMessageBox>
#include <QDebug>
#include <QIcon>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
#include <QDir>
#include <QDesktopServices>
#include <QUrl>
#include <QTableWidgetItem>
#include <QHeaderView>
#include <QSignalMapper>
#include <QTemporaryFile>
#include <QDateTime>
#include <QDateEdit> // Added for unique filenames
#include <QIcon>
medical::medical(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::medical)
{
    ui->setupUi(this);
    setWindowIcon(QIcon(":/app_icon/icons/icon.jpeg"));
    this->setWindowTitle("HDMS");

    // Establish a unique database connection for this widget instance
    db = QSqlDatabase::addDatabase("QSQLITE", "medical_connection");
    db.setDatabaseName("hdmsdatabase.db");

    if (!db.open()) {
        QMessageBox::critical(this, "Database Error", "Could not connect to the database for medical records: " + db.lastError().text());
    }
    int currentPatientId = UserSession::instance().patientId;
    QString firstnamae = UserSession::instance().firstname;
    QString lastnamae = UserSession::instance().lastname;
    ui->patientIdLabel->setText("Patient ID: " + QString::number(currentPatientId));
    ui->usernameLabel->setText(firstnamae+" "+lastnamae);
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

    ui->viewrecords->setStyleSheet(activeStyle);
    ui->uploadrecords->setStyleSheet(inactiveStyle);
    // Connect the new button's clicked signal to our slot.
    // This assumes you have a QPushButton with the objectName 'uploadReportButton'
    // in your medical.ui file for this to work.

    // Initial message to the user
    ui->statusLabel->setText("Select a PDF file to upload.");

ui->dateEdit->setDate(QDate::currentDate()); // Set the date edit to today's date
    ui->dateEdit->setDisplayFormat("yyyy-MM-dd"); // Set the display format
    // Load the medical records when the widget is created
    loadMedicalRecords(ui->dateEdit->date());
    connect(ui->dateEdit, &QDateEdit::dateChanged, this, &medical::on_dateEdit_dateChanged);
    loadMedicalRecords(ui->dateEdit->date());

}

medical::~medical()
{
    delete ui;
    if (db.isOpen()) {
        db.close();
    }
}

/**
 * @brief This slot is triggered when the "Upload Report" button is pressed.
 * It opens a file dialog, reads the selected file, and saves it to the database.
 */
void medical::on_uploadReportButton_pressed()
{
    int patientId = UserSession::instance().patientId;
    if (patientId == -1) {
        QMessageBox::warning(this, "Upload Error", "No patient session found. Please log in.");
        return;
    }

    QString filePath = QFileDialog::getOpenFileName(this,
                                                    "Select PDF Lab Report",
                                                    QDir::homePath(),
                                                    "PDF Files (*.pdf)");
    if (filePath.isEmpty()) {
        ui->statusLabel->setText("Upload cancelled.");
        return;
    }

    QFile file(filePath);
    if (!file.open(QIODevice::ReadOnly)) {
        QMessageBox::critical(this, "File Error", "Could not open file: " + file.errorString());
        ui->statusLabel->setText("File could not be opened.");
        return;
    }

    QByteArray fileData = file.readAll();
    file.close();

    // Get the filename from the path
    QFileInfo fileInfo(filePath);
    QString fileName = fileInfo.fileName();

    if (saveLabReportToDb(patientId, fileData, fileName)) {
        ui->statusLabel->setText("Lab report uploaded successfully!");
        // Reload the table to show the new entry
        loadMedicalRecords(ui->dateEdit->date());
    } else {
        ui->statusLabel->setText("Failed to upload lab report.");
    }
}

/**
 * @brief Saves a lab report (as a BLOB) to the medical_records table.
 * @param patientId The ID of the patient.
 * @param labReportData The byte array containing the report data.
 * @param fileName The name of the file to be saved in the database.
 * @return True if the save was successful, false otherwise.
 */
bool medical::saveLabReportToDb(int patientId, const QByteArray& labReportData, const QString& fileName)
{
    if (!db.isOpen()) {
        QMessageBox::critical(this, "Database Error", "Database is not open.");
        return false;
    }

    QSqlQuery query(db);
    query.prepare("INSERT INTO medical_records (patient_id, labreport, filename) "
                  "VALUES (:patient_id, :labreport, :filename)");

    query.bindValue(":patient_id", patientId);
    query.bindValue(":labreport", labReportData);
    query.bindValue(":filename", fileName);

    if (query.exec()) {
        return true;
    } else {
        QMessageBox::critical(this, "Database Error", "Failed to save lab report: " + query.lastError().text());
        qDebug() << "Save lab report query error: " << query.lastError().text();
        return false;
    }
}

/**
 * @brief Fetches the medical records for the current patient and populates the QTableWidget.
 * This function is called in the constructor to automatically load the data.
 */
void medical::loadMedicalRecords(const QDate& date)
{
    int patientId = UserSession::instance().patientId;
    if (patientId == -1) {
        qDebug() << "No patient session found, cannot load medical records.";
        return;
    }

    if (!db.isOpen()) {
        qDebug() << "Database is not open, cannot load medical records.";
        return;
    }

    // Clear existing table contents
    ui->medicalRecordsTable->clearContents();
    ui->medicalRecordsTable->setRowCount(0);

    QSqlQuery query(db);
    // The query now filters by the selected date. Using SUBSTR to get the date part
    // of the record_date column, which is stored as a TEXT with a timestamp.
    query.prepare("SELECT record_id, record_date, filename FROM medical_records WHERE patient_id = :patient_id AND SUBSTR(record_date, 1, 10) = :selected_date ORDER BY record_date DESC");
    query.bindValue(":patient_id", patientId);
    query.bindValue(":selected_date", date.toString("yyyy-MM-dd"));

    if (query.exec()) {
        int row = 0;
        // The table now has 3 columns: Date, File Name, and Action (for the button)
        ui->medicalRecordsTable->setColumnCount(3);
        QStringList headers;
        headers << "Record Date" << "File Name" << "Action";
        ui->medicalRecordsTable->setHorizontalHeaderLabels(headers);

        // Stretch the header to fit the content
        ui->medicalRecordsTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

        while (query.next()) {
            int recordId = query.value("record_id").toInt();
            QString recordDate = query.value("record_date").toString();
            QString fileName = query.value("filename").toString();

            ui->medicalRecordsTable->insertRow(row);

            QTableWidgetItem* dateItem = new QTableWidgetItem(recordDate);
            dateItem->setFlags(dateItem->flags() & ~Qt::ItemIsEditable);
            ui->medicalRecordsTable->setItem(row, 0, dateItem);

            QTableWidgetItem* fileItem = new QTableWidgetItem(fileName);
            fileItem->setFlags(fileItem->flags() & ~Qt::ItemIsEditable);
            ui->medicalRecordsTable->setItem(row, 1, fileItem);

            QPushButton* viewButton = new QPushButton("View Report");
            ui->medicalRecordsTable->setCellWidget(row, 2, viewButton);

            // Connect the button's clicked signal to the slot using a lambda function
            // to pass the recordId.
            connect(viewButton, &QPushButton::clicked, this, [this, recordId]() {
                onViewReportButtonClicked(recordId);
            });

            row++;
        }
    } else {
        QMessageBox::critical(this, "Database Error", "Failed to load medical records: " + query.lastError().text());
        qDebug() << "Load medical records query error: " << query.lastError().text();
    }
}

/**
 * @brief This slot is triggered when a "View Report" button is clicked.
 * It retrieves the lab report from the database and opens it in a temporary file.
 * @param recordId The ID of the medical record to view.
 */
void medical::onViewReportButtonClicked(int recordId)
{
    if (!db.isOpen()) {
        QMessageBox::critical(this, "Database Error", "Database is not open.");
        return;
    }

    QSqlQuery query(db);
    query.prepare("SELECT labreport, filename FROM medical_records WHERE record_id = :record_id");
    query.bindValue(":record_id", recordId);

    if (query.exec() && query.next()) {
        QByteArray fileData = query.value("labreport").toByteArray();
        QString fileName = query.value("filename").toString();

        // NOTE: QTemporaryFile auto-deletes when it goes out of scope,
        // which can cause a "file not found" error for the external viewer.
        // We will create a non-temporary file in the temporary directory to avoid this issue.
        QString tempFilePath = QDir::tempPath() + "/" + QDateTime::currentDateTime().toString("yyyyMMdd_hhmmss_zzz") + "_" + fileName;

        QFile file(tempFilePath);
        if (file.open(QIODevice::WriteOnly)) {
            if (file.write(fileData) == -1) {
                QMessageBox::critical(this, "File Error", "Failed to write data to temporary file.");
                file.close();
                QFile::remove(tempFilePath); // Clean up on failure
                return;
            }
            file.close();

            // Open the saved file with the default application
            if (!QDesktopServices::openUrl(QUrl::fromLocalFile(tempFilePath))) {
                QMessageBox::warning(this, "File Open Error", "Could not open the report. Please check if you have a PDF reader installed.");
                // Note: The file remains in the temp directory and is not automatically cleaned up.
            } else {
                QMessageBox::information(this, "Report Opened", "The report has been opened. It is saved temporarily at: " + tempFilePath);
            }
        } else {
            QMessageBox::critical(this, "File Error", "Failed to create temporary file: " + file.errorString());
        }

    } else {
        QMessageBox::warning(this, "View Error", "Could not find the medical record in the database.");
    }
}


// --- Navigation Slot Implementations ---

void medical::on_Dashboard_clicked()
{
    int patientId = UserSession::instance().patientId;
    Welcome* welcome = new Welcome(patientId);
    welcome->show();
    this->close();
}

void medical::on_Appointment_clicked()
{
    user = new User;
    user->show();
    this->close();
}

void medical::on_Schedule_clicked()
{
    schedule = new Schedule;
    schedule->show();
    this->close();
}

void medical::on_logout_clicked()
{
    Logout = new logout;
    Logout->setModal(true);
    Logout->show();
}

void medical::on_Settings_clicked()
{
    Setting = new setting;
    Setting->show();
    this->close();
}
void medical::on_dateEdit_dateChanged(const QDate& date){
    loadMedicalRecords(date);

}

void medical::on_viewrecords_clicked()
{
    ui->viewrecords->setStyleSheet(activeStyle);
    ui->uploadrecords->setStyleSheet(inactiveStyle);
}
void medical::on_uploadrecords_clicked(){
    ui->viewrecords->setStyleSheet(inactiveStyle);
    ui->uploadrecords->setStyleSheet(activeStyle);
}

