#ifndef WINDSPEEDINDICATOR_H
#define WINDSPEEDINDICATOR_H

#include <QMainWindow>

class WindSpeedIndicator : public QMainWindow
{
    Q_OBJECT
public:
    explicit WindSpeedIndicator(QWidget *parent = 0);

signals:

public slots:
    QString generateNMEA(double speed, double velocity);

};

#endif // WINDSPEEDINDICATOR_H
