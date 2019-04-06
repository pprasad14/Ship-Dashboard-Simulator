#ifndef PARSENMEA_H
#define PARSENMEA_H

#include <QMainWindow>
#include <QUdpSocket>
#include <logmeter.h>
#include <taperepeater.h>
#include <pitchmeter.h>
#include <gyrometer.h>
#include <rollmeter.h>
class ParseNMEA : public QMainWindow
{
    Q_OBJECT
public:
    explicit ParseNMEA(QWidget *parent = 0);
    QUdpSocket *socket;
    //    int data =0;
    void ParserNmea(QString sentence);
    Logmeter *log;
    TapeRepeater *tape;
    Pitchmeter *pitch;
    Gyrometer *gyro;
    Rollmeter *roll;
signals:

public slots:
    void readyRead();
    void alarm();
};

#endif // PARSENMEA_H
