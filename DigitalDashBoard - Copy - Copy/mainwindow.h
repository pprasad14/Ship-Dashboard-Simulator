#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <Dial/qcgaugewidget.h>
#include<QUdpSocket>
#include<nmeaparser.h>
#include<QMediaPlayer>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
QcGaugeWidget *createLogMeter();
QcGaugeWidget *createGyroMeter();
QcGaugeWidget *createWindSpeedMeter();
QcGaugeWidget *createWindDirectionMeter();
QWidget *createDepthIndicator();
QcGaugeWidget *createPitchMeter();
QcGaugeWidget *createRollMeter();
QcGaugeWidget *createTrottle();
QcGaugeWidget *createFuel1Indicator();
QcGaugeWidget *createFuel2Indicator();
QcGaugeWidget *createFuel3Indicator();
QcGaugeWidget *createFuel4Indicator();

QcGaugeWidget *createEngine1Meter();
QcGaugeWidget *createEngine2Meter();

QUdpSocket *udpSocket;
NMEAParser nmeaParser;
private:
QMediaPlayer *alarm;
QcNeedleItem *logMeterNiddle;
QcNeedleItem *gyroNiddle;
QcNeedleItem *pitchNiddle;
QcNeedleItem *rollNiddle;
QcNeedleItem *windSpeedNiddle;
QcNeedleItem *windDirectionNiddle;

QcAttitudeMeter *mAttMeter;
QcBackgroundItem *changeBackgroundPitchParameter;


QcBackgroundItem *changeBackgroundParameter;
//QcBackgroundItem *changeBackgroundPitchParameter;
QcBackgroundItem *changeBackgroundRollParameter;
QcBackgroundItem *changeBackgroundWindSpeedParameter;
void SetupUi();

public slots:
void readyRead();
void slotGyroData(int value, QString lat, QString lon);
void slotPitchData(int value);
void slotLogData(int value);
void slotRollData(int value);
void slotWindSpeedData(int value);
void slotWindDirectionData(int value);


void slotWaterTempData(QString value);
void slotOutsideTempData(QString value);
void slotRudderAngleData(QString value);
void slotWayPointLocationData(QString lat,QString longt);
void slotWayPointRangeBearing(QString bearing,QString range);
void slotAltitudeData(QString altitude);
void slotOutsideHumidityData(QString value);
void slotWaterDepthData(QString value);
void slotRateOfTempData(QString value);
void slotTransitPosition(QString value);
void slotDateAndTime(QString value);
void slotDestinationBearing(QString value);
private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
