#ifndef FORM2_H
#define FORM2_H

#include <QWidget>
#include <QtSql/QSqlDatabase>

QT_BEGIN_NAMESPACE
namespace Ui { class Form2; }
QT_END_NAMESPACE

class Form;
class Welcome;

class Form2 : public QWidget
{
    Q_OBJECT

public:
    explicit Form2(QWidget *parent = nullptr);
    ~Form2();

private slots:
    void on_register_2_clicked();
    void on_sign_in_clicked();
    void on_acc_2_clicked();

private:
    Ui::Form2 *ui;
    Form *form;
    Welcome *welcome;
    QSqlDatabase db;
};

#endif
