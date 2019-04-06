#ifndef WINDSPEEDRELATIVEINDICATOR_H
#define WINDSPEEDRELATIVEINDICATOR_H

#include <QWidget>
static int wind_relative_degree;
class WindSpeedRelativeIndicator : public QWidget
{
    Q_OBJECT
public:
    explicit WindSpeedRelativeIndicator(QWidget *parent = 0);
    void paintEvent(QPaintEvent *);
    void rotate_niddle(int value);
signals:

public slots:

};

#endif // WINDSPEEDRELATIVEINDICATOR_H
