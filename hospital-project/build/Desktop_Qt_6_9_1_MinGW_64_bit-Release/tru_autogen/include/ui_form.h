/********************************************************************************
** Form generated from reading UI file 'form.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_H
#define UI_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QWidget *info;
    QTextBrowser *welcome;
    QTextBrowser *text;
    QLabel *label;
    QWidget *signup;
    QPushButton *signin;
    QPushButton *Register;
    QWidget *login;
    QTextBrowser *acc;
    QComboBox *gender;
    QPushButton *Register_2;
    QPushButton *acc_text;
    QLineEdit *password;
    QLineEdit *confirm;
    QDateEdit *dateEdit;
    QLineEdit *Phone;
    QLineEdit *Email;
    QLineEdit *Location;
    QLineEdit *name;
    QComboBox *group;
    QFrame *frame;
    QLabel *logo;
    QLabel *text_decor;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName("Form");
        Form->resize(1288, 666);
        Form->setStyleSheet(QString::fromUtf8("#Form{\n"
"background-color:#F2FBFF;\n"
"}"));
        info = new QWidget(Form);
        info->setObjectName("info");
        info->setGeometry(QRect(0, 10, 721, 601));
        welcome = new QTextBrowser(info);
        welcome->setObjectName("welcome");
        welcome->setGeometry(QRect(80, 60, 541, 121));
        welcome->setStyleSheet(QString::fromUtf8("QTextBrowser{\n"
"background-color:#F2FBFF;\n"
"border:0;\n"
"}"));
        text = new QTextBrowser(info);
        text->setObjectName("text");
        text->setGeometry(QRect(80, 180, 541, 141));
        text->setStyleSheet(QString::fromUtf8("#text{\n"
"background-color:#F2FBFF;\n"
"border:0;\n"
"}"));
        label = new QLabel(info);
        label->setObjectName("label");
        label->setGeometry(QRect(80, 300, 541, 331));
        label->setStyleSheet(QString::fromUtf8("#label{\n"
"\n"
"\n"
"}\n"
""));
        label->setPixmap(QPixmap(QString::fromUtf8(":/image/resourse/ui1.png")));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        signup = new QWidget(Form);
        signup->setObjectName("signup");
        signup->setGeometry(QRect(720, 0, 571, 61));
        signin = new QPushButton(signup);
        signin->setObjectName("signin");
        signin->setGeometry(QRect(230, 20, 71, 31));
        signin->setStyleSheet(QString::fromUtf8("#signin{\n"
"    color:#2F80ED;\n"
"    font: 600 9pt \"Roboto\";\n"
"    background-color: transparent;\n"
"}\n"
"#signin::hover{\n"
"    text-decoration: underline;\n"
"    font: 600 9pt \"Roboto\";\n"
"    color:#1872eb;\n"
"}\n"
""));
        Register = new QPushButton(signup);
        Register->setObjectName("Register");
        Register->setGeometry(QRect(330, 20, 93, 31));
        Register->setStyleSheet(QString::fromUtf8("#Register{\n"
"    font: 9pt \"Roboto\";\n"
"    border: 1px solid gray;\n"
"    border-radius: 8px;\n"
"    padding: 5px;\n"
"    background-color:#fff;\n"
"    border-radius: 5px;\n"
"    color:blue;\n"
"}\n"
""));
        login = new QWidget(Form);
        login->setObjectName("login");
        login->setGeometry(QRect(720, 50, 571, 561));
        QFont font;
        font.setFamilies({QString::fromUtf8("Roboto")});
        login->setFont(font);
        login->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        login->setInputMethodHints(Qt::InputMethodHint::ImhDigitsOnly);
        acc = new QTextBrowser(login);
        acc->setObjectName("acc");
        acc->setGeometry(QRect(20, 20, 256, 31));
        acc->setStyleSheet(QString::fromUtf8("#acc{\n"
"background-color:#F2FBFF;\n"
"border:0;\n"
"}"));
        gender = new QComboBox(login);
        gender->addItem(QString());
        gender->addItem(QString());
        gender->addItem(QString());
        gender->addItem(QString());
        gender->setObjectName("gender");
        gender->setGeometry(QRect(20, 110, 131, 31));
        gender->setStyleSheet(QString::fromUtf8("\n"
"QComboBox {\n"
"    font: 10pt \"Roboto\";\n"
"    border: 1px solid #bfc9d1;\n"
"    border-radius: 10px;\n"
"    padding: 8px;\n"
" background-color: #fff;\n"
"    color: #000;\n"
"    box-shadow: 0 2px 8px rgba(44, 62, 80, 0.05);\n"
"    transition: border-color 0.2s;\n"
"}\n"
"QComboBox:focus {\n"
"    border: 1.5px solid #2F80ED;\n"
"    background-color: #fff;\n"
"}\n"
"QComboBox::drop-down {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    width: 20px;\n"
"    border-left: 1px solid #bfc9d1;\n"
"}\n"
""));
        Register_2 = new QPushButton(login);
        Register_2->setObjectName("Register_2");
        Register_2->setGeometry(QRect(20, 410, 391, 29));
        Register_2->setStyleSheet(QString::fromUtf8("#Register_2{\n"
"\n"
"    background-color:#2F80ED;\n"
"    color:#fff;\n"
"    font: 600 9pt \"Roboto\";\n"
"    border: 1px solid gray;\n"
"    border-radius:8px\n"
"\n"
"    \n"
"}"));
        acc_text = new QPushButton(login);
        acc_text->setObjectName("acc_text");
        acc_text->setGeometry(QRect(20, 470, 391, 29));
        acc_text->setStyleSheet(QString::fromUtf8("#acc_text{\n"
"    color:#000;\n"
"    font: 400 9pt \"Roboto\";\n"
"    background-color: transparent;\n"
"}"));
        password = new QLineEdit(login);
        password->setObjectName("password");
        password->setGeometry(QRect(20, 290, 391, 31));
        password->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"    background-color: #fff;\n"
"    border: 1px solid #bfc9d1;\n"
"    border-radius: 10px;\n"
"    padding: 8px;\n"
"    color: #000;\n"
"    font: 10pt \"Roboto\";\n"
"    box-shadow: 0 2px 8px rgba(44, 62, 80, 0.05);\n"
"    transition: border-color 0.2s;\n"
"}\n"
"QLineEdit:focus {\n"
"    border: 1.5px solid #2F80ED;\n"
"    background-color: #f7fbff;\n"
"}\n"
""));
        confirm = new QLineEdit(login);
        confirm->setObjectName("confirm");
        confirm->setGeometry(QRect(20, 330, 391, 31));
        confirm->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"    background-color: #fff;\n"
"    border: 1px solid #bfc9d1;\n"
"    border-radius: 10px;\n"
"    padding: 8px;\n"
"    color: #000;\n"
"    font: 10pt \"Roboto\";\n"
"    box-shadow: 0 2px 8px rgba(44, 62, 80, 0.05);\n"
"    transition: border-color 0.2s;\n"
"}\n"
"QLineEdit:focus {\n"
"    border: 1.5px solid #2F80ED;\n"
"    background-color: #f7fbff;\n"
"}\n"
""));
        dateEdit = new QDateEdit(login);
        dateEdit->setObjectName("dateEdit");
        dateEdit->setGeometry(QRect(310, 110, 101, 31));
        dateEdit->setStyleSheet(QString::fromUtf8("\n"
"QDateEdit {\n"
"    font: 10pt \"Roboto\";\n"
"    border: 1px solid #bfc9d1;\n"
"    border-radius: 10px;\n"
"    padding: 8px;\n"
"    background-color: #fff;\n"
"    color: #000;\n"
"    box-shadow: 0 2px 8px rgba(44, 62, 80, 0.05);\n"
"    transition: border-color 0.2s;\n"
"\n"
"}\n"
"QDateEdit:focus {\n"
"    border: 1.5px solid #2F80ED;\n"
"    background-color: #f7fbff;\n"
"color:black;\n"
"}\n"
"QDateEdit::drop-down {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    width: 20px;\n"
"    border-left: 1px solid #bfc9d1;\n"
"color:black;\n"
"}\n"
""));
        dateEdit->setCalendarPopup(true);
        Phone = new QLineEdit(login);
        Phone->setObjectName("Phone");
        Phone->setGeometry(QRect(20, 250, 391, 31));
        Phone->setMinimumSize(QSize(391, 31));
        Phone->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"    background-color: #fff;\n"
"    border: 1px solid #bfc9d1;\n"
"    border-radius: 10px;\n"
"    padding: 8px;\n"
"    color: #000;\n"
"    font: 10pt \"Roboto\";\n"
"    box-shadow: 0 2px 8px rgba(44, 62, 80, 0.05);\n"
"    transition: border-color 0.2s;\n"
"}\n"
"QLineEdit:focus {\n"
"    border: 1.5px solid #2F80ED;\n"
"    background-color: #f7fbff;\n"
"}\n"
""));
        Phone->setInputMethodHints(Qt::InputMethodHint::ImhDigitsOnly);
        Phone->setMaxLength(10);
        Email = new QLineEdit(login);
        Email->setObjectName("Email");
        Email->setGeometry(QRect(20, 200, 391, 41));
        Email->setMinimumSize(QSize(391, 31));
        Email->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"    background-color: #fff;\n"
"    border: 1px solid #bfc9d1;\n"
"    border-radius: 10px;\n"
"    padding: 8px;\n"
"    color: #000;\n"
"    font: 10pt \"Roboto\";\n"
"    box-shadow: 0 2px 8px rgba(44, 62, 80, 0.05);\n"
"    transition: border-color 0.2s;\n"
"}\n"
"QLineEdit:focus {\n"
"    border: 1.5px solid #2F80ED;\n"
"    background-color: #f7fbff;\n"
"}\n"
""));
        Email->setInputMethodHints(Qt::InputMethodHint::ImhNone);
        Location = new QLineEdit(login);
        Location->setObjectName("Location");
        Location->setGeometry(QRect(20, 150, 391, 41));
        Location->setMinimumSize(QSize(391, 31));
        Location->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"    background-color: #fff;\n"
"    border: 1px solid #bfc9d1;\n"
"    border-radius: 10px;\n"
"    padding: 8px;\n"
"    color: #000;\n"
"    font: 10pt \"Roboto\";\n"
"    box-shadow: 0 2px 8px rgba(44, 62, 80, 0.05);\n"
"    transition: border-color 0.2s;\n"
"}\n"
"QLineEdit:focus {\n"
"    border: 1.5px solid #2F80ED;\n"
"    background-color: #f7fbff;\n"
"}\n"
""));
        Location->setInputMethodHints(Qt::InputMethodHint::ImhNone);
        name = new QLineEdit(login);
        name->setObjectName("name");
        name->setGeometry(QRect(20, 60, 391, 41));
        name->setMinimumSize(QSize(391, 31));
        name->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"    background-color: #fff;\n"
"    border: 1px solid #bfc9d1;\n"
"    border-radius: 10px;\n"
"    padding: 8px;\n"
"    color: #000;\n"
"    font: 10pt \"Roboto\";\n"
"    box-shadow: 0 2px 8px rgba(44, 62, 80, 0.05);\n"
"    transition: border-color 0.2s;\n"
"}\n"
"QLineEdit:focus {\n"
"    border: 1.5px solid #2F80ED;\n"
"    background-color: #f7fbff;\n"
"}\n"
""));
        name->setInputMethodHints(Qt::InputMethodHint::ImhNone);
        group = new QComboBox(login);
        group->addItem(QString());
        group->addItem(QString());
        group->addItem(QString());
        group->addItem(QString());
        group->addItem(QString());
        group->addItem(QString());
        group->addItem(QString());
        group->addItem(QString());
        group->addItem(QString());
        group->addItem(QString());
        group->addItem(QString());
        group->setObjectName("group");
        group->setGeometry(QRect(170, 110, 131, 31));
        group->setStyleSheet(QString::fromUtf8("\n"
"QComboBox {\n"
"    font: 10pt \"Roboto\";\n"
"    border: 1px solid #bfc9d1;\n"
"    border-radius: 10px;\n"
"    padding: 8px;\n"
" background-color: #fff;\n"
"    color: #000;\n"
"    box-shadow: 0 2px 8px rgba(44, 62, 80, 0.05);\n"
"    transition: border-color 0.2s;\n"
"}\n"
"QComboBox:focus {\n"
"    border: 1.5px solid #2F80ED;\n"
"    background-color: #fff;\n"
"}\n"
"QComboBox::drop-down {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    width: 20px;\n"
"    border-left: 1px solid #bfc9d1;\n"
"}\n"
""));
        frame = new QFrame(Form);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(0, 609, 1291, 61));
        frame->setStyleSheet(QString::fromUtf8("#frame{\n"
"    background-color:#56CCF2;\n"
"}"));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        logo = new QLabel(frame);
        logo->setObjectName("logo");
        logo->setGeometry(QRect(120, 20, 31, 20));
        logo->setPixmap(QPixmap(QString::fromUtf8(":/icon/D:/our project/assets/find_Clinic_1.png")));
        text_decor = new QLabel(frame);
        text_decor->setObjectName("text_decor");
        text_decor->setGeometry(QRect(150, 20, 351, 20));

        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QCoreApplication::translate("Form", "Form", nullptr));
        welcome->setHtml(QCoreApplication::translate("Form", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sarabun'; font-size:18pt; font-weight:700; color:#3498db;\">Welcome to</span><span style=\" font-family:'Sarabun'; font-size:18px;\"> </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sarabun'; font-size:18pt; font-weight:600; color:#154360;\">Healthcare Databa"
                        "se Management System </span></p></body></html>", nullptr));
        text->setHtml(QCoreApplication::translate("Form", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sarabun','sans-serif'; font-size:8pt; color:#2d3748;\">Empowering healthcare with smart technology\342\200\224our system makes it easy to manage appointments, access medical history, and stay connected with your care. Whether you're a patient or a doctor, we bring convenience, transparency, and trust to every step of the healthcare journey. <br /></span></p>\n"
"<p style=\""
                        " margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sarabun','sans-serif'; font-size:10pt; font-weight:700; color:#044b79;\">Take Charge of Your Health!</span> </p></body></html>", nullptr));
        label->setText(QString());
        signin->setText(QCoreApplication::translate("Form", "Login", nullptr));
        Register->setText(QCoreApplication::translate("Form", "Register", nullptr));
        acc->setHtml(QCoreApplication::translate("Form", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Roboto'; font-size:10pt; font-weight:700; color:#000000;\">Create Account</span> </p></body></html>", nullptr));
        gender->setItemText(0, QCoreApplication::translate("Form", "Gender", nullptr));
        gender->setItemText(1, QCoreApplication::translate("Form", "Male", nullptr));
        gender->setItemText(2, QCoreApplication::translate("Form", "Female", nullptr));
        gender->setItemText(3, QCoreApplication::translate("Form", "Other", nullptr));

        Register_2->setText(QCoreApplication::translate("Form", "Register", nullptr));
        acc_text->setText(QCoreApplication::translate("Form", "Already have an account", nullptr));
        password->setPlaceholderText(QCoreApplication::translate("Form", "Password", nullptr));
        confirm->setPlaceholderText(QCoreApplication::translate("Form", "Confirm Password", nullptr));
        Phone->setText(QString());
        Phone->setPlaceholderText(QCoreApplication::translate("Form", "Phone Number", nullptr));
        Email->setText(QString());
        Email->setPlaceholderText(QCoreApplication::translate("Form", "Email", nullptr));
        Location->setText(QString());
        Location->setPlaceholderText(QCoreApplication::translate("Form", "Address", nullptr));
        name->setText(QString());
        name->setPlaceholderText(QCoreApplication::translate("Form", "Full Name", nullptr));
        group->setItemText(0, QCoreApplication::translate("Form", "Blood Group", nullptr));
        group->setItemText(1, QCoreApplication::translate("Form", "A+", nullptr));
        group->setItemText(2, QCoreApplication::translate("Form", "B+", nullptr));
        group->setItemText(3, QCoreApplication::translate("Form", "AB+", nullptr));
        group->setItemText(4, QCoreApplication::translate("Form", "O+", nullptr));
        group->setItemText(5, QCoreApplication::translate("Form", "A-", nullptr));
        group->setItemText(6, QCoreApplication::translate("Form", "B-", nullptr));
        group->setItemText(7, QCoreApplication::translate("Form", "AB-", nullptr));
        group->setItemText(8, QCoreApplication::translate("Form", "O-", nullptr));
        group->setItemText(9, QString());
        group->setItemText(10, QString());

        logo->setText(QString());
        text_decor->setText(QCoreApplication::translate("Form", "\302\251 2025 Healthcare Database Management System ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_H
