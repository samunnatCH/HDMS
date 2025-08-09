#include "form.h"
#include "ui_form.h"
#include "form2.h"
#include "QMessageBox"
#include <QDate>
#include <QDateTime>
#include <QDir>
#include <QIcon>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
#include <QCryptographicHash>
#include <QDebug>

Form::Form(QWidget *parent)
    : QWidget(parent),
    ui(new Ui::Form),
    form2(nullptr)
{
    ui->setupUi(this);
    this->setWindowTitle("HDMS");
setWindowIcon(QIcon(":/app_icon/icons/icon.jpeg"));


    // Establish the database connection
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("hdmsdatabase.db");

    // --- CRITICAL DEBUG STEP: Print the database path ---
    qDebug() << "Attempting to open database at: " << QDir::currentPath() + QDir::separator() + db.databaseName();
    // ---------------------------------------------------

    if (!db.open()) {
        QMessageBox::critical(this, "Database Error", "Could not connect to the database: " + db.lastError().text());
    }

    // UI Setup
    QPixmap pixmap(":/image/resourse/ui1.png");
    ui->label->setPixmap(pixmap.scaled(QSize(544, 331), Qt::IgnoreAspectRatio, Qt::SmoothTransformation));
    ui->name->setPlaceholderText("Full name");
    ui->Email->setPlaceholderText("Email");
    ui->Location->setPlaceholderText("Location");
    ui->Phone->setPlaceholderText("Phone No: ");
    ui->password->setPlaceholderText("Password");
    ui->confirm->setPlaceholderText("Confirm password");
    ui->password->setEchoMode(QLineEdit::Password);
    ui->confirm->setEchoMode(QLineEdit::Password);
    //validator for phone number start
    QRegularExpression rx("[0-9]*");
    QValidator *validator = new QRegularExpressionValidator(rx, this);
    ui->Phone->setValidator(validator);
    //validator for phone number end



    QRegularExpression emailRegex("[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\\.[a-zA-Z]{2,}");

    //  Create a validator with the regular expression.
    QRegularExpressionValidator *emailValidator = new QRegularExpressionValidator(emailRegex, this);

    //  Set the validator on the QLineEdit.
    ui->Email->setValidator(emailValidator);
    connect(ui->Email, &QLineEdit::textChanged, [=](const QString &text) {
        // The validator has three states: Invalid, Intermediate, and Acceptable.
        int pos = 0; // Position to check from
        if (emailValidator->validate(const_cast<QString&>(text), pos) == QValidator::Acceptable) {
            // Set style to green if valid
            ui->Email->setStyleSheet("border: 2px solid green;");
            ui->Register_2->setEnabled(true);
        } else {
            // Set style to red if not yet valid
            ui->Email->setStyleSheet("border: 2px solid red;");
            ui->Register_2->setEnabled(false);
        }
    });








}



Form::~Form()
{
    if (db.isOpen()) {
        db.close();
    }
    QSqlDatabase::removeDatabase(db.connectionName()); // Close and remove the database connection
    delete ui;
}

void Form::on_Register_2_clicked()
{
    QString name = ui->name->text();
    QString email = ui->Email->text();
    QString location = ui->Location->text(); // This maps to 'address' in  patients table
    QString phone = ui->Phone->text();
    QDate dob = ui->dateEdit->date();
    QString gender = ui->gender->currentText();
    QString password = ui->password->text();
    QString confirmPassword = ui->confirm->text();
    QString bloodgroup = ui->group->currentText();

    // Input validation
    if (name.isEmpty() || email.isEmpty() || location.isEmpty() || phone.isEmpty() ||
        dob.isNull() || gender=="Gender" ||
        password.isEmpty() || confirmPassword.isEmpty() || bloodgroup=="Blood Group") {
        QMessageBox::warning(this, "Registration Error", "Please fill in all fields.");
        return;
    }

    if (password != confirmPassword) {
        QMessageBox::warning(this, "Registration Error", "Passwords do not match.");
        return;
    }
if (password.length() < 6) { // Example: minimum password length
        QMessageBox::warning(this, "Registration Error", "Password must be at least 6 characters long.");
        return;
    }

    if (!db.isOpen()) {
        QMessageBox::critical(this, "Database Error", "Database connection is closed. Cannot register user.");
        return;
    }


    db.transaction();
    QSqlQuery query(db);

    //  Insert into the 'users' table
    // Explicitly include 'email' in the column list and bind its value to match the schema.
    query.prepare("INSERT INTO users (username, password_hash, role, email, created_at) "
                  "VALUES (:username, :password_hash, :role, :email, :created_at)");
    query.bindValue(":username", email); // Using email as username
    query.bindValue(":password_hash", QString(QCryptographicHash::hash(password.toUtf8(), QCryptographicHash::Sha256).toHex()));
    query.bindValue(":role", "patient"); // Default role for registration
    query.bindValue(":email", email); // Binding email
    query.bindValue(":created_at", QDateTime::currentDateTime().toString(Qt::ISODate)); // Add current timestamp

    if (!query.exec()) {
        QMessageBox::critical(this, "Registration Error", "Failed to create user account: " + query.lastError().text());
        db.rollback(); // Rollback on failure
        return;
    }

    //  Get the new user's ID and insert details into the 'patients' table
    QVariant userId = query.lastInsertId();
    query.prepare("INSERT INTO patients (user_id, full_name, date_of_birth, gender, phone_number, address, blood_type) "
                  "VALUES (:user_id, :name, :date_of_birth, :gender, :phone, :address, :blood_type)");
    query.bindValue(":user_id", userId);
    query.bindValue(":name", name);
    query.bindValue(":date_of_birth", dob.toString("yyyy-MM-dd")); // Use date_of_birth column name
    query.bindValue(":gender", gender);
    query.bindValue(":phone", phone);
    query.bindValue(":address", location); // Mapping 'Location' UI field to 'address' database column
    query.bindValue(":blood_type", bloodgroup); // Insert "N/A" as blood type is not collected from UI

    if (!query.exec()) {
        QMessageBox::critical(this, "Registration Error", "Failed to save patient details: " + query.lastError().text());
        db.rollback();
        return;
    }

    // Commit the transaction and switch to the sign-in form
    if (db.commit()) {
        QMessageBox::information(this, "Registration", "Registration successful! Please sign in.");
        form2 = new Form2();
        form2->show();
        this->close();
    } else {
        QMessageBox::critical(this, "Database Error", "Failed to commit registration: " + db.lastError().text());
        db.rollback();
    }
}

void Form::on_signin_clicked()
{
    form2 = new Form2();
    form2->show();
    this->close();
}

void Form::on_acc_text_clicked()
{
    on_signin_clicked(); // Re-use the signin clicked slot
}
