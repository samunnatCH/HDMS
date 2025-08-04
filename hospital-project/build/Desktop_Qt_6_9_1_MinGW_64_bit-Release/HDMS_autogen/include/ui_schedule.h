/********************************************************************************
** Form generated from reading UI file 'schedule.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCHEDULE_H
#define UI_SCHEDULE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Schedule
{
public:
    QFrame *frame;
    QLabel *profile;
    QLabel *background;
    QPushButton *Dashboard;
    QPushButton *Schedule_B;
    QPushButton *Appointment;
    QPushButton *Settings;
    QPushButton *Medical_records;
    QPushButton *logOut;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *patientIdLabel;
    QLabel *usernameLabel;
    QFrame *frame_2;
    QLabel *appointment;
    QCalendarWidget *calendarWidget;
    QTextBrowser *textBrowser_2;
    QTextBrowser *textBrowser_3;
    QTimeEdit *timeEdit;
    QComboBox *select_Hospital;
    QTextEdit *reasoning;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *set_appointment;
    QLabel *appointment_2;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;

    void setupUi(QWidget *Schedule)
    {
        if (Schedule->objectName().isEmpty())
            Schedule->setObjectName("Schedule");
        Schedule->resize(1285, 683);
        frame = new QFrame(Schedule);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(0, 0, 251, 741));
        frame->setStyleSheet(QString::fromUtf8("frame{\n"
"background-color:#0A2F5C;\n"
"}"));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        profile = new QLabel(frame);
        profile->setObjectName("profile");
        profile->setGeometry(QRect(50, 30, 141, 181));
        profile->setStyleSheet(QString::fromUtf8("front{\n"
"url(:/Project/patient_Dashboard/assets/patient.png)\n"
"	border-radus;20px\n"
"}"));
        profile->setPixmap(QPixmap(QString::fromUtf8(":/image/resourse/profile.jpg")));
        background = new QLabel(frame);
        background->setObjectName("background");
        background->setGeometry(QRect(0, 0, 251, 751));
        background->setStyleSheet(QString::fromUtf8("#background{\n"
"background-color:#0A2F5C;\n"
"\n"
"}"));
        Dashboard = new QPushButton(frame);
        Dashboard->setObjectName("Dashboard");
        Dashboard->setGeometry(QRect(60, 270, 121, 29));
        Dashboard->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:black;\n"
"	color:#fff;\n"
"	font: 9pt \"Roboto\";\n"
"	border-radius:5px;\n"
"	\n"
"}"));
        Schedule_B = new QPushButton(frame);
        Schedule_B->setObjectName("Schedule_B");
        Schedule_B->setGeometry(QRect(60, 370, 121, 29));
        Schedule_B->setStyleSheet(QString::fromUtf8("\n"
"\n"
"QPushButton{\n"
"	background-color:#269597;\n"
"	color:#fff;\n"
"	font: 200 9pt \"Roboto\";\n"
"	border-radius:5px;\n"
"}"));
        Appointment = new QPushButton(frame);
        Appointment->setObjectName("Appointment");
        Appointment->setGeometry(QRect(60, 320, 121, 29));
        Appointment->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:black;\n"
"	color:#fff;\n"
"	font: 9pt \"Roboto\";\n"
"	border-radius:5px;\n"
"	\n"
"}"));
        Settings = new QPushButton(frame);
        Settings->setObjectName("Settings");
        Settings->setGeometry(QRect(60, 470, 121, 29));
        Settings->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:black;\n"
"	color:#fff;\n"
"	font: 9pt \"Roboto\";\n"
"	border-radius:5px;\n"
"	\n"
"}"));
        Medical_records = new QPushButton(frame);
        Medical_records->setObjectName("Medical_records");
        Medical_records->setGeometry(QRect(60, 420, 121, 29));
        Medical_records->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:black;\n"
"	color:#fff;\n"
"	font: 9pt \"Roboto\";\n"
"	border-radius:5px;\n"
"	\n"
"}"));
        logOut = new QPushButton(frame);
        logOut->setObjectName("logOut");
        logOut->setGeometry(QRect(60, 620, 111, 29));
        logOut->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:black;\n"
"	color:#fff;\n"
"	font: 9pt \"Roboto\";\n"
"	border-radius:5px;\n"
"	\n"
"}"));
        label_5 = new QLabel(frame);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(70, 270, 21, 31));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/icon/icons/dashboard.png")));
        label_6 = new QLabel(frame);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(70, 320, 16, 31));
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/icon/icons/appointment.png")));
        label_7 = new QLabel(frame);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(70, 420, 16, 31));
        label_7->setPixmap(QPixmap(QString::fromUtf8(":/icon/icons/medical.png")));
        label_8 = new QLabel(frame);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(150, 370, 21, 31));
        label_8->setPixmap(QPixmap(QString::fromUtf8(":/icon/icons/schedule.png")));
        label_9 = new QLabel(frame);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(70, 620, 21, 31));
        label_9->setPixmap(QPixmap(QString::fromUtf8(":/icon/icons/logout.png")));
        label_10 = new QLabel(frame);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(70, 470, 21, 31));
        label_10->setPixmap(QPixmap(QString::fromUtf8(":/icon/icons/setting.png")));
        patientIdLabel = new QLabel(frame);
        patientIdLabel->setObjectName("patientIdLabel");
        patientIdLabel->setGeometry(QRect(60, 230, 171, 31));
        patientIdLabel->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"color:white\n"
";\n"
"font: 12pt \"Segoe UI\";\n"
"	border:none;"));
        usernameLabel = new QLabel(frame);
        usernameLabel->setObjectName("usernameLabel");
        usernameLabel->setGeometry(QRect(60, 200, 191, 41));
        usernameLabel->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"color:white\n"
";\n"
"font: 12pt \"Segoe UI\";\n"
"	border:none;"));
        background->raise();
        Schedule_B->raise();
        profile->raise();
        Dashboard->raise();
        Appointment->raise();
        Settings->raise();
        Medical_records->raise();
        logOut->raise();
        label_5->raise();
        label_6->raise();
        label_7->raise();
        label_8->raise();
        label_9->raise();
        label_10->raise();
        patientIdLabel->raise();
        usernameLabel->raise();
        frame_2 = new QFrame(Schedule);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(250, 0, 1061, 741));
        frame_2->setStyleSheet(QString::fromUtf8("#frame_2{\n"
"	background-color:#E0F2FE;\n"
"}"));
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        appointment = new QLabel(frame_2);
        appointment->setObjectName("appointment");
        appointment->setGeometry(QRect(30, 40, 621, 311));
        appointment->setStyleSheet(QString::fromUtf8("#appointment{\n"
"qproperty-alignment: 'AlignLeft';\n"
"	font: 600 15pt \"Roboto\";\n"
"background-color:#BFDBFE;\n"
"border-radius:10px;\n"
"margin:2px;\n"
"padding:10px;\n"
"}"));
        calendarWidget = new QCalendarWidget(frame_2);
        calendarWidget->setObjectName("calendarWidget");
        calendarWidget->setGeometry(QRect(680, 50, 351, 291));
        calendarWidget->setStyleSheet(QString::fromUtf8("QCalendarWidget{\n"
"font: 500 9pt \"Roboto\";\n"
"	border: 1px solid gray;\n"
"	border-radius:8px\n"
"}\n"
""));
        textBrowser_2 = new QTextBrowser(frame_2);
        textBrowser_2->setObjectName("textBrowser_2");
        textBrowser_2->setGeometry(QRect(30, 440, 401, 201));
        textBrowser_2->setStyleSheet(QString::fromUtf8("font: 14pt \"Segoe UI\";\n"
"color:black;\n"
"background-color:#BFDBFE;\n"
"border-radius:10px;\n"
"margin:2px;\n"
"padding:10px;"));
        textBrowser_3 = new QTextBrowser(frame_2);
        textBrowser_3->setObjectName("textBrowser_3");
        textBrowser_3->setGeometry(QRect(450, 380, 571, 261));
        textBrowser_3->setStyleSheet(QString::fromUtf8("#textBrowser_3{\n"
"qproperty-alignment: 'AlignLeft';\n"
"	font: 600 15pt \"Roboto\";\n"
"background-color:#BFDBFE;\n"
"border-radius:10px;\n"
"margin:2px;\n"
"padding:10px;\n"
"}"));
        timeEdit = new QTimeEdit(frame_2);
        timeEdit->setObjectName("timeEdit");
        timeEdit->setGeometry(QRect(80, 110, 141, 31));
        timeEdit->setStyleSheet(QString::fromUtf8("#timeEdit{\n"
"	background-color:#E0F2FE;\n"
"	font: 9pt \"8514oem\";\n"
"color:black;\n"
"	\n"
"}"));
        timeEdit->setReadOnly(false);
        timeEdit->setButtonSymbols(QAbstractSpinBox::ButtonSymbols::UpDownArrows);
        timeEdit->setCalendarPopup(false);
        timeEdit->setTime(QTime(10, 0, 0));
        select_Hospital = new QComboBox(frame_2);
        select_Hospital->setObjectName("select_Hospital");
        select_Hospital->setGeometry(QRect(80, 200, 201, 26));
        select_Hospital->setStyleSheet(QString::fromUtf8("#select_Hospital{\n"
"	background-color:#E0F2FE;\n"
"	font: 9pt \"8514oem\";\n"
"color:black;\n"
"	border-radius:6px;\n"
"\n"
"}"));
        select_Hospital->setCurrentText(QString::fromUtf8(""));
        reasoning = new QTextEdit(frame_2);
        reasoning->setObjectName("reasoning");
        reasoning->setGeometry(QRect(80, 270, 491, 61));
        reasoning->setStyleSheet(QString::fromUtf8("#reasoning{\n"
"	background-color:#E0F2FE;\n"
"color:black;\n"
"	font: 600 9pt \"Segoe UI\";\n"
"	border-radius:6px;\n"
"}"));
        label = new QLabel(frame_2);
        label->setObjectName("label");
        label->setGeometry(QRect(490, 450, 201, 21));
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font-family: \"Roboto\", \"Segoe UI\", \"Helvetica Neue\", \"Arial\", sans-serif;\n"
"    font-size: 14px;\n"
"    font-weight: 500;           /* Medium weight for modern look */\n"
"    color: #2e2e2e;             /* Dark gray text */\n"
"    letter-spacing: 0.5px;      /* Slight spacing for clarity */\n"
"    padding: 4px 8px;           /* Optional: inner padding */\n"
"    background: transparent;    /* Keep background clean */\n"
"    border: none;\n"
"}\n"
""));
        label_2 = new QLabel(frame_2);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(490, 530, 201, 21));
        label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font-family: \"Roboto\", \"Segoe UI\", \"Helvetica Neue\", \"Arial\", sans-serif;\n"
