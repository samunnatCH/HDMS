/********************************************************************************
** Form generated from reading UI file 'logout.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGOUT_H
#define UI_LOGOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_logout
{
public:
    QLabel *text;
    QLabel *random_text;
    QPushButton *cancel;
    QPushButton *logout_2;

    void setupUi(QDialog *logout)
    {
        if (logout->objectName().isEmpty())
            logout->setObjectName("logout");
        logout->resize(400, 300);
        logout->setStyleSheet(QString::fromUtf8("#logout{\n"
"	background-color:#fff;\n"
"	border-radius:20px;\n"
"}"));
        text = new QLabel(logout);
        text->setObjectName("text");
        text->setGeometry(QRect(60, 40, 361, 41));
        text->setStyleSheet(QString::fromUtf8("#text{\n"
"	\n"
"	font: 500 15pt \"Roboto\";\n"
"	color:#1976d2;\n"
"}"));
        random_text = new QLabel(logout);
        random_text->setObjectName("random_text");
        random_text->setGeometry(QRect(40, 90, 341, 121));
        random_text->setStyleSheet(QString::fromUtf8("#random_text{\n"
"	font: 9pt \"Roboto\";\n"
"color:black;\n"
"}"));
        cancel = new QPushButton(logout);
        cancel->setObjectName("cancel");
        cancel->setGeometry(QRect(60, 230, 111, 29));
        cancel->setStyleSheet(QString::fromUtf8("QPushButton#cancel {\n"
"    border: 2px solid #1976d2;\n"
"    background-color: white;\n"
"    color: #1976d2;\n"
"    border-radius: 6px;\n"
"    padding: 6px 12px;\n"
"}\n"
"\n"
"QPushButton#cancel:hover {\n"
"    background-color: #e3f2fd;\n"
"}"));
        logout_2 = new QPushButton(logout);
        logout_2->setObjectName("logout_2");
        logout_2->setGeometry(QRect(230, 230, 121, 29));
        logout_2->setStyleSheet(QString::fromUtf8("QPushButton#logout_2 {\n"
"    background-color: #26a69a;\n"
"    color: white;\n"
"    border: none;\n"
"    border-radius: 6px;\n"
"    padding: 6px 12px;\n"
"}\n"
"\n"
"QPushButton#logout_2:hover {\n"
"    background-color: #2bbbad;\n"
"}"));

        retranslateUi(logout);

        QMetaObject::connectSlotsByName(logout);
    } // setupUi

    void retranslateUi(QDialog *logout)
    {
        logout->setWindowTitle(QCoreApplication::translate("logout", "Dialog", nullptr));
        text->setText(QCoreApplication::translate("logout", "Are you sure you want to log out?", nullptr));
        random_text->setText(QCoreApplication::translate("logout", "<html><head/><body><p align=\"center\">You will be signed out of your account and any </p><p align=\"center\">unsaved changes will be lost.</p><p align=\"center\">Remember to save your work before logging out.</p></body></html>", nullptr));
        cancel->setText(QCoreApplication::translate("logout", "Cancel", nullptr));
        logout_2->setText(QCoreApplication::translate("logout", "Logout", nullptr));
    } // retranslateUi

};

namespace Ui {
    class logout: public Ui_logout {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGOUT_H
