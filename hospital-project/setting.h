#ifndef SETTING_H
#define SETTING_H

#include "logout.h"
#include <QWidget>
#include <QtSql/QSqlDatabase>
#include <QString>

namespace Ui {
class setting;
}

class setting : public QWidget
{
    Q_OBJECT

public:
    explicit setting(QWidget *parent = nullptr);
    ~setting();

private slots:
    void on_Dashboard_clicked();
    void on_Appointment_clicked();
    void on_Schedule_clicked();
    void on_Medical_records_clicked();
    void on_logOut_clicked();
    void on_delete_2_clicked();
    void on_download_pressed();

    // These functions now directly handle both the page transition and styling
    void on_Profile_clicked();
    void on_Security_clicked();
    void on_Privacy_clicked();
    void on_updatepassword_pressed();

private:
    Ui::setting *ui;
    QSqlDatabase db;
    QWidget *welcome = nullptr;
    QWidget *user = nullptr;
    QWidget *schedule = nullptr;
    logout *Logout = nullptr;
    QWidget *Medical = nullptr;
    QWidget *loginForm = nullptr;

    void switchWindow(QWidget *newWindow);

    // The styles are declared as member variables
    QString activeStyle;
    QString inactiveStyle;
};

#endif // SETTING_H
