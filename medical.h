#ifndef MEDICAL_H
#define MEDICAL_H

#include <QWidget>
#include <qsqldatabase.h>
#include <QTableWidget>
#include <QPushButton>

namespace Ui {
class medical;
}

class Schedule;
class User;
class Welcome;
class logout;
class setting;

class medical : public QWidget
{
    Q_OBJECT

public:
    explicit medical(QWidget *parent = nullptr);
    ~medical();

private slots:
    void on_Appointment_clicked();
    void on_Schedule_clicked();
    void on_logOut_clicked();
    void on_Settings_clicked();
    void on_Dashboard_clicked();
    void on_uploadReportButton_pressed();

    // New slots for handling table interactions
    void onViewReportButtonClicked(int recordId);
    void on_dateEdit_dateChanged(const QDate& date);

    void on_viewrecords_clicked();
    void on_uploadrecords_clicked();

private:
    Ui::medical *ui;
    Schedule *schedule;
    Welcome *welcome;
    User *user;
    logout *Logout;
    setting *Setting;
    QSqlDatabase db;

    // Declaration has been updated to include the fileName parameter.
    bool saveLabReportToDb(int patientId, const QByteArray& labReportData, const QString& fileName);
    // Declaration for the function to load records has been added.
    void loadMedicalRecords(const QDate &date);
    QString activeStyle;
    QString inactiveStyle;
};

#endif
