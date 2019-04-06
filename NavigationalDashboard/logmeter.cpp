#include "logmeter.h"
#include <QPainter>
#include <QPainter>
#include <QRadialGradient>
#include <QGraphicsView>
#include <QPoint>
#include <math.h>
#include <QTime>
#include <QTimer>
#include <QDebug>

Logmeter::Logmeter(QWidget *parent) :
    QWidget(parent)
{


    degree = 0;
    QTimer *timer = new QTimer(this);

    connect(timer, SIGNAL(timeout()), this, SLOT(update()));
    timer->start(1000);

}

void Logmeter::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
        QPen pen;
        painter.translate(-50,-50);
       QRadialGradient qradial(QPointF(250,250),120);


        qradial.setColorAt(0,Qt::red);
        qradial.setColorAt(0.2,Qt::transparent);
        qradial.setColorAt(0.25,Qt::red);
        qradial.setColorAt(0.9,Qt::transparent);
        qradial.setColorAt(1,Qt::transparent);
        QRect rectouter(100,100,300,300); //outer curve
        painter.fillRect(rectouter,qradial);


        QRect innerrect(110,110,280,280);
        QPoint apoint;
        apoint.setX(40);
        apoint.setY(100);


        QLinearGradient lineargradient;
        lineargradient.setStart(100,400);
        lineargradient.setFinalStop(400,400);
        lineargradient.setColorAt(0.1,Qt::green);
        lineargradient.setColorAt(0.2,Qt::yellow);
        lineargradient.setColorAt(0.6,Qt::yellow);
        lineargradient.setColorAt(0.9,Qt::red);
        QBrush brush(lineargradient);
        pen.setBrush(brush);
        pen.setWidth(20);
        pen.setCapStyle(Qt::RoundCap);
        painter.setRenderHint(QPainter::Antialiasing,true);
        painter.setPen(pen);

        painter.drawArc(rectouter,315*16,270*16);//outer arc

        pen.setWidth(3);
        pen.setColor(Qt::white);
        pen.setStyle(Qt::SolidLine);
        painter.setPen(pen);
        painter.save();



        painter.drawArc(innerrect,315*16,270*16);//circle
      //  painter.drawArc(218,218,65,65,0,360*16);//inner dial arc
        pen.setWidth(2);
        pen.setCapStyle(Qt::RoundCap);
        pen.setColor(QColor(255,255,241));
        painter.setPen(pen);
        painter.drawArc(245,245,10,10,0,16*360);//niddle circle

    //    drawing limits
        painter.translate(250,250);
        for (int i = 0; i <= 45; ++i)
        {
           if(i%5!= 0)
            {painter.drawLine(98, 98, 90, 90);
             }
           else
           {
               painter.drawLine(110,110,85,85);
              // painter.drawText(125,125,QString::number(i/5*5));

           }
            painter.rotate(-6);
    }


        for (int i = 0; i <= 45; ++i)
        {
           if(i%5== 0)
           painter.drawText(100,155,QString::number(i/5*5));
            painter.rotate(6);
        }
        painter.restore();
        painter.resetTransform();
        painter.translate(-50,-50);

        painter.translate(250,250);
        painter.rotate(degree);
        painter.drawLine(0,0,-80,80);
}

void Logmeter::rotate_niddle(int value)
{
    degree = value;
    qDebug() <<"value is"<<degree;
}

int Logmeter::alarm()
{
    return 1;
}
