#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "taperepeater.h"
#include "logmeter.h"
#include "gyrometer.h"
#include "lcddisplay.h"
#include "pitchmeter.h"
#include "rollmeter.h"
#include "windspeedindicator.h"
#include "windspeedrelativeindicator.h"
static QString sentence_nmea = "";
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    TapeRepeater *repeater;
    Logmeter *logmeter;
    Gyrometer *gyro;
    LCDDisplay *lcd;
    Pitchmeter *pitch;
    Rollmeter *roll;
    WindSpeedIndicator *Twind;
    WindSpeedRelativeIndicator *Rwind;
public slots:


private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
