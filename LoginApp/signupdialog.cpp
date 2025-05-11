#include "signupdialog.h"
#include "ui_signupdialog.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>

SignUpDialog::SignUpDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SignUpDialog)
{
    ui->setupUi(this);
}

SignUpDialog::~SignUpDialog()
{
    delete ui;
}

void SignUpDialog::on_registerButton_clicked()
{
    QString username = ui->usernameLineEdit->text();
    QString password = ui->passwordLineEdit->text();

    if (username.isEmpty() || password.isEmpty()) {
        QMessageBox::warning(this, "Error", "Fields cannot be empty");
        return;
    }

    QFile file("users.txt");
    if (!file.open(QIODevice::Append | QIODevice::Text)) {
        QMessageBox::critical(this, "Error", "Unable to open user file.");
        return;
    }

    QTextStream out(&file);
    out << username << " " << password << "\n";
    file.close();

    QMessageBox::information(this, "Success", "User registered successfully!");
    accept();
}
