#ifndef MISCNMEA_H
#define MISCNMEA_H

#include <QObject>

class MiscNmea : public QObject
{
    Q_OBJECT
public:
    explicit MiscNmea(QObject *parent = 0);
    ~MiscNmea();

signals:

public slots:
public slots:
    QString generateMeanTempNMEA(QString temp);
    QString generateRudderAngleNMEA(QString angle);
    QString generateAltitudeNMEA(QString altitude);
    QString generateBearingOriginToDestinationNMEA(QString bearing);
    QString generateBearingAndDistanceToNMEA(QString distance,QString bearing);
    QString generateDateTimeNMEA(QString temp);
    QString generateWayPointLocationNMEA(QString lat, QString longt);

};

#endif // MISCNMEA_H
