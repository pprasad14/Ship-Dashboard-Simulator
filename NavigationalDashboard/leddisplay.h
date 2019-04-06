#ifndef LEDDISPLAY_H
#define LEDDISPLAY_H

#include <QMainWindow>

class LEDDisplay : public QMainWindow
{
    Q_OBJECT
public:
    explicit LEDDisplay(QWidget *parent = 0);
    void paintEvent(QPaintEvent *);
    void setLED();
    void glowLED(int i);
    void LEDspacing(int s);
    void splitNumber(int num);

    int segment_numb[10][7] = {{1,1,1,1,1,1,0}, //0
                               {0,1,1,0,0,0,0}, //1
                               {1,1,0,1,1,0,1}, //2
                               {1,1,1,1,0,0,1}, //3
                               {0,1,1,0,0,1,1}, //4
                               {1,0,1,1,0,1,1}, //5
                               {1,0,1,1,1,1,1}, //6
                               {1,1,1,0,0,0,0}, //7
                               {1,1,1,1,1,1,1}, //8
                               {1,1,1,1,0,1,1} //9
                              };

  int segment[7][4] =  {{900,150,950,150}, //a
                         {960,160,960,210}, //b
                         {960,230,960,280}, //c
                         {950,290,900,290}, //d
                         {890,280,890,230}, //e
                         {890,210,890,160}, //f
                         {900,220,950,220}
                        };
signals:

public slots:

};

#endif // LEDDISPLAY_H