"    font-size: 14px;\n"
"    font-weight: 500;           /* Medium weight for modern look */\n"
"    color: #2e2e2e;             /* Dark gray text */\n"
"    letter-spacing: 0.5px;      /* Slight spacing for clarity */\n"
"    padding: 4px 8px;           /* Optional: inner padding */\n"
"    background: transparent;    /* Keep background clean */\n"
"    border: none;\n"
"}\n"
""));
        label_3 = new QLabel(frame_2);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(490, 490, 201, 21));
        label_3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font-family: \"Roboto\", \"Segoe UI\", \"Helvetica Neue\", \"Arial\", sans-serif;\n"
"    font-size: 14px;\n"
"    font-weight: 500;           /* Medium weight for modern look */\n"
"    color: #2e2e2e;             /* Dark gray text */\n"
"    letter-spacing: 0.5px;      /* Slight spacing for clarity */\n"
"    padding: 4px 8px;           /* Optional: inner padding */\n"
"    background: transparent;    /* Keep background clean */\n"
"    border: none;\n"
"}\n"
""));
        label_4 = new QLabel(frame_2);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(490, 570, 201, 21));
        label_4->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font-family: \"Roboto\", \"Segoe UI\", \"Helvetica Neue\", \"Arial\", sans-serif;\n"
