#ifndef USER_H
#define USER_H

#include <QWidget>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
#include <QDate>       // Added for QDate
#include <QDateTime>   // Added for QDateTime

class Welcome;
class Schedule;
class logout;
class medical;
class setting;

namespace Ui {
class user; // Ensure this matches your .ui file's class name
}

class User : public QWidget
{
    Q_OBJECT

public:
    explicit User(QWidget *parent = nullptr);
    ~User();

private slots:
    void on_Dashboard_clicked();
    void on_Schedule_clicked();
    void on_logOut_clicked();
    void on_Medical_records_clicked();
    void on_Settings_clicked();
    void on_Appointment_clicked(); // Existing slot for navigation/initial load

    // --- START: New Slot for Calendar Widget ---
    void on_calendarWidget_selectionChanged();
    // --- END: New Slot for Calendar Widget ---

private:
    // --- START: New Function to fetch appointments for a specific date ---
    void fetchAppointmentsForDate(int patientId, const QDate& date);
    void fetchusername(int patientId);
    // --- END: New Function to fetch appointments for a specific date ---

    Ui::user *ui;
    QSqlDatabase db;
    Welcome *welcome;
    Schedule *schedule;
    logout *Logout;
    medical *Medical;
    setting *Setting;

};

#endif // USER_H
