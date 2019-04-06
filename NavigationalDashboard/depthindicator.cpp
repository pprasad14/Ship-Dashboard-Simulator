#include "depthindicator.h"
#include <QPainter>
#include <QRadialGradient>
DepthIndicator::DepthIndicator(QWidget *parent) :
    QWidget(parent)
{
}

void DepthIndicator::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    QPen pen;
    painter.translate(100,470);

    QRadialGradient qradial(QPointF(50,50),100);
    qradial.setColorAt(0,Qt::red);
    qradial.setColorAt(0.2,Qt::transparent);
    qradial.setColorAt(0.25,Qt::red);
    qradial.setColorAt(0.9,Qt::transparent);
    qradial.setColorAt(1,Qt::transparent);

    QRect rectouter(0,0,0,300); //outer curve
    painter.fillRect(rectouter,qradial);


    //pen.setColor(Qt::blue);
    pen.setWidth(100);
    painter.setPen(pen);
   painter.drawLine(0,0,0,150);
}
