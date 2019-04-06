#include "position_gyrometer.h"
#include <QTime>
#include <checksum.h>
#include <QDebug>
#include <udp_nmea.h>
Position_Gyrometer::Position_Gyrometer(QWidget *parent) :
    QMainWindow(parent)
{
}
QString Position_Gyrometer::generateNMEA(QString latitude,QString longitude,QString lat_dir,QString long_dir,QString heading_angle)
{
    CheckSum cs;
    UDP_NMEA *udp = new UDP_NMEA(this);
    qDebug() <<lat_dir;
    QString buffer = QString("GPRMC,%1%2%3.%4,%5,%6,%7,%8,173.8,%9,%10%11%12,004.2,W,").arg(QTime::currentTime().hour()).arg(QTime::currentTime().minute()).arg(QTime::currentTime().second()).arg(QTime::currentTime().msec()).arg(latitude).arg(lat_dir).arg(longitude).arg(long_dir).arg(heading_angle).arg(QDate::currentDate().day()).arg(QDate::currentDate().month()).arg(QDate::currentDate().year());
    QByteArray array = buffer.toLocal8Bit();
    char* checksumBuf = array.data();
    int checksum = cs.getCheckSum(checksumBuf);

    QString nmea = QString("$%1*%2").arg(buffer).arg(checksum,0,16).toUpper();
    qDebug() <<nmea;
    udp->writeData(nmea);

    return nmea;

}
