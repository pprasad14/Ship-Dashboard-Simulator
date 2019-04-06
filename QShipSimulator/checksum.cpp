#include "checksum.h"
#include <QDebug>

CheckSum::CheckSum(QWidget *parent) :
    QMainWindow(parent)
{
}

int CheckSum::getCheckSum(char *s)
{
    int c = 0;

    while(*s)
        c ^= *s++;

    return c;
}