"    font-size: 14px;\n"
"    font-weight: 500;           /* Medium weight for modern look */\n"
"    color: #2e2e2e;             /* Dark gray text */\n"
"    letter-spacing: 0.5px;      /* Slight spacing for clarity */\n"
"    padding: 4px 8px;           /* Optional: inner padding */\n"
"    background: transparent;    /* Keep background clean */\n"
"    border: none;\n"
"}\n"
""));
        set_appointment = new QPushButton(frame_2);
        set_appointment->setObjectName("set_appointment");
        set_appointment->setGeometry(QRect(460, 200, 141, 29));
        set_appointment->setStyleSheet(QString::fromUtf8("#set_appointment{\n"
"\n"
"	background-color:#2F80ED;\n"
"	\n"
"	font: 600 9pt \"Roboto\";\n"
"	border: 1px solid gray;\n"
"	border-radius:8px\n"
"\n"
"	\n"
"}"));
        appointment_2 = new QLabel(frame_2);
        appointment_2->setObjectName("appointment_2");
        appointment_2->setGeometry(QRect(10, 380, 431, 271));
        appointment_2->setStyleSheet(QString::fromUtf8("#appointment_2{\n"
"qproperty-alignment: 'AlignLeft';\n"
"	font: 600 15pt \"Roboto\";\n"
"background-color:#BFDBFE;\n"
"border-radius:10px;\n"
"margin:2px;\n"
"padding:10px;\n"
"}"));
        label_11 = new QLabel(frame_2);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(40, 380, 401, 61));
        label_11->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"font: 20pt \"SansSerif\";\n"
