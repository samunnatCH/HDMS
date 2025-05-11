/********************************************************************************
** Form generated from reading UI file 'signupdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUPDIALOG_H
#define UI_SIGNUPDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_SignUpDialog
{
public:
    QLineEdit *usernameLineEdit;
    QLineEdit *passwordLineEdit;
    QLabel *label;
    QLabel *label_2;
    QPushButton *registerButton;

    void setupUi(QDialog *SignUpDialog)
    {
        if (SignUpDialog->objectName().isEmpty())
            SignUpDialog->setObjectName("SignUpDialog");
        SignUpDialog->resize(1000, 615);
        usernameLineEdit = new QLineEdit(SignUpDialog);
        usernameLineEdit->setObjectName("usernameLineEdit");
        usernameLineEdit->setGeometry(QRect(440, 280, 113, 28));
        passwordLineEdit = new QLineEdit(SignUpDialog);
        passwordLineEdit->setObjectName("passwordLineEdit");
        passwordLineEdit->setGeometry(QRect(440, 330, 113, 28));
        passwordLineEdit->setEchoMode(QLineEdit::EchoMode::Password);
        label = new QLabel(SignUpDialog);
        label->setObjectName("label");
        label->setGeometry(QRect(360, 290, 71, 20));
        label_2 = new QLabel(SignUpDialog);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(360, 330, 71, 20));
        registerButton = new QPushButton(SignUpDialog);
        registerButton->setObjectName("registerButton");
        registerButton->setGeometry(QRect(430, 400, 83, 29));

        retranslateUi(SignUpDialog);

        QMetaObject::connectSlotsByName(SignUpDialog);
    } // setupUi

    void retranslateUi(QDialog *SignUpDialog)
    {
        SignUpDialog->setWindowTitle(QCoreApplication::translate("SignUpDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("SignUpDialog", "Username", nullptr));
        label_2->setText(QCoreApplication::translate("SignUpDialog", "Password", nullptr));
        registerButton->setText(QCoreApplication::translate("SignUpDialog", "SIGN UP", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SignUpDialog: public Ui_SignUpDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUPDIALOG_H
