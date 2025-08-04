#ifndef LOGOUT_H
#define LOGOUT_H

#include <QDialog>

namespace Ui {
class logout;
}

class Form2;

class logout : public QDialog
{
    Q_OBJECT

public:
    explicit logout(QWidget *parent = nullptr);
    ~logout();

private slots:
    void on_logout_2_clicked();

    void on_cancel_clicked();

private:
    Ui::logout *ui;
    Form2 *form2;
};

#endif // LOGOUT_H
