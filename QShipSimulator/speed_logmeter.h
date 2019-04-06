#ifndef SPEED_LOGMETER_H
#define SPEED_LOGMETER_H

#include <QMainWindow>

class Speed_Logmeter : public QMainWindow
{
    Q_OBJECT
public:
    explicit Speed_Logmeter(QWidget *parent = 0);

signals:

public slots:
    QString generateNMEA(QString id,double course,double velocity);

};

#endif // SPEED_LOGMETER_H
