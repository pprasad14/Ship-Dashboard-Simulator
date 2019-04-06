#ifndef PITCHROLL_H
#define PITCHROLL_H

#include <QMainWindow>

class PitchRoll : public QMainWindow
{
    Q_OBJECT
public:
    explicit PitchRoll(QWidget *parent = 0);

signals:

public slots:
    QString generateNMEA(QString pitch_angle,QString roll_angle);


};

#endif // PITCHROLL_H
