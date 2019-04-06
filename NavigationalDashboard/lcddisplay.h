#ifndef LCDDISPLAY_H
#define LCDDISPLAY_H

#include <QWidget>
#include <QLCDNumber>

class LCDDisplay : public QWidget
{
    Q_OBJECT
public:
    explicit LCDDisplay(QWidget *parent = 0);
    QLCDNumber *lcd;


    void setLED();
    void glowLED(int i);
    void LEDspacing(int s);
    void splitNumber(int num);

signals:

public slots:

};

#endif // LCDDISPLAY_H
