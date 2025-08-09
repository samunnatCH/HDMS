#include "form2.h"
#include "ui_Form2.h"
#include "form.h"
#include "welcome.h"
#include "user_session.h"
#include "QMessageBox"
#include <QIcon>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
#include <QCryptographicHash>
#include <QDebug>

Form2::Form2(QWidget *parent)
    : QWidget(parent),
    ui(new Ui::Form2),
    form(nullptr),
    welcome(nullptr)
{
    ui->setupUi(this);
    setWindowIcon(QIcon(":/app_icon/icons/icon.jpeg"));
    this->setWindowTitle("HDMS");

    // Use a unique connection name to avoid conflicts
    db = QSqlDatabase::addDatabase("QSQLITE", "login_connection");
    db.setDatabaseName("hdmsdatabase.db");

    qDebug() << "Attempting to open login database at: " << db.databaseName(); // Debugging line

    if (!db.open()) {
        QMessageBox::critical(this, "Database Error", "Could not connect to the database: " + db.lastError().text());
    }

    // --- UI Setup ---
    QPixmap pixmap(":/image/resourse/ui1.png");
    ui->pic->setPixmap(pixmap.scaled(QSize(544, 331), Qt::IgnoreAspectRatio, Qt::SmoothTransformation));
    ui->email->setPlaceholderText("Email");
    ui->password->setPlaceholderText("Password");
    ui->password->setEchoMode(QLineEdit::Password);
}

Form2::~Form2()
{
    if (db.isOpen()) {
        db.close();
    }
    QSqlDatabase::removeDatabase(db.connectionName()); // Close and remove the database connection
    delete ui;
}

void Form2::on_sign_in_clicked()
{
    QString email = ui->email->text();
    QString password = ui->password->text();

    if (email.isEmpty() || password.isEmpty()) {
        QMessageBox::warning(this, "Login Failed", "Please enter both email and password.");
        return;
    }

    if (!db.isOpen()) {
        QMessageBox::critical(this, "Database Error", "Database connection is closed. Cannot log in.");
        return;
    }

    QSqlQuery query(db);
    QString hashedPassword = QString(QCryptographicHash::hash(password.toUtf8(), QCryptographicHash::Sha256).toHex());

    // The SELECT query should match the columns you intend to retrieve and the WHERE clauses

    // Here, we are binding two values: :username and :password_hash
    query.prepare("SELECT p.patient_id, p.full_name, u.email "
                  "FROM users u JOIN patients p ON u.user_id = p.user_id "
                  "WHERE u.username = :username AND u.password_hash = :password_hash");
    query.bindValue(":username", email); // Binding email to username
    query.bindValue(":password_hash", hashedPassword); // Binding hashed password

    if (!query.exec()) {
        QMessageBox::critical(this, "Login Error", "Database query failed: " + query.lastError().text());
        qDebug() << "Login query error: " << query.lastError().text(); // More detailed debug
        return;
    }

    // Check if the query returned a result
    if (query.next()) {
        // --- Login Successful ---
        int patientId = query.value(0).toInt();
        QString fullName = query.value(1).toString();
        QString userEmail = query.value(2).toString();

        // Populate the user session
        UserSession::instance().patientId = patientId;
        UserSession::instance().firstname = fullName.split(" ").first();
        UserSession::instance().lastname = fullName.split(" ").last();
        UserSession::instance().email = userEmail;

        QMessageBox::information(this, "Login", "Login successful!");

        // Open the main welcome window, passing the patientId
        welcome = new Welcome(patientId);
        welcome->show();
        this->close();
    } else {
        // --- Login Failed ---
        QMessageBox::warning(this, "Login Failed", "Invalid email or password.");
    }
}

void Form2::on_register_2_clicked() {
    form = new Form();
    form->show();
    this->close();
}

void Form2::on_acc_2_clicked() {
    on_register_2_clicked(); // Re-use the register clicked slot
}
