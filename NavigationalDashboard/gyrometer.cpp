#include "gyrometer.h"
#include <QPainter>

Gyrometer::Gyrometer(QWidget *parent) :
    QWidget(parent)
{
}

void Gyrometer::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    QPen pen;
    painter.translate(400,-60);
    painter.setPen(pen);
    painter.setRenderHint(QPainter::Antialiasing,true);
    QRadialGradient qradial(QPointF(250,250),160);
    qradial.setColorAt(0,QColor(63,14,14));
    qradial.setColorAt(0.2,Qt::transparent);
    qradial.setColorAt(0.4,Qt::transparent);
    qradial.setColorAt(0.9,QColor(94,21,21));
    qradial.setColorAt(1,Qt::transparent);
    QRect rectouter(100,100,300,300); //outer curve
    painter.fillRect(rectouter,qradial);

    pen.setWidth(10);
    pen.setColor(QColor(255,215,18));
    painter.setPen(pen);
    painter.drawArc(90,90,320,320,0,360*16);
    pen.setWidth(1);
    painter.setPen(pen);
    painter.drawArc(rectouter,0,360*16);

    pen.setColor(Qt::white);
    painter.setPen(pen);
    painter.drawArc(rectouter.center().x()-80,rectouter.center().x()-80,160,160,0,360*16);

    painter.drawArc(rectouter.center().x()-100,rectouter.center().x()-100,200,200,0,360*16);

    pen.setWidth(5);
    painter.setPen(pen);
    painter.drawArc(rectouter.center().x()-75,rectouter.center().x()-75,150,150,0,360*16);

    painter.translate(rectouter.center());
    for (int i = 0; i <= 90; ++i)
    {

        painter.drawLine(58,58,68,68);
        // painter.drawText(125,125,QString::number(i/5*5));
        painter.rotate(-6);
    }

    for (int i = 0; i <= 90; ++i)
    {
        if(i%5==0){
            painter.drawLine(-18,150,-18,155);
            // painter.drawText(125,125,QString::number(i/5*5));
        }
        painter.rotate(-6);
    }


    pen.setWidth(2);
    painter.setPen(pen);
    painter.resetTransform();
    painter.translate(400,-60);
    //painter.drawPolygon(points,3);
    //painter.fillPath(points,Qt::red);
    QPainterPath path;
    path.moveTo(260,250);
    path.lineTo(250,360);
    path.lineTo(240,250);
    path.lineTo(250,140);
    path.lineTo(260,250);
    painter.drawPath(path);
    painter.fillPath(path,Qt::white);

    QPainterPath path2;
    path2.moveTo(250,240);
    path2.lineTo(360,250);
    path2.lineTo(250,260);
    path2.lineTo(140,250);

    painter.drawPath(path2);
    painter.fillPath(path2,Qt::white);

    path2.moveTo(250,260);
    path2.lineTo(300,300);
    path2.lineTo(260,250);
    path2.lineTo(305,200);

    path2.lineTo(250,240);
    path2.lineTo(198,198);
    path2.lineTo(240,250);

    path2.lineTo(198,302);
    path2.lineTo(250,260);




    painter.drawPath(path2);
    painter.fillPath(path2,Qt::white);



    painter.resetTransform();
    painter.translate(400,-60);
    pen.setWidth(5);
    pen.setColor(Qt::white);
    pen.setCapStyle(Qt::RoundCap);
    painter.setPen(pen);
    QFont font;

    font.setFamily("monospace");
    font.setPointSize(15);
    painter.setFont(font);

    painter.translate(rectouter.center());
    painter.drawText(0,-115,"N");
    painter.drawText(115,0,"E");
    painter.drawText(0,130,"S");
    painter.drawText(-130,0,"W");
    pen.setColor(Qt::red);
    painter.setPen(pen);
    painter.drawArc(-10,-10,20,20,0,360*16);


    painter.rotate(heading_angle);
    pen.setWidth(3);
    pen.setColor(Qt::red);
    painter.setPen(pen);
    painter.drawLine(0,0,0,-120);
    pen.setColor(Qt::blue);
    painter.setPen(pen);
    painter.drawLine(0,0,0,60);

}

void Gyrometer::rotate_angle(int degree)
{
    heading_angle = degree;
}
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                
