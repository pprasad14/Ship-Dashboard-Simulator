#include "udp_nmea.h"
#include <QDebug>
#include <QtNetwork>

UDP_NMEA::UDP_NMEA(QWidget *parent) :
    QMainWindow(parent)
{
    socket = new QUdpSocket(this);

}

void UDP_NMEA::writeData(QString sentence)
{
    QByteArray buffer = sentence.toLocal8Bit();
    socket->writeDatagram(buffer,QHostAddress::Broadcast,45454);

    qDebug() <<buffer;

}
