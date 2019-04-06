#include "shipsimulator.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ShipSimulator w;

    w.show();
    return a.exec();
}
