#include "pitchroll.h"
#include <QTime>
#include <checksum.h>
#include <QDebug>
#include <udp_nmea.h>
PitchRoll::PitchRoll(QWidget *parent) :
    QMainWindow(parent)
{
}


QString PitchRoll::generateNMEA(QString pitch_angle, QString roll_angle)
{
    UDP_NMEA *udp = new UDP_NMEA(this);
    CheckSum cs;
    QString buffer = QString("PASHR,%1%2%3.%4,0.00,T,%5,%6,00.00,0.000,0.000,0.000,1,0").arg(QTime::currentTime().hour()).arg(QTime::currentTime().minute()).arg(QTime::currentTime().second()).arg(QTime::currentTime().msec()).arg(pitch_angle).arg(roll_angle);
    QByteArray array = buffer.toLocal8Bit();
    char* checksumBuf = array.data();
    int checksum = cs.getCheckSum(checksumBuf);

    QString nmea = QString("$%1*%2").arg(buffer).arg(checksum,0,16).toUpper();
    qDebug() <<nmea;
    udp->writeData(nmea);
    return nmea;

}
