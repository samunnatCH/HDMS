/********************************************************************************
** Form generated from reading UI file 'user.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_H
#define UI_USER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_user
{
public:
    QFrame *frame;
    QLabel *profile;
    QLabel *background;
    QPushButton *Dashboard;
    QPushButton *Schedule;
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
    QTextBrowser *appointmentShow;
    QTextBrowser *textBrowser_3;
    QPlainTextEdit *suggestion;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QPlainTextEdit *suggestion_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *appointment_2;
    QCalendarWidget *calendarWidget;
    QLabel *label_11;

    void setupUi(QWidget *user)
    {
        if (user->objectName().isEmpty())
            user->setObjectName("user");
        user->resize(1288, 673);
        user->setStyleSheet(QString::fromUtf8("#user{\n"
"background-color:#E0F2FE;\n"
"}"));
        frame = new QFrame(user);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(0, 0, 251, 741));
        frame->setStyleSheet(QString::fromUtf8("frame{\n"
"background-color:#E0F2FE;\n"
"}"));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        profile = new QLabel(frame);
        profile->setObjectName("profile");
        profile->setGeometry(QRect(70, 40, 141, 151));
        profile->setStyleSheet(QString::fromUtf8("front{\n"
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
        Dashboard->setGeometry(QRect(60, 270, 131, 29));
        Dashboard->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:black;\n"
"	color:#fff;\n"
"	font: 9pt \"Roboto\";\n"
"	border-radius:5px;\n"
"	\n"
"}"));
        Schedule = new QPushButton(frame);
        Schedule->setObjectName("Schedule");
        Schedule->setGeometry(QRect(60, 370, 131, 29));
        Schedule->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:black;\n"
"	color:#fff;\n"
"	font: 9pt \"Roboto\";\n"
"	border-radius:5px;\n"
"}"));
        Appointment = new QPushButton(frame);
        Appointment->setObjectName("Appointment");
        Appointment->setGeometry(QRect(60, 320, 131, 29));
        Appointment->setStyleSheet(QString::fromUtf8("\n"
"\n"
"QPushButton{\n"
"	background-color:#269597;\n"
"	color:#fff;\n"
"	font: 9pt \"Roboto\";\n"
"	border-radius:5px;\n"
"}"));
        Settings = new QPushButton(frame);
        Settings->setObjectName("Settings");
        Settings->setGeometry(QRect(60, 470, 131, 29));
        Settings->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:black;\n"
"	color:#fff;\n"
"	font: 9pt \"Roboto\";\n"
"	border-radius:5px;\n"
"	\n"
"}"));
        Medical_records = new QPushButton(frame);
        Medical_records->setObjectName("Medical_records");
        Medical_records->setGeometry(QRect(60, 420, 131, 29));
        Medical_records->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:black;\n"
"	color:#fff;\n"
"	font: 9pt \"Roboto\";\n"
"	border-radius:5px;\n"
"	\n"
"}"));
        logOut = new QPushButton(frame);
        logOut->setObjectName("logOut");
        logOut->setGeometry(QRect(60, 630, 131, 29));
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
        label_6->setGeometry(QRect(160, 320, 21, 31));
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/icon/icons/appointment.png")));
        label_7 = new QLabel(frame);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(70, 370, 21, 31));
        label_7->setPixmap(QPixmap(QString::fromUtf8(":/icon/icons/schedule.png")));
        label_8 = new QLabel(frame);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(70, 420, 21, 31));
        label_8->setPixmap(QPixmap(QString::fromUtf8(":/icon/icons/medical.png")));
        label_9 = new QLabel(frame);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(70, 470, 21, 31));
        label_9->setPixmap(QPixmap(QString::fromUtf8(":/icon/icons/setting.png")));
        label_10 = new QLabel(frame);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(70, 630, 21, 31));
        label_10->setPixmap(QPixmap(QString::fromUtf8(":/icon/icons/logout.png")));
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
        profile->raise();
        Dashboard->raise();
        Schedule->raise();
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
        frame_2 = new QFrame(user);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(250, 0, 1041, 741));
        frame_2->setStyleSheet(QString::fromUtf8("background-color:transparent;"));
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        appointment = new QLabel(frame_2);
        appointment->setObjectName("appointment");
        appointment->setGeometry(QRect(30, 40, 551, 331));
        appointment->setStyleSheet(QString::fromUtf8("#appointment{\n"
"qproperty-alignment: 'AlignLeft';\n"
"	font: 600 15pt \"Roboto\";\n"
"color:black;\n"
"background-color:#BFDBFE;\n"
"border-radius:10px;\n"
"margin:2px;\n"
"padding:10px;\n"
"}"));
        appointmentShow = new QTextBrowser(frame_2);
        appointmentShow->setObjectName("appointmentShow");
        appointmentShow->setGeometry(QRect(50, 90, 501, 251));
        appointmentShow->setStyleSheet(QString::fromUtf8("background-color:#fff;\n"
"	border:1px solid #fff;\n"
"	border-radius:20px;\n"
"color:black;"));
        textBrowser_3 = new QTextBrowser(frame_2);
        textBrowser_3->setObjectName("textBrowser_3");
        textBrowser_3->setGeometry(QRect(460, 390, 481, 261));
        textBrowser_3->setStyleSheet(QString::fromUtf8("#textBrowser_3{\n"
"qproperty-alignment: 'AlignLeft';\n"
"	font: 600 15pt \"Roboto\";\n"
"background-color:#BFDBFE;\n"
"border-radius:10px;\n"
"margin:2px;\n"
"padding:10px;\n"
"}"));
        suggestion = new QPlainTextEdit(frame_2);
        suggestion->setObjectName("suggestion");
        suggestion->setGeometry(QRect(40, 410, 381, 51));
        suggestion->setStyleSheet(QString::fromUtf8("#suggestion{\n"
"	font: 300 16pt \"Roboto\";\n"
"	color:black;\n"
"\n"
"	\n"
"	border:0;\n"
"}"));
        suggestion->setReadOnly(true);
        checkBox = new QCheckBox(frame_2);
        checkBox->setObjectName("checkBox");
        checkBox->setGeometry(QRect(70, 520, 231, 24));
        checkBox->setStyleSheet(QString::fromUtf8("QCheckBox {\n"
"	\n"
"	font: 10pt \"Roboto\";\n"
"    spacing: 10px;\n"
"   \n"
"    color: #333;\n"
"}\n"
"\n"
"QCheckBox::indicator {\n"
"    width: 20px;\n"
"    height: 20px;\n"
"    border-radius: 4px;\n"
"    border: 2px solid #aaa;\n"
"    background-color: #fff;\n"
"}\n"
"\n"
"QCheckBox::indicator:hover {\n"
"    border: 2px solid #2CA8A2;\n"
"}\n"
"\n"
"QCheckBox::indicator:checked {\n"
"    background-color: #2CA8A2;\n"
"    border: 2px solid #2CA8A2;\n"
"}\n"
"\n"
"QCheckBox::indicator:checked:hover {\n"
"    background-color: #219088;\n"
"    border: 2px solid #219088;\n"
"}\n"
""));
        checkBox_2 = new QCheckBox(frame_2);
        checkBox_2->setObjectName("checkBox_2");
        checkBox_2->setGeometry(QRect(70, 470, 221, 24));
        checkBox_2->setStyleSheet(QString::fromUtf8("QCheckBox {\n"
"	\n"
"	font: 10pt \"Roboto\";\n"
"    spacing: 10px;\n"
"   \n"
"    color: #333;\n"
"}\n"
"\n"
"QCheckBox::indicator {\n"
"    width: 20px;\n"
"    height: 20px;\n"
"    border-radius: 4px;\n"
"    border: 2px solid #aaa;\n"
"    background-color: #fff;\n"
"}\n"
"\n"
"QCheckBox::indicator:hover {\n"
"    border: 2px solid #2CA8A2;\n"
"}\n"
"\n"
"QCheckBox::indicator:checked {\n"
"    background-color: #2CA8A2;\n"
"    border: 2px solid #2CA8A2;\n"
"}\n"
"\n"
"QCheckBox::indicator:checked:hover {\n"
"    background-color: #219088;\n"
"    border: 2px solid #219088;\n"
"}\n"
""));
        checkBox_3 = new QCheckBox(frame_2);
        checkBox_3->setObjectName("checkBox_3");
        checkBox_3->setGeometry(QRect(70, 570, 261, 24));
        checkBox_3->setStyleSheet(QString::fromUtf8("QCheckBox {\n"
"	\n"
"	font: 10pt \"Roboto\";\n"
"    spacing: 10px;\n"
"   \n"
"    color: #333;\n"
"}\n"
"\n"
"QCheckBox::indicator {\n"
"    width: 20px;\n"
"    height: 20px;\n"
"    border-radius: 4px;\n"
"    border: 2px solid #aaa;\n"
"    background-color: #fff;\n"
"}\n"
"\n"
"QCheckBox::indicator:hover {\n"
"    border: 2px solid #2CA8A2;\n"
"}\n"
"\n"
"QCheckBox::indicator:checked {\n"
"    background-color: #2CA8A2;\n"
"    border: 2px solid #2CA8A2;\n"
"}\n"
"\n"
"QCheckBox::indicator:checked:hover {\n"
"    background-color: #219088;\n"
"    border: 2px solid #219088;\n"
"}\n"
""));
        suggestion_2 = new QPlainTextEdit(frame_2);
        suggestion_2->setObjectName("suggestion_2");
        suggestion_2->setGeometry(QRect(480, 410, 421, 51));
        suggestion_2->setStyleSheet(QString::fromUtf8("QPlainTextEdit{\n"
"	font: 300 16pt \"Roboto\";\n"
"color:black;\n"
"	background:transparent;\n"
"	\n"
"	border:0;\n"
"}"));
        suggestion_2->setReadOnly(true);
        label = new QLabel(frame_2);
        label->setObjectName("label");
        label->setGeometry(QRect(490, 500, 201, 31));
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
        label_2->setGeometry(QRect(490, 460, 201, 21));
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
        label_3->setGeometry(QRect(490, 580, 201, 21));
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
        label_4->setGeometry(QRect(490, 540, 201, 21));
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
        appointment_2 = new QLabel(frame_2);
        appointment_2->setObjectName("appointment_2");
        appointment_2->setGeometry(QRect(20, 390, 411, 251));
        appointment_2->setStyleSheet(QString::fromUtf8("#appointment_2{\n"
"qproperty-alignment: 'AlignLeft';\n"
"	font: 600 15pt \"Roboto\";\n"
"color:black;\n"
"background-color:#BFDBFE;\n"
"border-radius:10px;\n"
"margin:2px;\n"
"padding:10px;\n"
"}"));
        calendarWidget = new QCalendarWidget(frame_2);
        calendarWidget->setObjectName("calendarWidget");
        calendarWidget->setGeometry(QRect(590, 60, 351, 271));
        calendarWidget->setStyleSheet(QString::fromUtf8("font: 500 9pt \"Roboto\";\n"
"	border: 1px solid gray;\n"
"	border-radius:8px;\n"
"background-color:#3f3f3f;"));
        label_11 = new QLabel(frame_2);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(60, 50, 321, 31));
        label_11->setStyleSheet(QString::fromUtf8("font: 600 15pt \"Roboto\";\n"
"color:black;"));
        appointment->raise();
        appointment_2->raise();
        appointmentShow->raise();
        textBrowser_3->raise();
        suggestion->raise();
        checkBox->raise();
        checkBox_2->raise();
        checkBox_3->raise();
        suggestion_2->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        calendarWidget->raise();
        label_11->raise();

        retranslateUi(user);

        QMetaObject::connectSlotsByName(user);
    } // setupUi

    void retranslateUi(QWidget *user)
    {
        user->setWindowTitle(QCoreApplication::translate("user", "Form", nullptr));
        profile->setText(QString());
        background->setText(QString());
        Dashboard->setText(QCoreApplication::translate("user", "Dashboard", nullptr));
        Schedule->setText(QCoreApplication::translate("user", "Schedule", nullptr));
        Appointment->setText(QCoreApplication::translate("user", "Appointment    ", nullptr));
        Settings->setText(QCoreApplication::translate("user", "Settings", nullptr));
        Medical_records->setText(QCoreApplication::translate("user", "        Medical Records", nullptr));
        logOut->setText(QCoreApplication::translate("user", "logout", nullptr));
        label_5->setText(QString());
        label_6->setText(QString());
        label_7->setText(QString());
        label_8->setText(QString());
        label_9->setText(QString());
        label_10->setText(QString());
        patientIdLabel->setText(QCoreApplication::translate("user", "Patient Id:", nullptr));
        usernameLabel->setText(QCoreApplication::translate("user", "Username:", nullptr));
#if QT_CONFIG(whatsthis)
        appointment->setWhatsThis(QCoreApplication::translate("user", "<html><head/><body><p>Appointment</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        appointment->setText(QCoreApplication::translate("user", "<html><head/><body><p><br/></p></body></html>", nullptr));
        suggestion->setPlainText(QCoreApplication::translate("user", "Pre-Appointment Checklist", nullptr));
        checkBox->setText(QCoreApplication::translate("user", "Prepare Medication List", nullptr));
        checkBox_2->setText(QCoreApplication::translate("user", "Review Patient History", nullptr));
        checkBox_3->setText(QCoreApplication::translate("user", "Prepare Note of Symptoms", nullptr));
        suggestion_2->setPlainText(QCoreApplication::translate("user", "Appointment Tips", nullptr));
        label->setText(QCoreApplication::translate("user", "Bring patient records", nullptr));
        label_2->setText(QCoreApplication::translate("user", "Arrive 30 minutes early", nullptr));
        label_3->setText(QCoreApplication::translate("user", "Prepare questions", nullptr));
        label_4->setText(QCoreApplication::translate("user", "Current medication list", nullptr));
#if QT_CONFIG(whatsthis)
        appointment_2->setWhatsThis(QCoreApplication::translate("user", "<html><head/><body><p>Appointment</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        appointment_2->setText(QCoreApplication::translate("user", "<html><head/><body><p><br/></p></body></html>", nullptr));
        label_11->setText(QCoreApplication::translate("user", "Appointments", nullptr));
    } // retranslateUi

};

namespace Ui {
    class user: public Ui_user {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_H
