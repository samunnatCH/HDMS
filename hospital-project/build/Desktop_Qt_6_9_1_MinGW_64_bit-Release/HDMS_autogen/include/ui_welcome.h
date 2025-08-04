/********************************************************************************
** Form generated from reading UI file 'welcome.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WELCOME_H
#define UI_WELCOME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Welcome
{
public:
    QFrame *frame;
    QLabel *background;
    QPushButton *Dashboard;
    QPushButton *Schedule;
    QPushButton *Appointment;
    QPushButton *Settings;
    QPushButton *Medical_records;
    QPushButton *logout;
    QLabel *profile;
    QLabel *patientIdLabel;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *usernameLabel_2;
    QLabel *date;
    QFrame *frame_2;
    QPlainTextEdit *Profile_overviwe;
    QPlainTextEdit *blood;
    QLabel *Email_E;
    QLabel *emailLabel;
    QLabel *Address_E;
    QLabel *Phone_E;
    QLabel *phonepicture;
    QLabel *addresspicture;
    QLabel *Blood_E;
    QLabel *blood_out;
    QLabel *Address_E_2;
    QLabel *Phone_E_2;
    QLabel *emailLabel_2;
    QLabel *profileoverview;
    QFrame *frame_3;
    QPlainTextEdit *Current_Appointment;
    QTextBrowser *current_appointment;
    QFrame *frame_4;
    QPlainTextEdit *recent;
    QPlainTextEdit *bloodpressure;
    QPlainTextEdit *glucose;
    QPlainTextEdit *weight;
    QPlainTextEdit *cholestrol;
    QLabel *bloodpressureicon;
    QLabel *glucoseicon;
    QLabel *weighticon;
    QLabel *cholestronicon;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *medicalLayout;
    QFrame *frame_5;
    QPlainTextEdit *suggestion;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_5;
    QLabel *usernameLabel;

    void setupUi(QWidget *Welcome)
    {
        if (Welcome->objectName().isEmpty())
            Welcome->setObjectName("Welcome");
        Welcome->resize(1288, 673);
        Welcome->setStyleSheet(QString::fromUtf8("#Welcome{\n"
"background-color:#E0F2FE;\n"
"}"));
        frame = new QFrame(Welcome);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(0, 0, 251, 741));
        frame->setStyleSheet(QString::fromUtf8("frame{\n"
"background-color:#0A2F5C;\n"
"}"));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
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
        Dashboard->setStyleSheet(QString::fromUtf8("\n"
"\n"
"QPushButton{\n"
"	background-color:#269597;\n"
"	color:#fff;\n"
"	font: 9pt \"Roboto\";\n"
"	border-radius:5px;\n"
"}"));
        Schedule = new QPushButton(frame);
        Schedule->setObjectName("Schedule");
        Schedule->setGeometry(QRect(60, 370, 131, 29));
        Schedule->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"		background-color:black;\n"
"	color:#fff;\n"
"	font: 9pt \"Roboto\";\n"
"border-radius:5px;\n"
"	\n"
"}"));
        Appointment = new QPushButton(frame);
        Appointment->setObjectName("Appointment");
        Appointment->setGeometry(QRect(60, 320, 131, 29));
        Appointment->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:black;\n"
"	color:#fff;\n"
"	font: 9pt \"Roboto\";\n"
"border-radius:5px;\n"
"	\n"
"}"));
        Settings = new QPushButton(frame);
        Settings->setObjectName("Settings");
        Settings->setGeometry(QRect(60, 470, 131, 29));
        Settings->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"		background-color:black;\n"
"	color:#fff;\n"
"	font: 9pt \"Roboto\";\n"
"border-radius:5px;\n"
"}"));
        Medical_records = new QPushButton(frame);
        Medical_records->setObjectName("Medical_records");
        Medical_records->setGeometry(QRect(60, 420, 131, 29));
        Medical_records->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"		background-color:black;\n"
"	color:#fff;\n"
"	font: 9pt \"Roboto\";\n"
"border-radius:5px;\n"
"	\n"
"}"));
        logout = new QPushButton(frame);
        logout->setObjectName("logout");
        logout->setGeometry(QRect(60, 600, 121, 29));
        logout->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"		background-color:black;\n"
"	color:#fff;\n"
"	font: 200 9pt \"Roboto\";\n"
"border-radius:5px;\n"
"	\n"
"}"));
        profile = new QLabel(frame);
        profile->setObjectName("profile");
        profile->setGeometry(QRect(60, 40, 161, 171));
        profile->setStyleSheet(QString::fromUtf8(""));
        profile->setPixmap(QPixmap(QString::fromUtf8(":/image/resourse/profile.jpg")));
        patientIdLabel = new QLabel(frame);
        patientIdLabel->setObjectName("patientIdLabel");
        patientIdLabel->setGeometry(QRect(60, 230, 171, 31));
        patientIdLabel->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"color:white\n"
";\n"
"font: 12pt \"Segoe UI\";\n"
"	border:none;"));
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setGeometry(QRect(160, 270, 21, 31));
        label->setPixmap(QPixmap(QString::fromUtf8(":/icon/icons/dashboard.png")));
        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(70, 320, 20, 31));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/icon/icons/appointment.png")));
        label_3 = new QLabel(frame);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(65, 370, 21, 31));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/icon/icons/schedule.png")));
        label_4 = new QLabel(frame);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(64, 420, 16, 31));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/icon/icons/medical.png")));
        label_5 = new QLabel(frame);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(66, 470, 21, 31));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/icon/icons/setting.png")));
        label_6 = new QLabel(frame);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(67, 600, 21, 31));
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/icon/icons/logout.png")));
        usernameLabel_2 = new QLabel(frame);
        usernameLabel_2->setObjectName("usernameLabel_2");
        usernameLabel_2->setGeometry(QRect(60, 200, 191, 41));
        usernameLabel_2->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"color:white\n"
";\n"
"font: 12pt \"Segoe UI\";\n"
"	border:none;"));
        date = new QLabel(Welcome);
        date->setObjectName("date");
        date->setGeometry(QRect(282, 70, 311, 20));
        date->setStyleSheet(QString::fromUtf8("#date{\n"
"	font: 600 9pt \"Roboto\";\n"
"	color:#000;\n"
"	\n"
"\n"
"}"));
        frame_2 = new QFrame(Welcome);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(270, 100, 471, 251));
        frame_2->setStyleSheet(QString::fromUtf8("#frame_2{\n"
"	background-color:#bfdbfe;\n"
"	border:1px solid #fff;\n"
"	border-radius:20px;\n"
"}"));
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        Profile_overviwe = new QPlainTextEdit(frame_2);
        Profile_overviwe->setObjectName("Profile_overviwe");
        Profile_overviwe->setGeometry(QRect(60, 10, 401, 51));
        Profile_overviwe->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"font: 20pt \"SansSerif\";\n"
"\n"
"color:black;\n"
"\n"
"	border:none;"));
        Profile_overviwe->setReadOnly(true);
        blood = new QPlainTextEdit(frame_2);
        blood->setObjectName("blood");
        blood->setGeometry(QRect(55, 210, 161, 31));
        blood->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"color:black\n"
";\n"
"font: 12pt \"Segoe UI\";\n"
"	border:none;"));
        blood->setReadOnly(true);
        Email_E = new QLabel(frame_2);
        Email_E->setObjectName("Email_E");
        Email_E->setGeometry(QRect(22, 76, 31, 31));
        Email_E->setPixmap(QPixmap(QString::fromUtf8(":/icon/icons/email.png")));
        emailLabel = new QLabel(frame_2);
        emailLabel->setObjectName("emailLabel");
        emailLabel->setGeometry(QRect(120, 74, 211, 31));
        emailLabel->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"color:black\n"
";\n"
"font: 12pt \"Segoe UI\";\n"
"	border:none;"));
        Address_E = new QLabel(frame_2);
        Address_E->setObjectName("Address_E");
        Address_E->setGeometry(QRect(130, 166, 161, 31));
        Address_E->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"color:black\n"
";\n"
"font: 12pt \"Segoe UI\";\n"
"	border:none;"));
        Phone_E = new QLabel(frame_2);
        Phone_E->setObjectName("Phone_E");
        Phone_E->setGeometry(QRect(120, 120, 131, 31));
        Phone_E->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"color:black\n"
";\n"
"font: 12pt \"Segoe UI\";\n"
"	border:none;"));
        phonepicture = new QLabel(frame_2);
        phonepicture->setObjectName("phonepicture");
        phonepicture->setGeometry(QRect(20, 120, 31, 31));
        phonepicture->setPixmap(QPixmap(QString::fromUtf8(":/icon/icons/phone.png")));
        addresspicture = new QLabel(frame_2);
        addresspicture->setObjectName("addresspicture");
        addresspicture->setGeometry(QRect(23, 160, 21, 41));
        addresspicture->setPixmap(QPixmap(QString::fromUtf8(":/icon/icons/location.png")));
        Blood_E = new QLabel(frame_2);
        Blood_E->setObjectName("Blood_E");
        Blood_E->setGeometry(QRect(23, 210, 21, 31));
        Blood_E->setPixmap(QPixmap(QString::fromUtf8(":/icon/icons/blood.png")));
        blood_out = new QLabel(frame_2);
        blood_out->setObjectName("blood_out");
        blood_out->setGeometry(QRect(170, 210, 61, 31));
        blood_out->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"color:black\n"
";\n"
"font: 12pt \"Segoe UI\";\n"
"	border:none;"));
        Address_E_2 = new QLabel(frame_2);
        Address_E_2->setObjectName("Address_E_2");
        Address_E_2->setGeometry(QRect(60, 166, 61, 31));
        Address_E_2->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"color:black\n"
";\n"
"font: 12pt \"Segoe UI\";\n"
"	border:none;"));
        Phone_E_2 = new QLabel(frame_2);
        Phone_E_2->setObjectName("Phone_E_2");
        Phone_E_2->setGeometry(QRect(60, 120, 51, 31));
        Phone_E_2->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"color:black\n"
";\n"
"font: 12pt \"Segoe UI\";\n"
"	border:none;"));
        emailLabel_2 = new QLabel(frame_2);
        emailLabel_2->setObjectName("emailLabel_2");
        emailLabel_2->setGeometry(QRect(60, 74, 51, 31));
        emailLabel_2->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"color:black\n"
";\n"
"font: 12pt \"Segoe UI\";\n"
"	border:none;"));
        profileoverview = new QLabel(frame_2);
        profileoverview->setObjectName("profileoverview");
        profileoverview->setGeometry(QRect(20, 10, 41, 41));
        profileoverview->setPixmap(QPixmap(QString::fromUtf8(":/icon/icons/person.png")));
        addresspicture->raise();
        Blood_E->raise();
        Profile_overviwe->raise();
        blood->raise();
        Email_E->raise();
        emailLabel->raise();
        Address_E->raise();
        Phone_E->raise();
        phonepicture->raise();
        blood_out->raise();
        Address_E_2->raise();
        Phone_E_2->raise();
        emailLabel_2->raise();
        profileoverview->raise();
        frame_3 = new QFrame(Welcome);
        frame_3->setObjectName("frame_3");
        frame_3->setGeometry(QRect(800, 100, 451, 201));
        frame_3->setStyleSheet(QString::fromUtf8("\n"
"	background-color:#bfdbfe;\n"
"\n"
"	border-radius:25px;\n"
""));
        frame_3->setFrameShape(QFrame::Shape::StyledPanel);
        frame_3->setFrameShadow(QFrame::Shadow::Raised);
        Current_Appointment = new QPlainTextEdit(frame_3);
        Current_Appointment->setObjectName("Current_Appointment");
        Current_Appointment->setGeometry(QRect(20, 10, 381, 41));
        Current_Appointment->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"font: 20pt \"SansSerif\";\n"
"\n"
"color:black;\n"
"\n"
"	border:none;"));
        Current_Appointment->setReadOnly(true);
        current_appointment = new QTextBrowser(frame_3);
        current_appointment->setObjectName("current_appointment");
        current_appointment->setGeometry(QRect(30, 51, 391, 141));
        current_appointment->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"color:black\n"
";\n"
"font: 10pt \"Segoe UI\";\n"
"	border:none;"));
        frame_4 = new QFrame(Welcome);
        frame_4->setObjectName("frame_4");
        frame_4->setGeometry(QRect(280, 379, 441, 251));
        frame_4->setStyleSheet(QString::fromUtf8("#frame_4{\n"
"	background-color:#bfdbfe;\n"
"	border-radius:25px;\n"
"}"));
        frame_4->setFrameShape(QFrame::Shape::StyledPanel);
        frame_4->setFrameShadow(QFrame::Shadow::Raised);
        recent = new QPlainTextEdit(frame_4);
        recent->setObjectName("recent");
        recent->setGeometry(QRect(10, 10, 431, 41));
        recent->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"font: 20pt \"SansSerif\";\n"
"\n"
"color:black;\n"
"\n"
"	border:none;"));
        recent->setReadOnly(true);
        bloodpressure = new QPlainTextEdit(frame_4);
        bloodpressure->setObjectName("bloodpressure");
        bloodpressure->setGeometry(QRect(50, 60, 121, 31));
        bloodpressure->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"color:black\n"
";\n"
"font: 700 12pt \"calibri\";\n"
"	border:none;"));
        glucose = new QPlainTextEdit(frame_4);
        glucose->setObjectName("glucose");
        glucose->setGeometry(QRect(50, 150, 91, 31));
        glucose->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"color:black\n"
";\n"
"font: 700 12pt \"calibri\";\n"
"	border:none;"));
        weight = new QPlainTextEdit(frame_4);
        weight->setObjectName("weight");
        weight->setGeometry(QRect(250, 60, 91, 31));
        weight->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"color:black\n"
";\n"
"font: 700 12pt \"calibri\";\n"
"	border:none;"));
        cholestrol = new QPlainTextEdit(frame_4);
        cholestrol->setObjectName("cholestrol");
        cholestrol->setGeometry(QRect(250, 150, 91, 31));
        cholestrol->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"color:black\n"
";\n"
"font: 700 12pt \"calibri\";\n"
"	border:none;"));
        bloodpressureicon = new QLabel(frame_4);
        bloodpressureicon->setObjectName("bloodpressureicon");
        bloodpressureicon->setGeometry(QRect(21, 60, 31, 31));
        bloodpressureicon->setPixmap(QPixmap(QString::fromUtf8(":/icon/icons/pressure.png")));
        glucoseicon = new QLabel(frame_4);
        glucoseicon->setObjectName("glucoseicon");
        glucoseicon->setGeometry(QRect(19, 151, 31, 41));
        glucoseicon->setPixmap(QPixmap(QString::fromUtf8(":/icon/icons/sugar.png")));
        glucoseicon->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTop|Qt::AlignmentFlag::AlignTrailing);
        glucoseicon->setWordWrap(false);
        weighticon = new QLabel(frame_4);
        weighticon->setObjectName("weighticon");
        weighticon->setGeometry(QRect(226, 57, 31, 31));
        weighticon->setPixmap(QPixmap(QString::fromUtf8(":/icon/icons/weight.png")));
        cholestronicon = new QLabel(frame_4);
        cholestronicon->setObjectName("cholestronicon");
        cholestronicon->setGeometry(QRect(225, 150, 31, 31));
        cholestronicon->setPixmap(QPixmap(QString::fromUtf8(":/icon/icons/chol.png")));
        verticalLayoutWidget = new QWidget(frame_4);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(0, 0, 431, 251));
        medicalLayout = new QVBoxLayout(verticalLayoutWidget);
        medicalLayout->setObjectName("medicalLayout");
        medicalLayout->setContentsMargins(0, 0, 0, 0);
        frame_5 = new QFrame(Welcome);
        frame_5->setObjectName("frame_5");
        frame_5->setGeometry(QRect(810, 310, 451, 331));
        frame_5->setStyleSheet(QString::fromUtf8("#frame_5{\n"
"	background-color:#bfdbfe;\n"
"	border-radius:25px;\n"
"}"));
        frame_5->setFrameShape(QFrame::Shape::StyledPanel);
        frame_5->setFrameShadow(QFrame::Shadow::Raised);
        suggestion = new QPlainTextEdit(frame_5);
        suggestion->setObjectName("suggestion");
        suggestion->setGeometry(QRect(10, 10, 421, 51));
        suggestion->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"font: 20pt \"SansSerif\";\n"
"\n"
"color:black;\n"
"\n"
"	border:none;"));
        suggestion->setReadOnly(true);
        checkBox = new QCheckBox(frame_5);
        checkBox->setObjectName("checkBox");
        checkBox->setGeometry(QRect(40, 80, 191, 24));
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
        checkBox_2 = new QCheckBox(frame_5);
        checkBox_2->setObjectName("checkBox_2");
        checkBox_2->setGeometry(QRect(40, 120, 261, 24));
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
        checkBox_3 = new QCheckBox(frame_5);
        checkBox_3->setObjectName("checkBox_3");
        checkBox_3->setGeometry(QRect(40, 160, 261, 24));
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
        checkBox_4 = new QCheckBox(frame_5);
        checkBox_4->setObjectName("checkBox_4");
        checkBox_4->setGeometry(QRect(40, 200, 261, 24));
        checkBox_4->setStyleSheet(QString::fromUtf8("QCheckBox {\n"
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
        checkBox_5 = new QCheckBox(frame_5);
        checkBox_5->setObjectName("checkBox_5");
        checkBox_5->setGeometry(QRect(40, 240, 261, 24));
        checkBox_5->setStyleSheet(QString::fromUtf8("QCheckBox {\n"
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
        usernameLabel = new QLabel(Welcome);
        usernameLabel->setObjectName("usernameLabel");
        usernameLabel->setGeometry(QRect(280, 20, 601, 51));
        usernameLabel->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"\n"
"\n"
"font: 700 20pt \"Segoe UI\";\n"
"color:rgb(45, 156, 219);\n"
"\n"
"	border:none;"));

        retranslateUi(Welcome);

        QMetaObject::connectSlotsByName(Welcome);
    } // setupUi

    void retranslateUi(QWidget *Welcome)
    {
        Welcome->setWindowTitle(QCoreApplication::translate("Welcome", "Form", nullptr));
        background->setText(QString());
        Dashboard->setText(QCoreApplication::translate("Welcome", "Dashboard     ", nullptr));
        Schedule->setText(QCoreApplication::translate("Welcome", "    Schedule", nullptr));
        Appointment->setText(QCoreApplication::translate("Welcome", "        Appointment", nullptr));
        Settings->setText(QCoreApplication::translate("Welcome", "  Settings", nullptr));
        Medical_records->setText(QCoreApplication::translate("Welcome", "       Medical Records", nullptr));
        logout->setText(QCoreApplication::translate("Welcome", "LogOut", nullptr));
        profile->setText(QString());
        patientIdLabel->setText(QCoreApplication::translate("Welcome", "Patient Id:", nullptr));
        label->setText(QString());
        label_2->setText(QString());
        label_3->setText(QString());
        label_4->setText(QString());
        label_5->setText(QString());
        label_6->setText(QString());
        usernameLabel_2->setText(QCoreApplication::translate("Welcome", "Username:", nullptr));
        date->setText(QString());
        Profile_overviwe->setPlainText(QCoreApplication::translate("Welcome", "Profile Overview", nullptr));
        blood->setPlainText(QCoreApplication::translate("Welcome", "Blood Group:", nullptr));
        Email_E->setText(QString());
        emailLabel->setText(QCoreApplication::translate("Welcome", "EMAIL:", nullptr));
        Address_E->setText(QCoreApplication::translate("Welcome", "Address:", nullptr));
        Phone_E->setText(QCoreApplication::translate("Welcome", "Phone:", nullptr));
        phonepicture->setText(QString());
        addresspicture->setText(QString());
        Blood_E->setText(QString());
        blood_out->setText(QString());
        Address_E_2->setText(QCoreApplication::translate("Welcome", "Address:", nullptr));
        Phone_E_2->setText(QCoreApplication::translate("Welcome", "Phone:", nullptr));
        emailLabel_2->setText(QCoreApplication::translate("Welcome", "Email:", nullptr));
        profileoverview->setText(QString());
        Current_Appointment->setPlainText(QCoreApplication::translate("Welcome", "Current Appointment", nullptr));
        recent->setPlainText(QCoreApplication::translate("Welcome", "Recent Medical Checkup", nullptr));
        bloodpressure->setPlainText(QCoreApplication::translate("Welcome", "Blood Pressure", nullptr));
        glucose->setPlainText(QCoreApplication::translate("Welcome", "Glucose", nullptr));
        weight->setPlainText(QCoreApplication::translate("Welcome", "Weight", nullptr));
        cholestrol->setPlainText(QCoreApplication::translate("Welcome", "Cholesterol", nullptr));
        bloodpressureicon->setText(QString());
        glucoseicon->setText(QString());
        weighticon->setText(QString());
        cholestronicon->setText(QString());
        suggestion->setPlainText(QCoreApplication::translate("Welcome", "Doctor's Suggestions", nullptr));
        checkBox->setText(QCoreApplication::translate("Welcome", "Do some cardio", nullptr));
        checkBox_2->setText(QCoreApplication::translate("Welcome", "Ensuring adequate sleep", nullptr));
        checkBox_3->setText(QCoreApplication::translate("Welcome", "Limit sugary drinks", nullptr));
        checkBox_4->setText(QCoreApplication::translate("Welcome", "Get enough sleep", nullptr));
        checkBox_5->setText(QCoreApplication::translate("Welcome", " Avoid artificial trans fats", nullptr));
        usernameLabel->setText(QCoreApplication::translate("Welcome", "Namaste,", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Welcome: public Ui_Welcome {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOME_H
