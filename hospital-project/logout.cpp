#include "logout.h"
#include "ui_logout.h"
#include "form2.h"
#include <QIcon>

logout::logout(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::logout)
{
    ui->setupUi(this);
    setWindowIcon(QIcon(":/app_icon/icons/icon.jpeg"));
    this->setWindowTitle("HDMS");


}

logout::~logout()
{
    delete ui;
}

void logout::on_logout_2_clicked()
{
    form2 = new Form2();
    form2->show();



    for (QWidget *w : QApplication::topLevelWidgets()) {
        if (w != form2) {
            w->close();
        }
    }
}


void logout::on_cancel_clicked()
{
    this->close();
}

