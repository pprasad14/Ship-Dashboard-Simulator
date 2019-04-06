#include "speed_logmeter.h"
#include <shipsimulator.h>
#include <checksum.h>
#include <QDebug>
#include <udp_nmea.h>
Speed_Logmeter::Speed_Logmeter(QWidget *parent) :
    QMainWindow(parent)
{

}

QString Speed_Logmeter::generateNMEA(QString id, double course, double velocity)
{
    CheckSum cs;
    UDP_NMEA *udp = new UDP_NMEA(this);

    QString buffer = QString("%1VHW,%2,T,%3,M,%4,N,%5,K").arg(id).arg(QString::number(course,'f',2)).arg(QString::number(course,'f',2)).arg(QString::number(velocity,'f',2)).arg(QString::number(velocity*1.852,'f',2));
    QByteArray array = buffer.toLocal8Bit();
    char* checksumBuf = array.data();
    int checksum = cs.getCheckSum(checksumBuf);

    QString nmea = QString("$%1*%2").arg(buffer).arg(checksum,0,16).toUpper();
    qDebug() <<nmea;
    udp->writeData(nmea);

    return nmea;

}
