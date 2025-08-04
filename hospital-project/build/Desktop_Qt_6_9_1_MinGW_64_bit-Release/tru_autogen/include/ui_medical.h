/********************************************************************************
** Form generated from reading UI file 'medical.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEDICAL_H
#define UI_MEDICAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_medical
{
public:
    QFrame *frame_2;
    QLabel *appointment;
    QLabel *textl;
    QPushButton *viewrecords;
    QPushButton *uploadrecords;
    QFrame *viewframe;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_7;
    QTableWidget *medicalRecordsTable;
    QDateEdit *dateEdit;
    QLabel *label_8;
    QFrame *uploadframe;
    QLabel *statusLabel;
    QPushButton *uploadReportButton;
    QTextBrowser *textBrowser_2;
    QFrame *frame;
    QLabel *profile;
    QLabel *background;
    QPushButton *Dashboard;
    QPushButton *Schedule;
    QPushButton *Appointment;
    QPushButton *Settings;
    QPushButton *Medical_records;
    QPushButton *logOut;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *patientIdLabel;
    QLabel *usernameLabel;

    void setupUi(QWidget *medical)
    {
        if (medical->objectName().isEmpty())
            medical->setObjectName("medical");
        medical->resize(1288, 673);
        medical->setStyleSheet(QString::fromUtf8("#medical{\n"
"background-color:#E5F0F7;\n"
"}"));
        frame_2 = new QFrame(medical);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(240, 0, 1051, 681));
        frame_2->setStyleSheet(QString::fromUtf8("#frame_2{\n"
"\n"
"background-color:#e0f2fe;\n"
"\n"
"\n"
"}"));
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        appointment = new QLabel(frame_2);
        appointment->setObjectName("appointment");
        appointment->setGeometry(QRect(40, 100, 921, 441));
        appointment->setStyleSheet(QString::fromUtf8("QLabel{\n"
"\n"
"	\n"
"background-color:#fff;\n"
"border-radius:10px;\n"
"margin:2px;\n"
"padding:10px;\n"
"}"));
        textl = new QLabel(frame_2);
        textl->setObjectName("textl");
        textl->setGeometry(QRect(70, 50, 271, 31));
        textl->setStyleSheet(QString::fromUtf8("#textl{\n"
"\n"
"	font: 600 16pt \"Roboto\";\n"
"	background:transparent;\n"
"color:black;\n"
"}\n"
""));
        viewrecords = new QPushButton(frame_2);
        viewrecords->setObjectName("viewrecords");
        viewrecords->setGeometry(QRect(380, 50, 101, 41));
        viewrecords->setStyleSheet(QString::fromUtf8("  background-color: #DDDDDD;\n"
"        color: black;\n"
"        border-radius: 10px;\n"
"        font-family: 'Segoe UI';\n"
"        font-size: 14px;\n"
"        font-weight: normal;\n"
"        padding: 6px 12px;"));
        uploadrecords = new QPushButton(frame_2);
        uploadrecords->setObjectName("uploadrecords");
        uploadrecords->setGeometry(QRect(510, 50, 111, 41));
        uploadrecords->setStyleSheet(QString::fromUtf8("  background-color: #DDDDDD;\n"
"        color: black;\n"
"        border-radius: 10px;\n"
"        font-family: 'Segoe UI';\n"
"        font-size: 14px;\n"
"        font-weight: normal;\n"
"        padding: 6px 12px;"));
        viewframe = new QFrame(frame_2);
        viewframe->setObjectName("viewframe");
        viewframe->setGeometry(QRect(39, 99, 921, 441));
        viewframe->setStyleSheet(QString::fromUtf8("background-color:#bfdbfe;\n"
""));
        viewframe->setFrameShape(QFrame::Shape::StyledPanel);
        viewframe->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayoutWidget = new QWidget(viewframe);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(40, 100, 861, 321));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(verticalLayoutWidget);
        label_7->setObjectName("label_7");
        label_7->setStyleSheet(QString::fromUtf8("color:black;\n"
"font: 16pt;"));

        verticalLayout->addWidget(label_7);

        medicalRecordsTable = new QTableWidget(verticalLayoutWidget);
        medicalRecordsTable->setObjectName("medicalRecordsTable");
        medicalRecordsTable->setStyleSheet(QString::fromUtf8("border-radius:10px;\n"
"background-color:#e0f2fe;\n"
"	font: 200 16pt \"Roboto\";\n"
"	color:black;"));

        verticalLayout->addWidget(medicalRecordsTable);

        dateEdit = new QDateEdit(viewframe);
        dateEdit->setObjectName("dateEdit");
        dateEdit->setGeometry(QRect(50, 60, 141, 39));
        dateEdit->setStyleSheet(QString::fromUtf8("color:skyblue;\n"
"background-color:solid;\n"
"font: 16pt;"));
        dateEdit->setCalendarPopup(true);
        label_8 = new QLabel(viewframe);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(50, 30, 241, 21));
        label_8->setStyleSheet(QString::fromUtf8("color:black;\n"
"font: 16pt;"));
        uploadframe = new QFrame(frame_2);
        uploadframe->setObjectName("uploadframe");
        uploadframe->setGeometry(QRect(40, 100, 921, 441));
        uploadframe->setStyleSheet(QString::fromUtf8("background-color:#bfdbfe;"));
        uploadframe->setFrameShape(QFrame::Shape::StyledPanel);
        uploadframe->setFrameShadow(QFrame::Shadow::Raised);
        statusLabel = new QLabel(uploadframe);
        statusLabel->setObjectName("statusLabel");
        statusLabel->setGeometry(QRect(290, 110, 351, 41));
        statusLabel->setStyleSheet(QString::fromUtf8("#statusLabel{\n"
"\n"
"	font: 200 16pt \"Roboto\";\n"
"	background:transparent;\n"
"color:black;\n"
"}\n"
""));
        uploadReportButton = new QPushButton(uploadframe);
        uploadReportButton->setObjectName("uploadReportButton");
        uploadReportButton->setGeometry(QRect(521, 153, 111, 29));
        uploadReportButton->setStyleSheet(QString::fromUtf8("\n"
"	background-color:#15803D;\n"
"	color:#black;\n"
"	font: 600 9pt \"Roboto\";\n"
"	border: 1px solid gray;\n"
"	border-radius:8px;\n"
"	padding:2px;\n"
"\n"
"\n"
"	\n"
""));
        textBrowser_2 = new QTextBrowser(uploadframe);
        textBrowser_2->setObjectName("textBrowser_2");
        textBrowser_2->setGeometry(QRect(280, 200, 371, 171));
        textBrowser_2->setStyleSheet(QString::fromUtf8("#textBrowser_2{\n"
"border-radius:10px;\n"
"background-color:#e0f2fe;\n"
"	font: 200 16pt \"Roboto\";\n"
"	color:black;\n"
"}\n"
""));
        appointment->raise();
        textl->raise();
        viewrecords->raise();
        uploadrecords->raise();
        uploadframe->raise();
        viewframe->raise();
        frame = new QFrame(medical);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(-10, -10, 251, 741));
        frame->setStyleSheet(QString::fromUtf8("frame{\n"
"background-color:#0A2F5C;\n"
"}"));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        profile = new QLabel(frame);
        profile->setObjectName("profile");
        profile->setGeometry(QRect(60, 40, 141, 181));
        profile->setStyleSheet(QString::fromUtf8("front{\n"
"	border-radus;20px\n"
"}"));
        profile->setPixmap(QPixmap(QString::fromUtf8(":/image/resourse/profile.jpg")));
        background = new QLabel(frame);
        background->setObjectName("background");
        background->setGeometry(QRect(2, -41, 251, 751));
        background->setStyleSheet(QString::fromUtf8("#background{\n"
"background-color:#0A2F5C;\n"
"\n"
"}"));
        Dashboard = new QPushButton(frame);
        Dashboard->setObjectName("Dashboard");
        Dashboard->setGeometry(QRect(60, 270, 131, 29));
        Dashboard->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:black;\n"
"		color:#fff;\n"
"	font: 9pt \"Roboto\";\n"
"border-radius:5px;\n"
"	\n"
"}"));
        Schedule = new QPushButton(frame);
        Schedule->setObjectName("Schedule");
        Schedule->setGeometry(QRect(60, 370, 131, 29));
        Schedule->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:black;\n"
"		color:#fff;\n"
"	font: 9pt \"Roboto\";\n"
"border-radius:5px;\n"
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
        Settings->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:black;\n"
"		color:#fff;\n"
"	font: 9pt \"Roboto\";\n"
"border-radius:5px;\n"
"	\n"
"}"));
        Medical_records = new QPushButton(frame);
        Medical_records->setObjectName("Medical_records");
        Medical_records->setGeometry(QRect(60, 420, 131, 29));
        Medical_records->setStyleSheet(QString::fromUtf8("\n"
"\n"
"QPushButton{\n"
"	background-color:#269597;\n"
"	color:#fff;\n"
"	font:400  10pt \"Roboto\";\n"
"	border-radius:5px;\n"
"}"));
        logOut = new QPushButton(frame);
        logOut->setObjectName("logOut");
        logOut->setGeometry(QRect(60, 620, 131, 29));
        logOut->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:black;\n"
"		color:#fff;\n"
"	font: 9pt \"Roboto\";\n"
"border-radius:5px;\n"
"	\n"
"	\n"
"}"));
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setGeometry(QRect(67, 270, 21, 31));
        label->setPixmap(QPixmap(QString::fromUtf8(":/icon/icons/dashboard.png")));
        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(66, 320, 16, 31));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/icon/icons/appointment.png")));
        label_3 = new QLabel(frame);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(68, 370, 21, 31));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/icon/icons/schedule.png")));
        label_4 = new QLabel(frame);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(170, 420, 21, 31));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/icon/icons/medical.png")));
        label_5 = new QLabel(frame);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(70, 470, 21, 31));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/icon/icons/setting.png")));
        label_6 = new QLabel(frame);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(70, 620, 21, 31));
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/icon/icons/logout.png")));
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
        label->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        label_5->raise();
        label_6->raise();
        patientIdLabel->raise();
        usernameLabel->raise();

        retranslateUi(medical);
        QObject::connect(viewrecords, &QPushButton::clicked, viewframe, qOverload<>(&QFrame::show));
        QObject::connect(viewrecords, &QPushButton::clicked, uploadframe, qOverload<>(&QFrame::hide));
        QObject::connect(uploadrecords, &QPushButton::clicked, uploadframe, qOverload<>(&QFrame::show));
        QObject::connect(uploadrecords, &QPushButton::clicked, viewframe, qOverload<>(&QFrame::hide));

        QMetaObject::connectSlotsByName(medical);
    } // setupUi

    void retranslateUi(QWidget *medical)
    {
        medical->setWindowTitle(QCoreApplication::translate("medical", "Form", nullptr));
#if QT_CONFIG(whatsthis)
        appointment->setWhatsThis(QCoreApplication::translate("medical", "<html><head/><body><p>Appointment</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        appointment->setText(QCoreApplication::translate("medical", "<html><head/><body><p><br/></p></body></html>", nullptr));
        textl->setText(QCoreApplication::translate("medical", "Medical Records", nullptr));
        viewrecords->setText(QCoreApplication::translate("medical", "View", nullptr));
        uploadrecords->setText(QCoreApplication::translate("medical", "Upload", nullptr));
        label_7->setText(QCoreApplication::translate("medical", "View Medical Records", nullptr));
        label_8->setText(QCoreApplication::translate("medical", "Select Date", nullptr));
        statusLabel->setText(QCoreApplication::translate("medical", "Upload Medical Records", nullptr));
        uploadReportButton->setText(QCoreApplication::translate("medical", "Upload Report", nullptr));
        profile->setText(QString());
        background->setText(QString());
        Dashboard->setText(QCoreApplication::translate("medical", "  Dashboard", nullptr));
        Schedule->setText(QCoreApplication::translate("medical", "Schedule", nullptr));
        Appointment->setText(QCoreApplication::translate("medical", "      Appointments", nullptr));
        Settings->setText(QCoreApplication::translate("medical", "  Settings", nullptr));
        Medical_records->setText(QCoreApplication::translate("medical", "Medical Records     ", nullptr));
        logOut->setText(QCoreApplication::translate("medical", "LogOut", nullptr));
        label->setText(QString());
        label_2->setText(QString());
        label_3->setText(QString());
        label_4->setText(QString());
        label_5->setText(QString());
        label_6->setText(QString());
        patientIdLabel->setText(QCoreApplication::translate("medical", "Patient Id:", nullptr));
        usernameLabel->setText(QCoreApplication::translate("medical", "Username:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class medical: public Ui_medical {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEDICAL_H
