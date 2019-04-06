#ifndef POSITION_GYROMETER_H
#define POSITION_GYROMETER_H

#include <QMainWindow>

class Position_Gyrometer : public QMainWindow
{
    Q_OBJECT
public:
    explicit Position_Gyrometer(QWidget *parent = 0);

signals:

public slots:
    QString generateNMEA(QString latitude,QString longitude,QString lat_dir,QString long_dir,QString heading_angle);

};

#endif // POSITION_GYROMETER_H
