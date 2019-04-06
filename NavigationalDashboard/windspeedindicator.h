#ifndef WINDSPEEDINDICATOR_H
#define WINDSPEEDINDICATOR_H

#include <QWidget>
static int wind_true_degree = 0;
class WindSpeedIndicator : public QWidget
{
    Q_OBJECT
public:
    explicit WindSpeedIndicator(QWidget *parent = 0);
    void paintEvent(QPaintEvent *);
    void rotate_niddle(int value);

signals:

public slots:

};

#endif // WINDSPEEDINDICATOR_H
