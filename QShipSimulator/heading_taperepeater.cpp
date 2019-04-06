#include "heading_taperepeater.h"
#include <QDebug>
#include <checksum.h>
#include <QPushButton>
#include <udp_nmea.h>
Heading_TapeRepeater::Heading_TapeRepeater(QWidget *parent) :
    QMainWindow(parent)
{

}

QString Heading_TapeRepeater::generateNMEA(QString id,double course)
{   UDP_NMEA *udp = new UDP_NMEA(this);
    CheckSum cs;
    QString buffer = QString("%1HDT,%2,T").arg(id).arg(QString::number(course,'f',2));
    QByteArray array = buffer.toLocal8Bit();
    char* checksumBuf = array.data();
    int checksum = cs.getCheckSum(checksumBuf);

    QString nmea = QString("$%1*%2").arg(buffer).arg(checksum,0,16).toUpper();
    qDebug() <<nmea;
    udp->writeData(nmea);
    return nmea;

}


