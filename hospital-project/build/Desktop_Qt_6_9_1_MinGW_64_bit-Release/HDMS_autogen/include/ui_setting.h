/********************************************************************************
** Form generated from reading UI file 'setting.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTING_H
#define UI_SETTING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_setting
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
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *usernameLabel;
    QLabel *patientIdLabel;
    QStackedWidget *stackedWidget;
    QWidget *Profile_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout;
    QLabel *dob;
    QLabel *gender;
    QLabel *email;
    QLabel *phone;
    QLabel *text_2;
    QLabel *fname;
    QLabel *lname;
    QLabel *home;
    QLabel *bgroup;
    QWidget *Privacy_2;
    QScrollArea *scrollArea_3;
    QWidget *scrollAreaWidgetContents_4;
    QGridLayout *gridLayout_4;
    QLabel *text_pass_3;
    QLabel *label_27;
    QWidget *widget_8;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_20;
    QLabel *label_2;
    QLabel *label_23;
    QLabel *label_24;
    QPushButton *delete_2;
    QLabel *text_10;
    QPushButton *download;
    QWidget *Security_2;
    QLineEdit *confirmpass;
    QLineEdit *currentpass;
    QPushButton *update_password;
    QLineEdit *newpass;
    QLabel *label;
    QLabel *settings;
    QLabel *text;
    QLabel *background_color;
    QPushButton *Profile;
    QPushButton *Security;
    QPushButton *Privacy;

    void setupUi(QWidget *setting)
    {
        if (setting->objectName().isEmpty())
            setting->setObjectName("setting");
        setting->resize(1274, 681);
        setting->setStyleSheet(QString::fromUtf8("#setting{\n"
"	background-color:#e0f2fe;\n"
"}"));
        frame = new QFrame(setting);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(-10, -10, 251, 741));
        frame->setStyleSheet(QString::fromUtf8("frame{\n"
"background-color:#0A2F5C;\n"
"}"));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        profile = new QLabel(frame);
        profile->setObjectName("profile");
        profile->setGeometry(QRect(70, 60, 141, 131));
        profile->setStyleSheet(QString::fromUtf8("front{\n"
"	border-radus;20px\n"
"}"));
        profile->setPixmap(QPixmap(QString::fromUtf8(":/image/resourse/profile.jpg")));
        background = new QLabel(frame);
        background->setObjectName("background");
        background->setGeometry(QRect(2, -1, 251, 751));
        background->setStyleSheet(QString::fromUtf8("#background{\n"
"background-color:#0A2F5C;\n"
"\n"
"}"));
        Dashboard = new QPushButton(frame);
        Dashboard->setObjectName("Dashboard");
        Dashboard->setGeometry(QRect(60, 270, 131, 29));
        Dashboard->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:black;\n"
"		color:#fff;\n"
"	font: 9pt \"Roboto\";\n"
"border-radius:5px;\n"
"	\n"
"	\n"
"}"));
        Schedule = new QPushButton(frame);
        Schedule->setObjectName("Schedule");
        Schedule->setGeometry(QRect(60, 370, 131, 29));
        Schedule->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:black;\n"
"		color:#fff;\n"
"	font: 9pt \"Roboto\";\n"
"border-radius:5px;\n"
"	\n"
"	\n"
"}"));
        Appointment = new QPushButton(frame);
        Appointment->setObjectName("Appointment");
        Appointment->setGeometry(QRect(60, 320, 131, 29));
        Appointment->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:black;\n"
"		color:#fff;\n"
"	font: 9pt \"Roboto\";\n"
"border-radius:5px;\n"
"	\n"
"	\n"
"}"));
        Settings = new QPushButton(frame);
        Settings->setObjectName("Settings");
        Settings->setGeometry(QRect(60, 470, 131, 29));
        Settings->setStyleSheet(QString::fromUtf8("\n"
"\n"
"QPushButton{\n"
"	background-color:#269597;\n"
"	color:#fff;\n"
"	font: 9pt \"Roboto\";\n"
"	border-radius:5px;\n"
"}"));
        Medical_records = new QPushButton(frame);
        Medical_records->setObjectName("Medical_records");
        Medical_records->setGeometry(QRect(60, 420, 131, 29));
        Medical_records->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:black;\n"
"		color:#fff;\n"
"	font: 9pt \"Roboto\";\n"
"border-radius:5px;\n"
"	\n"
"}\n"
""));
        logOut = new QPushButton(frame);
        logOut->setObjectName("logOut");
        logOut->setGeometry(QRect(60, 620, 131, 29));
        logOut->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:black;\n"
"		color:#fff;\n"
"	font: 9pt \"Roboto\";\n"
"border-radius:5px;\n"
"	\n"
"}"));
        label_8 = new QLabel(frame);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(70, 270, 31, 31));
        label_8->setPixmap(QPixmap(QString::fromUtf8(":/icon/icons/dashboard.png")));
        label_9 = new QLabel(frame);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(70, 320, 21, 31));
        label_9->setPixmap(QPixmap(QString::fromUtf8(":/icon/icons/appointment.png")));
        label_10 = new QLabel(frame);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(70, 420, 21, 31));
        label_10->setPixmap(QPixmap(QString::fromUtf8(":/icon/icons/medical.png")));
        label_11 = new QLabel(frame);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(69, 370, 21, 31));
        label_11->setPixmap(QPixmap(QString::fromUtf8(":/icon/icons/schedule.png")));
        label_15 = new QLabel(frame);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(150, 470, 21, 31));
        label_15->setPixmap(QPixmap(QString::fromUtf8(":/icon/icons/setting.png")));
        label_16 = new QLabel(frame);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(70, 620, 31, 31));
        label_16->setPixmap(QPixmap(QString::fromUtf8(":/icon/icons/logout.png")));
        usernameLabel = new QLabel(frame);
        usernameLabel->setObjectName("usernameLabel");
        usernameLabel->setGeometry(QRect(60, 200, 191, 41));
        usernameLabel->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"color:white\n"
";\n"
"font: 12pt \"Segoe UI\";\n"
"	border:none;"));
        patientIdLabel = new QLabel(frame);
        patientIdLabel->setObjectName("patientIdLabel");
        patientIdLabel->setGeometry(QRect(60, 230, 171, 31));
        patientIdLabel->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
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
        label_8->raise();
        label_9->raise();
        label_10->raise();
        label_11->raise();
        label_15->raise();
        label_16->raise();
        usernameLabel->raise();
        patientIdLabel->raise();
        stackedWidget = new QStackedWidget(setting);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(260, 190, 891, 461));
        stackedWidget->setStyleSheet(QString::fromUtf8("\n"
"	background-color:#bfdbfe;\n"
"border-radius:10px;\n"
""));
        Profile_2 = new QWidget();
        Profile_2->setObjectName("Profile_2");
        Profile_2->setStyleSheet(QString::fromUtf8("#Profile_2{\n"
"	background-color:rgb(255, 255, 255);\n"
"\n"
"\n"
"}"));
        scrollArea = new QScrollArea(Profile_2);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(0, 0, 891, 461));
        scrollArea->setStyleSheet(QString::fromUtf8("\n"
"	background-color:#bfdbfe;\n"
"border-radius:10px;\n"
""));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 891, 461));
        scrollAreaWidgetContents->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	background-color:#bfdbfe;\n"
"	padding:2px;\n"
"	margin:8px;\n"
"\n"
"}"));
        gridLayout = new QGridLayout(scrollAreaWidgetContents);
        gridLayout->setObjectName("gridLayout");
        dob = new QLabel(scrollAreaWidgetContents);
        dob->setObjectName("dob");
        dob->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"color:black\n"
";\n"
"font: 12pt \"Segoe UI\";\n"
"	border:none;"));

        gridLayout->addWidget(dob, 4, 0, 1, 1);

        gender = new QLabel(scrollAreaWidgetContents);
        gender->setObjectName("gender");
        gender->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"color:black\n"
";\n"
"font: 12pt \"Segoe UI\";\n"
"	border:none;"));

        gridLayout->addWidget(gender, 4, 2, 1, 2);

        email = new QLabel(scrollAreaWidgetContents);
        email->setObjectName("email");
        email->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"color:black\n"
";\n"
"font: 12pt \"Segoe UI\";\n"
"	border:none;"));

        gridLayout->addWidget(email, 3, 0, 1, 1);

        phone = new QLabel(scrollAreaWidgetContents);
        phone->setObjectName("phone");
        phone->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"color:black\n"
";\n"
"font: 12pt \"Segoe UI\";\n"
"	border:none;"));

        gridLayout->addWidget(phone, 3, 2, 1, 2);

        text_2 = new QLabel(scrollAreaWidgetContents);
        text_2->setObjectName("text_2");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(40);
        sizePolicy.setHeightForWidth(text_2->sizePolicy().hasHeightForWidth());
        text_2->setSizePolicy(sizePolicy);
        text_2->setStyleSheet(QString::fromUtf8("#text_2{\n"
"	\n"
"	font: 800 12pt \"Roboto\";\n"
"	background:transparent;color:black;\n"
"	\n"
"}\n"
""));

        gridLayout->addWidget(text_2, 0, 0, 1, 1);

        fname = new QLabel(scrollAreaWidgetContents);
        fname->setObjectName("fname");
        fname->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"color:black\n"
";\n"
"font: 12pt \"Segoe UI\";\n"
"	border:none;"));

        gridLayout->addWidget(fname, 1, 0, 1, 2);

        lname = new QLabel(scrollAreaWidgetContents);
        lname->setObjectName("lname");
        lname->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"color:black\n"
";\n"
"font: 12pt \"Segoe UI\";\n"
"	border:none;"));

        gridLayout->addWidget(lname, 1, 2, 1, 1);

        home = new QLabel(scrollAreaWidgetContents);
        home->setObjectName("home");
        home->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"color:black\n"
";\n"
"font: 12pt \"Segoe UI\";\n"
"	border:none;"));

        gridLayout->addWidget(home, 5, 0, 1, 2);

        bgroup = new QLabel(scrollAreaWidgetContents);
        bgroup->setObjectName("bgroup");
        bgroup->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"color:black\n"
";\n"
"font: 12pt \"Segoe UI\";\n"
"	border:none;"));

        gridLayout->addWidget(bgroup, 5, 2, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);
        stackedWidget->addWidget(Profile_2);
        Privacy_2 = new QWidget();
        Privacy_2->setObjectName("Privacy_2");
        Privacy_2->setStyleSheet(QString::fromUtf8("background-color:#bfdbfe;"));
        scrollArea_3 = new QScrollArea(Privacy_2);
        scrollArea_3->setObjectName("scrollArea_3");
        scrollArea_3->setGeometry(QRect(0, 0, 911, 471));
        scrollArea_3->setStyleSheet(QString::fromUtf8("\n"
"background-color:#bfdbfe;\n"
"\n"
""));
        scrollArea_3->setWidgetResizable(true);
        scrollAreaWidgetContents_4 = new QWidget();
        scrollAreaWidgetContents_4->setObjectName("scrollAreaWidgetContents_4");
        scrollAreaWidgetContents_4->setGeometry(QRect(0, 0, 911, 471));
        scrollAreaWidgetContents_4->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	background-color:#bfdbfe;\n"
"	border-radius:10px;\n"
"	padding:2px;\n"
"	margin:2px;\n"
"\n"
"}"));
        gridLayout_4 = new QGridLayout(scrollAreaWidgetContents_4);
        gridLayout_4->setObjectName("gridLayout_4");
        text_pass_3 = new QLabel(scrollAreaWidgetContents_4);
        text_pass_3->setObjectName("text_pass_3");
        text_pass_3->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	\n"
"	font: 600 14pt \"Roboto\";\n"
"	background:transparent;\n"
"color:rgb(44, 168, 162);\n"
"	\n"
"}\n"
""));

        gridLayout_4->addWidget(text_pass_3, 0, 0, 1, 1);

        label_27 = new QLabel(scrollAreaWidgetContents_4);
        label_27->setObjectName("label_27");
        label_27->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	margin-left:20px;	\n"
"	font: 600 12pt \"Roboto\";\n"
"	background:transparent;\n"
"	color:black;\n"
"}\n"
""));

        gridLayout_4->addWidget(label_27, 2, 0, 1, 1);

        widget_8 = new QWidget(scrollAreaWidgetContents_4);
        widget_8->setObjectName("widget_8");
        widget_8->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	background-color:#bfdbfef;\n"
"	border-radius:10px;\n"
"\n"
"		margin:4px;\n"
"\n"
"}"));
        verticalLayout_6 = new QVBoxLayout(widget_8);
        verticalLayout_6->setObjectName("verticalLayout_6");
        label_20 = new QLabel(widget_8);
        label_20->setObjectName("label_20");
        label_20->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	margin-left:20px;	\n"
"	font: 600 12pt \"Roboto\";\n"
"	background:transparent;\n"
"color:black;\n"
"	\n"
"}\n"
""));

        verticalLayout_6->addWidget(label_20);

        label_2 = new QLabel(widget_8);
        label_2->setObjectName("label_2");

        verticalLayout_6->addWidget(label_2);

        label_23 = new QLabel(widget_8);
        label_23->setObjectName("label_23");
        label_23->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	margin-left:20px;		\n"
"	font: 800 10pt \"Roboto\";\n"
"	background:transparent;\n"
"	color:rgb(220, 38, 38);\n"
"	\n"
"}\n"
""));

        verticalLayout_6->addWidget(label_23);

        label_24 = new QLabel(widget_8);
        label_24->setObjectName("label_24");
        label_24->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	\n"
"	font: 10pt \"Roboto\";\n"
"	 margin-left: 20px;\n"
"color:black;\n"
"}"));

        verticalLayout_6->addWidget(label_24);

        delete_2 = new QPushButton(widget_8);
        delete_2->setObjectName("delete_2");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(delete_2->sizePolicy().hasHeightForWidth());
        delete_2->setSizePolicy(sizePolicy1);
        delete_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"        background-color: #bfdbfe;\n"
"        color: 	rgb(220, 38, 38);\n"
"		border:1px solid rgb(220, 38, 38);\n"
"        border-radius: 10px;\n"
"        font-family: 'Segoe UI';\n"
"        font-size: 14px;\n"
"        font-weight: bold;\n"
"        padding: 6px 12px;\n"
"    }"));

        verticalLayout_6->addWidget(delete_2);


        gridLayout_4->addWidget(widget_8, 4, 0, 1, 2);

        text_10 = new QLabel(scrollAreaWidgetContents_4);
        text_10->setObjectName("text_10");
        text_10->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	\n"
"	font: 300 11pt \"Roboto\";\n"
"	background:transparent;\n"
"color:black;\n"
"	\n"
"}\n"
""));

        gridLayout_4->addWidget(text_10, 1, 0, 1, 1);

        download = new QPushButton(scrollAreaWidgetContents_4);
        download->setObjectName("download");
        sizePolicy1.setHeightForWidth(download->sizePolicy().hasHeightForWidth());
        download->setSizePolicy(sizePolicy1);
        download->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"        background-color: #2CA8A2;\n"
"        color: white;\n"
"        border-radius: 10px;\n"
"        font-family: 'Segoe UI';\n"
"        font-size: 14px;\n"
"        font-weight: bold;\n"
"        padding: 6px 12px;\n"
"	\n"
"    }"));

        gridLayout_4->addWidget(download, 3, 0, 1, 1);

        scrollArea_3->setWidget(scrollAreaWidgetContents_4);
        stackedWidget->addWidget(Privacy_2);
        Security_2 = new QWidget();
        Security_2->setObjectName("Security_2");
        Security_2->setStyleSheet(QString::fromUtf8("background-color:#bfdbfe;"));
        confirmpass = new QLineEdit(Security_2);
        confirmpass->setObjectName("confirmpass");
        confirmpass->setGeometry(QRect(280, 190, 331, 41));
        confirmpass->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"background-color:#e0f2fe;\n"
"	 margin-left: 20px;\n"
" 	margin-right: 40px;\n"
"	border:1px  solid  #DDD;\n"
"	border-radius:8px;\n"
"	font: 9pt \"Roboto\";\n"
"color:black;\n"
"\n"
"	\n"
"}"));
        currentpass = new QLineEdit(Security_2);
        currentpass->setObjectName("currentpass");
        currentpass->setGeometry(QRect(280, 141, 331, 41));
        currentpass->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"background-color:#e0f2fe;\n"
"	 margin-left: 20px;\n"
" 	margin-right: 40px;\n"
"	border:1px  solid  #DDD;\n"
"	border-radius:8px;\n"
"	font: 9pt \"Roboto\";\n"
"color:black;\n"
"\n"
"	\n"
"}"));
        update_password = new QPushButton(Security_2);
        update_password->setObjectName("update_password");
        update_password->setGeometry(QRect(270, 300, 331, 41));
        sizePolicy1.setHeightForWidth(update_password->sizePolicy().hasHeightForWidth());
        update_password->setSizePolicy(sizePolicy1);
        update_password->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"        background-color: #2CA8A2;\n"
"        color: white;\n"
"        border-radius: 10px;\n"
"        font-family: 'Segoe UI';\n"
"        font-size: 14px;\n"
"        font-weight: bold;\n"
"        padding: 6px 12px;\n"
"    }"));
        newpass = new QLineEdit(Security_2);
        newpass->setObjectName("newpass");
        newpass->setGeometry(QRect(280, 240, 331, 38));
        newpass->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"background-color:#e0f2fe;\n"
"	 margin-left: 20px;\n"
" 	margin-right: 40px;\n"
"	border:1px  solid  #DDD;\n"
"	border-radius:8px;\n"
"	font: 9pt \"Roboto\";\n"
"color:black;\n"
"\n"
"	\n"
"}"));
        label = new QLabel(Security_2);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 10, 291, 61));
        label->setStyleSheet(QString::fromUtf8("font: 600 20pt;\n"
"color:black;\n"
""));
        stackedWidget->addWidget(Security_2);
        settings = new QLabel(setting);
        settings->setObjectName("settings");
        settings->setGeometry(QRect(270, 40, 251, 31));
        settings->setStyleSheet(QString::fromUtf8("#settings{\n"
"	color:#044B83;\n"
"	font: 600 16pt \"Roboto\";\n"
"	background:transparent;\n"
"	\n"
"}\n"
""));
        text = new QLabel(setting);
        text->setObjectName("text");
        text->setGeometry(QRect(270, 70, 571, 31));
        text->setStyleSheet(QString::fromUtf8("#text{\n"
"	\n"
"	font: 600 12pt \"Roboto\";\n"
"	background:transparent;\n"
"color:black;\n"
"	\n"
"}\n"
""));
        background_color = new QLabel(setting);
        background_color->setObjectName("background_color");
        background_color->setGeometry(QRect(270, 130, 331, 51));
        background_color->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	background-color:#e0f2fef;\n"
"	border-radius:20%;\n"
"	padding:4px;\n"
"}"));
        Profile = new QPushButton(setting);
        Profile->setObjectName("Profile");
        Profile->setGeometry(QRect(290, 140, 93, 31));
        Profile->setStyleSheet(QString::fromUtf8("  QPushButton {\n"
"        background-color: #DDDDDD;\n"
"        color: black;\n"
"        border-radius: 10px;\n"
"        font-family: 'Segoe UI';\n"
"        font-size: 14px;\n"
"        font-weight: normal;\n"
"        padding: 6px 12px;\n"
"    }"));
        Security = new QPushButton(setting);
        Security->setObjectName("Security");
        Security->setGeometry(QRect(490, 140, 93, 31));
        Security->setStyleSheet(QString::fromUtf8("  QPushButton {\n"
"        background-color: #DDDDDD;\n"
"        color: black;\n"
"        border-radius: 10px;\n"
"        font-family: 'Segoe UI';\n"
"        font-size: 14px;\n"
"        font-weight: normal;\n"
"        padding: 6px 12px;\n"
"    }"));
        Privacy = new QPushButton(setting);
        Privacy->setObjectName("Privacy");
        Privacy->setGeometry(QRect(390, 140, 93, 31));
        Privacy->setStyleSheet(QString::fromUtf8("  QPushButton {\n"
"        background-color: #DDDDDD;\n"
"        color: black;\n"
"        border-radius: 10px;\n"
"        font-family: 'Segoe UI';\n"
"        font-size: 14px;\n"
"        font-weight: normal;\n"
"        padding: 6px 12px;\n"
"    }"));

        retranslateUi(setting);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(setting);
    } // setupUi

    void retranslateUi(QWidget *setting)
    {
        setting->setWindowTitle(QCoreApplication::translate("setting", "Form", nullptr));
        profile->setText(QString());
        background->setText(QString());
        Dashboard->setText(QCoreApplication::translate("setting", "     Dashboard", nullptr));
        Schedule->setText(QCoreApplication::translate("setting", "   Schedule", nullptr));
        Appointment->setText(QCoreApplication::translate("setting", "       Appointment", nullptr));
        Settings->setText(QCoreApplication::translate("setting", "Settings   ", nullptr));
        Medical_records->setText(QCoreApplication::translate("setting", "        Medical Records", nullptr));
        logOut->setText(QCoreApplication::translate("setting", "LogOut", nullptr));
        label_8->setText(QString());
        label_9->setText(QString());
        label_10->setText(QString());
        label_11->setText(QString());
        label_15->setText(QString());
        label_16->setText(QString());
        usernameLabel->setText(QCoreApplication::translate("setting", "Username:", nullptr));
        patientIdLabel->setText(QCoreApplication::translate("setting", "Patient Id:", nullptr));
        dob->setText(QCoreApplication::translate("setting", "Date of Birth", nullptr));
        gender->setText(QCoreApplication::translate("setting", "Gender", nullptr));
        email->setText(QCoreApplication::translate("setting", "Email Address", nullptr));
        phone->setText(QCoreApplication::translate("setting", "Phone Number", nullptr));
        text_2->setText(QCoreApplication::translate("setting", "PROFILE", nullptr));
        fname->setText(QCoreApplication::translate("setting", "First Name:", nullptr));
        lname->setText(QCoreApplication::translate("setting", "Last Name:", nullptr));
        home->setText(QCoreApplication::translate("setting", "Home Address", nullptr));
        bgroup->setText(QCoreApplication::translate("setting", "Blood group", nullptr));
        text_pass_3->setText(QCoreApplication::translate("setting", "Data Management", nullptr));
        label_27->setText(QCoreApplication::translate("setting", "Download your data", nullptr));
        label_20->setText(QCoreApplication::translate("setting", "Manage your account status", nullptr));
        label_2->setText(QString());
        label_23->setText(QCoreApplication::translate("setting", "Delete Account", nullptr));
        label_24->setText(QCoreApplication::translate("setting", "Permanently delete your account and all associated data. This action cannot be undone.", nullptr));
        delete_2->setText(QCoreApplication::translate("setting", "Delete Account", nullptr));
        text_10->setText(QCoreApplication::translate("setting", "Access and manage your medical data", nullptr));
        download->setText(QCoreApplication::translate("setting", "Download Medical Data", nullptr));
        confirmpass->setPlaceholderText(QCoreApplication::translate("setting", "New Password", nullptr));
        currentpass->setPlaceholderText(QCoreApplication::translate("setting", "Enter Your Current Password", nullptr));
        update_password->setText(QCoreApplication::translate("setting", "Update Password", nullptr));
        newpass->setPlaceholderText(QCoreApplication::translate("setting", "Confirm New Password", nullptr));
        label->setText(QCoreApplication::translate("setting", "Update Your Password", nullptr));
        settings->setText(QCoreApplication::translate("setting", "Settings", nullptr));
        text->setText(QCoreApplication::translate("setting", "Manage your account, preferences, and security", nullptr));
        background_color->setText(QString());
        Profile->setText(QCoreApplication::translate("setting", "Profile", nullptr));
        Security->setText(QCoreApplication::translate("setting", "Security", nullptr));
        Privacy->setText(QCoreApplication::translate("setting", "Privacy", nullptr));
    } // retranslateUi

};

namespace Ui {
    class setting: public Ui_setting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTING_H
