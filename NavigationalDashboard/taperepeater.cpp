#include "taperepeater.h"
#include <QPainter>
#include <QLinearGradient>
#include <QGraphicsView>
#include <QPoint>
#include <math.h>
#include <QTime>
#include <QTimer>
#include <QDebug>

TapeRepeater::TapeRepeater(QWidget *parent) :
    QWidget(parent)
{
    QTimer *timer = new QTimer(this);

    connect(timer, SIGNAL(timeout()), this, SLOT(update()));
    timer->start(50);

}


void TapeRepeater::paintEvent(QPaintEvent *)
{   QPainter painter(this);
    QPen pen;
    painter.translate(50,60);


    //tape reapeater
    //    =========================================================================================
    pen.setWidth(3);
    pen.setColor(Qt::white);
    painter.setPen(pen);
   // painter.resetTransform();
    QRect brect(180,470,910,100);
    QRect srect(brect.center().x()-50,brect.bottom(),100,60);
    painter.drawRoundedRect(brect,30,30);
    painter.drawRoundedRect(srect,5,5);
    pen.setColor(Qt::black);
    pen.setWidth(6);
    painter.setPen(pen);
    painter.drawLine(590,620,680,620);

    pen.setColor(Qt::white);
    pen.setWidth(2);
    pen.setCapStyle(Qt::RoundCap);
    painter.setPen(pen);


    //    QRect grad_rect(brect.bottomLeft().x(),brect.bottomLeft().y(),brect.bottomRight().x()-200,brect.bottomRight().y()+5);

    //        QLinearGradient gradient(grad_rect.bottomLeft(),grad_rect.bottomRight());
    //        gradient.setColorAt(0,	Qt::blue);
    //        gradient.setColorAt(0.2,	Qt::green);
    //        gradient.setColorAt(0.4,	Qt::red);
    //        gradient.setColorAt(0.6,	Qt::yellow);
    //        gradient.setColorAt(1,	Qt::cyan);
    //        painter.fillRect(grad_rect,gradient);






    QFont font;

    font.setFamily("monospace");
    font.setPointSize(15);
    painter.setFont(font);

    //up scale right
    int i=brect.center().x();
    int count=0;
    while(i<1070){
        if(count%5==0)
        { painter.drawLine(i,470,i,500);
        }
        else
        {
            painter.drawLine(i,470,i,490);


        }

        i=i+10;
        count++;
    }
    //upscale left
    i=brect.center().x();
    count=0;
    while(i>200){
        if(count%5==0)
        { painter.drawLine(i,470,i,500);
        }
        else
        {
            painter.drawLine(i,470,i,490);
        }

        i=i-10;
        count++;
    }

    //down scale right
    i=brect.center().x();
    count=0;
    while(i<1070){
        if(count%5==0)
        { painter.drawLine(i,530,i,570);
        }
        else
        {
            painter.drawLine(i,550,i,570);
        }

        i=i+10;
        count++;
    }
    //downscale left
    i=brect.center().x();
    count=0;
    while(i>200){
        if(count%5==0)
        { painter.drawLine(i,530,i,570);
        }
        else
        {
            painter.drawLine(i,550,i,570);
        }

        i=i-10;
        count++;
    }



    //display reading
    //upscale reading left
    i=brect.center().x();
    count=0;
    int numb =heading;
    while(i>200){
        if(count%5==0)
        { painter.drawText(i-10,522,QString("%1").arg(numb));
        }
        numb = numb-2;
        i=i-10;
        count++;
    }

    //up scale reading right
    i=brect.center().x();
    numb =heading+10;
    count=0;
    while(i<1000){
        if(count%5==0)
        {
            painter.drawText(i+35,522,QString("%1").arg(numb));
        }
        numb = numb+2;

        i=i+10;
        count++;
    }

    painter.drawText(srect.center().x()-10,srect.center().y()+25,QString("%1").arg(heading));

    static const QPointF points[3] = {
        QPointF(brect.center().x(),brect.bottom()),
        QPointF(brect.center().x()-20, brect.center().x()-30),
        QPointF(brect.center().x()+20, brect.center().x()-30)
    };

    painter.drawConvexPolygon(points, 3);

    painter.drawText(700,400,sentence);

}





void TapeRepeater::getHeading(int num)
{
    heading = num;
}

void TapeRepeater::rotate_niddle(int degree)
{
    value = degree;
    qDebug() <<"value is"<<value;
}

void TapeRepeater::display_nmea(QString nmea)
{
    sentence = QString("%1").arg(nmea);
}

