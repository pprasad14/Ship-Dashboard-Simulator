#include "mainwindow.h"
#include <QApplication>
#include <qfile.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    QFile file("style.qss");
    file.open(QFile::ReadOnly);
    QString stylesheet = file.readAll();
    w.setStyleSheet(stylesheet);
    return a.exec();
}
