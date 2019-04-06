#include "nmeaparser.h"
#include<QRegExp>
#include<QDebug>
NMEAParser::NMEAParser(QObject *parent) : QObject(parent)
{

}

NMEAParser::~NMEAParser()
{

}

void NMEAParser::slotParseNmea(QString sentence)
{
    qDebug() <<"string in parsernmea:"<<sentence;
    QRegExp vhwExp("\\VHW",Qt::CaseInsensitive); //velocity
    QRegExp hdtExp("\\HDT",Qt::CaseInsensitive); //heading
    QRegExp gprmcExp("\\GPRMC",Qt::CaseInsensitive); //gps
    QRegExp pitchrollExp("\\PASHR",Qt::CaseInsensitive); //pitchroll
    QRegExp windExp("\\$WIMWV",Qt::CaseInsensitive); //windSpeed &Direction



    QRegExp waterDepthExp               ("\\DPT",Qt::CaseInsensitive); //windSpeed &Direction
    QRegExp waterTempExp                ("\\MTW",Qt::CaseInsensitive); //waterTemp
    QRegExp rudderAnglepExp             ("\\RSA",Qt::CaseInsensitive); //rudder angle
    QRegExp altitudeExp                 ("\\PGRMZ",Qt::CaseInsensitive); //rudder angle
    QRegExp bearingOrgtoDestinationExp  ("\\GPBOD",Qt::CaseInsensitive); //rudder angle
    QRegExp bearingtoWayPointExp        ("\\GPBWC",Qt::CaseInsensitive); //bearing and distance to way point
    QRegExp dateAndTimeExp              ("\\GPZDA",Qt::CaseInsensitive); //bearing and distance to way point
    QRegExp wayPointLocationExp         ("\\GPWPL",Qt::CaseInsensitive); //bearing and distance to way point




    //    QRegExp windExp("\\MWV",Qt::CaseInsensitive); //windSpeed &Direction
//    QRegExp windExp("\\MWV",Qt::CaseInsensitive); //windSpeed &Direction
//    QRegExp windExp("\\MWV",Qt::CaseInsensitive); //windSpeed &Direction
//    QRegExp windExp("\\MWV",Qt::CaseInsensitive); //windSpeed &Direction

    QStringList list = sentence.split(",");
    qDebug()<<"list"<<list[0];
    //qDebug() <<list[5];
    if(list[0].contains(vhwExp))
    {

        QString str = QString("%1").arg(list[5]);
        sigLogData(str.toDouble());

    }
    else if(list[0].contains(hdtExp))
    {
        QString str = QString("%1").arg(list[1]);

        int num = str.toDouble();
//        sigGyroData(num);


    }
    else if(list[0].contains(gprmcExp))
    {
        QString str = QString("%1").arg(list[7]);

//        int num = str.toDouble();
        sigGyroData(str.toDouble(),QString("%1 %2").arg(list[2]).arg(list[3]),QString("%1 %2").arg(list[4]).arg(list[5]));
        //gyro->rotate_angle(num);

    }
    else if(list[0].contains(pitchrollExp))
    {

        QString pitch_str = QString("%1").arg(list[4]);
        QString roll_str = QString("%1").arg(list[5]);

        int pitch_angle = pitch_str.toDouble();
        int roll_angle = roll_str.toDouble();

        //pitch->rotate_pitch(pitch_angle);
        //roll->rotate_roll(roll_angle);
         sigPitchData(pitch_angle);
         sigRollData(roll_angle);
        qDebug() <<"pitchRoll string"<<pitch_angle;
        qDebug() <<"pitchRoll string"<<roll_angle;

    }
    else if(list[0].contains(windExp))
    {

        QString wind_direction = QString("%1").arg(list[1]);
        QString wind_speed = QString("%1").arg(list[3]);

        int wind_angle = wind_direction.toDouble();
        int wind_speed1 = wind_speed.toDouble();

        //pitch->rotate_pitch(pitch_angle);
        //roll->rotate_roll(roll_angle);
         sigWindDirectionData(wind_angle);
         sigWindSpeedData(wind_speed1);
        qDebug() <<"Wind Direction string"<<wind_angle;
        qDebug() <<"Wind speed string"<<wind_speed;

    }
    else if(list[0].contains(waterTempExp))
    {
        sigWaterTempData(list[1]);
    }
    else if(list[0].contains(rudderAnglepExp))
    {
         sigRudderAnglepData(list[1]);
    }
    else if(list[0].contains(altitudeExp))
    {
         sigAltitudeData(list[1]);
    }
    else if(list[0].contains(bearingOrgtoDestinationExp))
    {
         sigBearingOrgtoDestinationData(list[1]);
    }
    else if(list[0].contains(bearingtoWayPointExp))
    {
         sigBearingtoWayPointData(list[6],list[10]);

    }
    else if(list[0].contains(dateAndTimeExp))
    {
        QString dateTime = QString("%1/%2/%3-%4:%5:%6").arg(list[4]).arg(list[3]).arg(list[2]).arg(list[6]).arg(list[7]).arg(list[8]);
         sigDateAndTimeData(dateTime);
    }
    else if(list[0].contains(wayPointLocationExp))
    {
        sigWayPointLocationData(list[1],list[3]);
    }


}

