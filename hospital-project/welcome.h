#ifndef WELCOME_H
#define WELCOME_H

#include <QWidget>
#include <QtSql/QSqlDatabase>
#include <qtablewidget.h>

namespace Ui {
class Welcome;
}

class User;
class Schedule;
class logout;
class medical;
class setting;

class Welcome : public QWidget {
    Q_OBJECT

public:
    // Constructor now only takes the patient's ID
    explicit Welcome(int patientId, QWidget *parent = nullptr);
    ~Welcome();

private slots:
    void on_Medical_records_clicked();
    void on_Appointment_clicked();
    void on_Schedule_clicked();
    void on_logout_clicked();

    void on_Settings_clicked();


private:
    void loadPatientData(int patientId); // Function to load data from DB
    void fetchUpcomingAppointments(int patientId);
    Ui::Welcome *ui;
    User *user = nullptr;
    Schedule *schedule = nullptr;
    logout *Logout = nullptr;
    medical *Medical = nullptr;
    setting *Setting = nullptr;
    QSqlDatabase db; // Database connection object
QTableWidget *medicalRecordsTable;



};

#endif // WELCOME_H
