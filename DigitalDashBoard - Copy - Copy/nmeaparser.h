#ifndef NMEAPARSER_H
#define NMEAPARSER_H

#include <QObject>
#include <qdatetime.h>

class NMEAParser : public QObject
{
    Q_OBJECT
public:
    explicit NMEAParser(QObject *parent = 0);
    ~NMEAParser();

signals:
void sigLogData(int value);
void sigGyroData(int value,QString,QString);
void sigWindSpeedData(int value);
void sigWindDirectionData(int value);
void sigPitchData(int value);
void sigRollData(int value);

void sigWaterDepthData(QString value);
void sigWaterTempData(QString value);
void sigRudderAnglepData(QString value);
void sigAltitudeData(QString value);
void sigBearingOrgtoDestinationData(QString value);
void sigBearingtoWayPointData(QString bearing,QString range);
void sigDateAndTimeData(QString value);
void sigWayPointLocationData(QString lat,QString longt);




public slots:
void slotParseNmea(QString nmeaSentence);
};

#endif // NMEAPARSER_H
