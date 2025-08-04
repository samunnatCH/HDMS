#include "form.h"
#include "form2.h"
#include "user.h"
#include "mainwindow.h"
#include "welcome.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setApplicationName("HDMS");

    Form w;
    w.show();
    return a.exec();

    // connect(ui->signin, &QPushButton::clicked,this, &Form::openform2)
}
// void Form::openform2()
// {
//     form2 *secondWindow = new form2(this);
//     secondWindow->setAttribute(Qt::WA_DeleteOnClose); // Clean up on close
//     secondWindow->show();  // or .exec() if it's a modal dialog
// }
