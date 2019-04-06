#ifndef TAPEREPEATER_H
#define TAPEREPEATER_H

#include <QWidget>
static int value=0;
static int heading=0;
static QString sentence= "";

class TapeRepeater : public QWidget
{
    Q_OBJECT
public:
    explicit TapeRepeater(QWidget *parent = 0);
    void getHeading(int num);


    void rotate_niddle(int degree);
    void display_nmea(QString nmea);

private:
    void paintEvent(QPaintEvent *);

signals:

public slots:

};

#endif // TAPEREPEATER_H
