#include "rollmeter.h"
#include <QPainter>
#include <QDebug>
Rollmeter::Rollmeter(QWidget *parent) :
    QWidget(parent)
{
}

void Rollmeter::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    QPen pen;
    painter.translate(260,-20);

    pen.setColor(QColor(248,128,23));
    pen.setWidth(2);
    painter.setPen(pen);
    painter.setRenderHint(QPainter::Antialiasing,true);
    QRadialGradient qradial(QPointF(250,150),100);


    qradial.setColorAt(0,QColor(130,202,250));
    qradial.setColorAt(0.9,Qt::transparent);
    qradial.setColorAt(1,Qt::transparent);
    QRect rectouter(130,10,250,250); //outer curve
    painter.fillRect(rectouter,qradial);
    QRect rect_boundary(rectouter.topLeft().x()+25,rectouter.topLeft().y()+40,200,200);
    painter.drawArc(rect_boundary,0,360*16);
    pen.setWidth(8);
    pen.setColor(QColor(248,128,23));
    painter.setPen(pen);
    painter.drawArc(rect_boundary.topLeft().x()-10,rect_boundary.topLeft().y()-10,220,220,0,360*16);
    pen.setWidth(1);
    pen.setColor(QColor(248,128,23));
    painter.setPen(pen);
    painter.drawLine(rect_boundary.center().x()-100,rect_boundary.center().y(),rect_boundary.center().x()+100,rect_boundary.center().y());

    pen.setWidth(3);
    pen.setColor(QColor(248,128,23));
    painter.setPen(pen);
    painter.translate(rect_boundary.center().x(),rect_boundary.center().y());
    for (int i = 0; i <= 90; ++i)
    {
        if(i%5!= 0)
        {
            painter.drawLine(100, 0, 90, 0);
        }
        else
        {
            painter.drawLine(100,0,80,0);
            // painter.drawText(125,125,QString::number(i/5*5));

        }
        painter.rotate(-6);
    }

    pen.setColor(Qt::white);
    pen.setWidth(2);
    painter.setPen(pen);

    painter.resetTransform();
    painter.translate(260,-20);
    painter.translate(250,150);
    painter.drawText(55,-35,"30");
    painter.drawText(27,-55,"60");
    painter.drawText(0,-65,"90");
    painter.drawText(-55,-35,"30");
    painter.drawText(-27,-55,"60");

    painter.drawText(-55,35,"30");
    painter.drawText(-27,55,"60");
    painter.drawText(0,65,"90");
    painter.drawText(55,35,"30");
    painter.drawText(27,55,"60");
    painter.resetTransform();
    painter.translate(260,-20);
    static const QPointF points[4] = {
        QPointF(-60,-20 ),
        QPointF(-30,20),
        QPointF(10,20),
        QPointF(60,-20)

    };

    painter.resetTransform();
    painter.translate(260,-20);
    painter.translate(250,150);
    painter.rotate(-roll_degree);
    painter.drawPolygon(points, 4);

}
void Rollmeter::rotate_roll(int value)
{
    roll_degree = value;
    qDebug() <<"value is"<<roll_degree;
}
