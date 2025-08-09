#ifndef FORM_H
#define FORM_H

#include <QWidget>
#include <QtSql/QSqlDatabase>

namespace Ui {
class Form;
}

class Form2;

class Form : public QWidget
{
    Q_OBJECT

public:
    explicit Form(QWidget *parent = nullptr);
    ~Form();

private slots:
    void on_Register_2_clicked();
    void on_signin_clicked();
    void on_acc_text_clicked();

private:
    Ui::Form *ui;
    Form2 *form2;
    QSqlDatabase db;
};

#endif
