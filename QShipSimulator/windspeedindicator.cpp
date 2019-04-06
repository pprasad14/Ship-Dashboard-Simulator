#include "windspeedindicator.h"
#include <udp_nmea.h>
#include <checksum.h>
#include <QDebug>
#include <QString>

WindSpeedIndicator::WindSpeedIndicator(QWidget *parent) :
    QMainWindow(parent)
{
}

QString WindSpeedIndicator::generateNMEA(double speed, double velocity)
{
    CheckSum cs;
    UDP_NMEA *udp = new UDP_NMEA(this);
    qDebug() <<velocity;
    QString buffer = QString("WIMWV,%1,R,%2,N,A").arg(QString::number(speed,'f',2)).arg(QString::number(velocity,'f',2));
    QByteArray array = buffer.toLocal8Bit();
    char* checksumBuf = array.data();
    int checksum = cs.getCheckSum(checksumBuf);

    QString nmea = QString("$%1*%2").arg(buffer).arg(checksum,0,16).toUpper();
    qDebug() <<nmea;
    udp->writeData(nmea);

    return nmea;

}
