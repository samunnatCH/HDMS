#ifndef SCHEDULE_H
#define SCHEDULE_H

#include <QWidget>
#include <QDate>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
#include <QMap>
#include <QPair>
#include <QMessageBox>
#include <QDebug>
#include <QFile>
#include <QTextStream>

// Explicitly include from QtCore to ensure full type definition
#include <QtCore/QTime>
#include <QtCore/QList>
#include <QtCore/QSet>
#include <QtCore/QDateTime> // For QDateTime in generateTimeSlots and cleanup
#include <QtCore/QJsonDocument>
#include <QtCore/QJsonObject>
#include <QtCore/QJsonArray>


class User;
class Welcome;
class logout;
class medical;
class setting;

namespace Ui {
class Schedule;
}

class Schedule : public QWidget
{
    Q_OBJECT

public:
    explicit Schedule(QWidget *parent = nullptr);
    ~Schedule();

private slots:
    void on_Dashboard_clicked();
    void on_Appointment_clicked();
    void on_logOut_clicked();
    void on_Medical_records_clicked();
    void on_Settings_clicked();

    void on_calendarWidget_selectionChanged();
    void on_select_Hospital_currentIndexChanged(int index);


    void on_set_appointment_pressed();

private:
    void fetchDoctorsFromDb();
    void fetchAvailableSlotsFromDb(int doctorId, const QDate& date);
    bool isSlotAvailable(int doctorId, const QDateTime& dateTime);
    QList<QTime> generateTimeSlots(const QDate& date, const QString& availabilityJson, int intervalMinutes = 30);
    void savePastAppointmentsToFile();
    void cleanupPastAppointments();

    Ui::Schedule *ui;
    Welcome *welcome;
    User *user;
    logout *Logout;
    medical *Medical;
    setting *Setting;

    QSqlDatabase db;
    QMap<int, QPair<QString, QString>> doctorMap;
    QMap<int, QString> doctorAvailabilityJsonMap;
};

#endif // SCHEDULE_H
