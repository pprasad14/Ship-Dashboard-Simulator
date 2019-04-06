#include "mainwindow.h"
#include <QApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    int x = w.height();
    qDebug()<<x;
    w.show();

    return a.exec();
}
