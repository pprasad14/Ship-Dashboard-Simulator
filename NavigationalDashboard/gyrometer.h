#ifndef GYROMETER_H
#define GYROMETER_H

#include <QWidget>
static int heading_angle;
class Gyrometer : public QWidget
{
    Q_OBJECT
public:
    explicit Gyrometer(QWidget *parent = 0);
    void paintEvent(QPaintEvent *);
    void rotate_angle(int degree);
signals:

public slots:

};

#endif // GYROMETER_H
