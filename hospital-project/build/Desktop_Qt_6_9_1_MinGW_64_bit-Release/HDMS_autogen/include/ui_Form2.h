/********************************************************************************
** Form generated from reading UI file 'form2.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM2_H
#define UI_FORM2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form2
{
public:
    QWidget *info;
    QTextBrowser *welcome;
    QTextBrowser *text;
    QLabel *pic;
    QWidget *signup;
    QPushButton *register_2;
    QPushButton *signin;
    QWidget *login;
    QPushButton *sign_in;
    QPushButton *acc_2;
    QPushButton *forgot_password;
    QLineEdit *password;
    QLineEdit *email;
    QLabel *label;
    QFrame *frame;
    QLabel *logo;
    QLabel *text_decor;

    void setupUi(QWidget *Form2)
    {
        if (Form2->objectName().isEmpty())
            Form2->setObjectName("Form2");
        Form2->resize(1288, 666);
        Form2->setStyleSheet(QString::fromUtf8("#Form2{\n"
"background-color:#F2FBFF;\n"
"}"));
        info = new QWidget(Form2);
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
        text->setGeometry(QRect(80, 140, 541, 141));
        text->setStyleSheet(QString::fromUtf8("#text{\n"
"background-color:#F2FBFF;\n"
"border:0;\n"
"}"));
        pic = new QLabel(info);
        pic->setObjectName("pic");
        pic->setGeometry(QRect(70, 270, 544, 331));
        pic->setStyleSheet(QString::fromUtf8("#label{\n"
"\n"
"\n"
"}\n"
""));
        pic->setPixmap(QPixmap(QString::fromUtf8(":/image/resourse/ui1.png")));
        pic->setAlignment(Qt::AlignmentFlag::AlignCenter);
        signup = new QWidget(Form2);
        signup->setObjectName("signup");
        signup->setGeometry(QRect(720, 0, 571, 61));
        register_2 = new QPushButton(signup);
        register_2->setObjectName("register_2");
        register_2->setGeometry(QRect(330, 20, 71, 31));
        register_2->setStyleSheet(QString::fromUtf8("#register_2{\n"
"	color:#2F80ED;\n"
"	font: 600 9pt \"Roboto\";\n"
"background-color: transparent;\n"
"}\n"
"#register_2::hover{\n"
"	text-decoration: underline;\n"
"font: 600 9pt \"Roboto\";\n"
"color:#1872eb;\n"
"}\n"
""));
        signin = new QPushButton(signup);
        signin->setObjectName("signin");
        signin->setGeometry(QRect(220, 20, 93, 31));
        signin->setStyleSheet(QString::fromUtf8("#signin{\n"
"	font: 9pt \"Roboto\";\n"
"    border: 1px solid gray;\n"
"    border-radius: 8px;\n"
"    padding: 5px;\n"
"	background-color:#fff;\n"
"	border-radius: 5px;\n"
"color:blue;\n"
"}"));
        login = new QWidget(Form2);
        login->setObjectName("login");
        login->setGeometry(QRect(720, 50, 571, 561));
        QFont font;
        font.setFamilies({QString::fromUtf8("Roboto")});
        login->setFont(font);
        login->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        sign_in = new QPushButton(login);
        sign_in->setObjectName("sign_in");
        sign_in->setGeometry(QRect(40, 330, 391, 29));
        sign_in->setStyleSheet(QString::fromUtf8("#sign_in{\n"
"\n"
"	background-color:#2F80ED;\n"
"	color:#fff;\n"
"	font: 600 9pt \"Roboto\";\n"
"	border: 1px solid gray;\n"
"	border-radius:8px\n"
"\n"
"	\n"
"}"));
        acc_2 = new QPushButton(login);
        acc_2->setObjectName("acc_2");
        acc_2->setGeometry(QRect(40, 380, 391, 29));
        acc_2->setStyleSheet(QString::fromUtf8("#acc_2{\n"
"	color:#000;\n"
"	font: 400 9pt \"Roboto\";\n"
"	background-color: transparent;\n"
"}"));
        forgot_password = new QPushButton(login);
        forgot_password->setObjectName("forgot_password");
        forgot_password->setGeometry(QRect(270, 260, 141, 29));
        forgot_password->setStyleSheet(QString::fromUtf8("#forgot_password{\n"
"	color:#000;\n"
"	font: 400 9pt \"Roboto\";\n"
"	background-color: transparent;\n"
"}"));
        password = new QLineEdit(login);
        password->setObjectName("password");
        password->setGeometry(QRect(32, 190, 391, 31));
        password->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color:#fff;\n"
"	border: 1px solid gray;\n"
"	border-radius:8px;\n"
"		padding:4px;\n"
"color:black;\n"
"}"));
        email = new QLineEdit(login);
        email->setObjectName("email");
        email->setGeometry(QRect(30, 150, 391, 31));
        email->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color:#fff;\n"
"	border: 1px solid gray;\n"
"	border-radius:8px;\n"
"		padding:4px;\n"
"color:black;\n"
"}"));
        label = new QLabel(login);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 90, 191, 41));
        label->setStyleSheet(QString::fromUtf8("\n"
"	font: 200 20pt \"Roboto\";\n"
"color:black;\n"
"	\n"
"	\n"
""));
        frame = new QFrame(Form2);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(0, 609, 1291, 61));
        frame->setStyleSheet(QString::fromUtf8("#frame{\n"
"	background-color:#56CCF2;\n"
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

        retranslateUi(Form2);

        QMetaObject::connectSlotsByName(Form2);
    } // setupUi

    void retranslateUi(QWidget *Form2)
    {
        Form2->setWindowTitle(QCoreApplication::translate("Form2", "Form", nullptr));
        welcome->setHtml(QCoreApplication::translate("Form2", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sarabun'; font-size:18pt; font-weight:700; color:#3498db;\">Welcome to</span><span style=\" font-family:'Sarabun'; font-size:18px;\"> </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sarabun'; font-size:18pt; font-weight:600; color:#154360;\">Healthcare Databa"
                        "se Management System </span></p></body></html>", nullptr));
        text->setHtml(QCoreApplication::translate("Form2", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sarabun','sans-serif'; font-size:8pt; color:#2d3748;\">Empowering healthcare with smart technology\342\200\224our system makes it easy to manage appointments, access medical history, and stay connected with your care. Whether you're a patient or a doctor, we bring convenience, transparency, and trust to every step of the healthcare journey. <br /></span></p>\n"
"<p style=\""
                        " margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sarabun','sans-serif'; font-size:10pt; font-weight:700; color:#044b79;\">Take Charge of Your Health!</span> </p></body></html>", nullptr));
        pic->setText(QString());
        register_2->setText(QCoreApplication::translate("Form2", "Register", nullptr));
        signin->setText(QCoreApplication::translate("Form2", "Login", nullptr));
        sign_in->setText(QCoreApplication::translate("Form2", "Login", nullptr));
        acc_2->setText(QCoreApplication::translate("Form2", "Create an account", nullptr));
        forgot_password->setText(QCoreApplication::translate("Form2", "Forgot Password?", nullptr));
        password->setPlaceholderText(QCoreApplication::translate("Form2", "Password", nullptr));
        email->setText(QString());
        email->setPlaceholderText(QCoreApplication::translate("Form2", "Email:", nullptr));
        label->setText(QCoreApplication::translate("Form2", "Login", nullptr));
        logo->setText(QString());
        text_decor->setText(QCoreApplication::translate("Form2", "\302\251 2025 Healthcare Database Management System ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form2: public Ui_Form2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM2_H
