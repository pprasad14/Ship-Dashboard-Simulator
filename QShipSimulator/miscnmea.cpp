#include "miscnmea.h"
#include <QTime>
#include <checksum.h>
#include <QDebug>
#include <udp_nmea.h>
#include<QDate>
MiscNmea::MiscNmea(QObject *parent) : QObject(parent)
{

}

MiscNmea::~MiscNmea()
{

}

QString MiscNmea::generateMeanTempNMEA(QString temp)
{
    UDP_NMEA *udp = new UDP_NMEA();
    CheckSum cs;
    QString buffer = QString("GPMTW,%1,C").arg(temp);
    QByteArray array = buffer.toLocal8Bit();
    char* checksumBuf = array.data();
    int checksum = cs.getCheckSum(checksumBuf);

    QString nmea = QString("$%1*%2").arg(buffer).arg(checksum,0,16).toUpper();
    qDebug() <<nmea;
    udp->writeData(nmea);
    return nmea;
}

QString MiscNmea::generateRudderAngleNMEA(QString angle)
{
    UDP_NMEA *udp = new UDP_NMEA();
    CheckSum cs;
    QString buffer = QString("GPRSA,%1,A,66,A").arg(angle);
    QByteArray array = buffer.toLocal8Bit();
    char* checksumBuf = array.data();
    int checksum = cs.getCheckSum(checksumBuf);

    QString nmea = QString("$%1*%2").arg(buffer).arg(checksum,0,16).toUpper();
    qDebug() <<nmea;
    udp->writeData(nmea);
    return nmea;
}

QString MiscNmea::generateAltitudeNMEA(QString altitude)
{
    UDP_NMEA *udp = new UDP_NMEA();
    CheckSum cs;
    QString buffer = QString("$PGRMZ,%1,f,3").arg(altitude);
    QByteArray array = buffer.toLocal8Bit();
    char* checksumBuf = array.data();
    int checksum = cs.getCheckSum(checksumBuf);

    QString nmea = QString("$%1*%2").arg(buffer).arg(checksum,0,16).toUpper();
    qDebug() <<nmea;
    udp->writeData(nmea);
    return nmea;
}

QString MiscNmea::generateBearingOriginToDestinationNMEA(QString bearing)
{
    UDP_NMEA *udp = new UDP_NMEA();
    CheckSum cs;
    QString buffer = QString("GPBOD,%1,T,23.0,M,45,75").arg(bearing);
    QByteArray array = buffer.toLocal8Bit();
    char* checksumBuf = array.data();
    int checksum = cs.getCheckSum(checksumBuf);

    QString nmea = QString("$%1*%2").arg(buffer).arg(checksum,0,16).toUpper();
    qDebug() <<nmea;
    udp->writeData(nmea);
    return nmea;
}

QString MiscNmea::generateBearingAndDistanceToNMEA(QString distance, QString bearing)
{
    UDP_NMEA *udp = new UDP_NMEA();
    CheckSum cs;
    QString buffer = QString("GPBWC,%1%2%3,4917.24,N,12309.57,W,%4,T,031.6,M,%5,N,004*29").arg(QTime::currentTime().hour()).arg(QTime::currentTime().minute()).arg(QTime::currentTime().second()).arg(bearing).arg(distance);
    QByteArray array = buffer.toLocal8Bit();
    char* checksumBuf = array.data();
    int checksum = cs.getCheckSum(checksumBuf);

    QString nmea = QString("$%1*%2").arg(buffer).arg(checksum,0,16).toUpper();
    qDebug() <<nmea;
    udp->writeData(nmea);
    return nmea;
}

QString MiscNmea::generateDateTimeNMEA(QString temp)
{

    UDP_NMEA *udp = new UDP_NMEA();
    CheckSum cs;
    QDate date = QDate::currentDate();
    QTime time = QTime::currentTime();
    QString buffer = QString("$GPZDA,hhmmss.ss,%1,%2,%3,12,%4,%5,%6,").arg(date.year()).arg(date.month()).arg(date.day()).arg(time.hour()).arg(time.minute()).arg(time.second());
    QByteArray array = buffer.toLocal8Bit();
    char* checksumBuf = array.data();
    int checksum = cs.getCheckSum(checksumBuf);

    QString nmea = QString("$%1*%2").arg(buffer).arg(checksum,0,16).toUpper();
    qDebug() <<nmea;
    udp->writeData(nmea);
    return nmea;

}

QString MiscNmea::generateWayPointLocationNMEA(QString lat,QString longt)
{
    UDP_NMEA *udp = new UDP_NMEA();
    CheckSum cs;
    QString buffer = QString("GPWPL,%1,N,%2,W,15").arg(lat).arg(longt);
    QByteArray array = buffer.toLocal8Bit();
    char* checksumBuf = array.data();
    int checksum = cs.getCheckSum(checksumBuf);

    QString nmea = QString("$%1*%2").arg(buffer).arg(checksum,0,16).toUpper();
    qDebug() <<nmea;
    udp->writeData(nmea);
    return nmea;
}
