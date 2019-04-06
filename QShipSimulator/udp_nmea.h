#ifndef UDP_NMEA_H
#define UDP_NMEA_H

#include <QMainWindow>
#include <QUdpSocket>

class UDP_NMEA : public QMainWindow
{
    Q_OBJECT
public:
    explicit UDP_NMEA(QWidget *parent = 0);
    QUdpSocket *socket;
signals:

public slots:
    void writeData(QString sentence);

};

#endif // UDP_NMEA_H