"\n"
"color:black;\n"
"\n"
"	border:none;"));
        label_12 = new QLabel(frame_2);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(480, 390, 301, 51));
        label_12->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"font: 20pt \"SansSerif\";\n"
"\n"
"color:black;\n"
"\n"
"	border:none;"));
        label_13 = new QLabel(frame_2);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(50, 0, 321, 51));
        label_13->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"font: 20pt \"SansSerif\";\n"
"\n"
"color:black;\n"
"\n"
"	border:none;"));
        label_14 = new QLabel(frame_2);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(690, 10, 271, 51));
        label_14->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"font: 20pt \"SansSerif\";\n"
"\n"
"color:black;\n"
"\n"
"	border:none;"));
        label_15 = new QLabel(frame_2);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(90, 80, 121, 21));
        label_15->setStyleSheet(QString::fromUtf8("color:black;"));
        label_16 = new QLabel(frame_2);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(80, 170, 151, 21));
        label_16->setStyleSheet(QString::fromUtf8("color:black;"));
        label_17 = new QLabel(frame_2);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(80, 240, 191, 21));
        label_17->setStyleSheet(QString::fromUtf8("color:black;"));
        appointment_2->raise();
        appointment->raise();
        calendarWidget->raise();
        textBrowser_2->raise();
        textBrowser_3->raise();
        timeEdit->raise();
        select_Hospital->raise();
        reasoning->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        set_appointment->raise();
        label_11->raise();
        label_12->raise();
        label_13->raise();
        label_14->raise();
        label_15->raise();
        label_16->raise();
        label_17->raise();

        retranslateUi(Schedule);

        QMetaObject::connectSlotsByName(Schedule);
    } // setupUi

    void retranslateUi(QWidget *Schedule)
    {
        Schedule->setWindowTitle(QCoreApplication::translate("Schedule", "Form", nullptr));
        profile->setText(QString());
        background->setText(QString());
        Dashboard->setText(QCoreApplication::translate("Schedule", "Dashboard", nullptr));
        Schedule_B->setText(QCoreApplication::translate("Schedule", "Schedule        ", nullptr));
        Appointment->setText(QCoreApplication::translate("Schedule", "     Appointment", nullptr));
        Settings->setText(QCoreApplication::translate("Schedule", "Settings", nullptr));
        Medical_records->setText(QCoreApplication::translate("Schedule", "     Medical Records", nullptr));
        logOut->setText(QCoreApplication::translate("Schedule", "LogOut", nullptr));
        label_5->setText(QString());
        label_6->setText(QString());
        label_7->setText(QString());
        label_8->setText(QString());
        label_9->setText(QString());
        label_10->setText(QString());
        patientIdLabel->setText(QCoreApplication::translate("Schedule", "Patient Id:", nullptr));
        usernameLabel->setText(QCoreApplication::translate("Schedule", "Username:", nullptr));
#if QT_CONFIG(whatsthis)
        appointment->setWhatsThis(QCoreApplication::translate("Schedule", "<html><head/><body><p>Appointment</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        appointment->setText(QCoreApplication::translate("Schedule", "<html><head/><body><p><br/></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("Schedule", "Choose optimal time slots", nullptr));
        label_2->setText(QCoreApplication::translate("Schedule", "Set reminders", nullptr));
        label_3->setText(QCoreApplication::translate("Schedule", "Provide detailed reason", nullptr));
        label_4->setText(QCoreApplication::translate("Schedule", "Plan for arrival time", nullptr));
        set_appointment->setText(QCoreApplication::translate("Schedule", "SET APPOINTMENT", nullptr));
#if QT_CONFIG(whatsthis)
        appointment_2->setWhatsThis(QCoreApplication::translate("Schedule", "<html><head/><body><p>Appointment</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        appointment_2->setText(QCoreApplication::translate("Schedule", "<html><head/><body><p><br/></p></body></html>", nullptr));
        label_11->setText(QCoreApplication::translate("Schedule", "Time Slots Availability", nullptr));
        label_12->setText(QCoreApplication::translate("Schedule", "Scheduling Tips", nullptr));
        label_13->setText(QCoreApplication::translate("Schedule", "Schedule Appointment", nullptr));
        label_14->setText(QCoreApplication::translate("Schedule", "Select Date", nullptr));
        label_15->setText(QCoreApplication::translate("Schedule", "Select Time", nullptr));
        label_16->setText(QCoreApplication::translate("Schedule", "Available Doctors", nullptr));
        label_17->setText(QCoreApplication::translate("Schedule", "Reason for appointment", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Schedule: public Ui_Schedule {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCHEDULE_H
