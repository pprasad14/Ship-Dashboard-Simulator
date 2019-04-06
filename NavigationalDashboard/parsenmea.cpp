#include "parsenmea.h"
#include "logmeter.h"
#include "pitchmeter.h"
#include <taperepeater.h>
#include <QString>
#include <QTime>
#include <mainwindow.h>
#include <QTimer>
ParseNMEA::ParseNMEA(QWidget *parent) :
    QMainWindow(parent)
{   log = new Logmeter(this);
    tape = new TapeRepeater(this);
    pitch =  new Pitchmeter(this);
    gyro = new Gyrometer(this);
    roll = new Rollmeter(this);
    socket = new QUdpSocket(this);
    socket->bind(45454,QUdpSocket::ShareAddress);
    connect(socket,SIGNAL(readyRead()),this,SLOT(readyRead()));

}

void ParseNMEA::ParserNmea(QString sentence)
{       qDebug() <<"string in parsernmea:"<<sentence;
        QTimer *timer = new QTimer(this);
            QRegExp vhwExp("\\VHW",Qt::CaseInsensitive); //velocity
            QRegExp hdtExp("\\HDT",Qt::CaseInsensitive); //heading
                QRegExp gprmcExp("\\GPRMC",Qt::CaseInsensitive); //gps
                    QRegExp pitchrollExp("\\PASHR",Qt::CaseInsensitive); //pitchroll

                        QStringList list = sentence.split(",");

                            //qDebug() <<list[5];
                                if(list[0].contains(vhwExp))
                                {      //    qDebug() <<"velocity string";
                                    QString str = QString("%1").arg(list[5]);
                                    int num = str.toDouble();
                                    log->rotate_niddle(num*6);

                                }
                                else if(list[0].contains(hdtExp))
                                {
                                    QString str = QString("%1").arg(list[1]);

                                    int num = str.toDouble();
                                       qDebug() <<"heading string";
                                    tape->getHeading(num);


                                }
                                else if(list[0].contains(gprmcExp))
                                {
                                    QString str = QString("%1").arg(list[7]);

                                    int num = str.toDouble();
                                    gyro->rotate_angle(num);

                                }
                                else if(list[0].contains(pitchrollExp))
                                {

                                    QString pitch_str = QString("%1").arg(list[4]);
                                    QString roll_str = QString("%1").arg(list[5]);

                                    int pitch_angle = pitch_str.toDouble();
                                    int roll_angle = roll_str.toDouble();

                                    pitch->rotate_pitch(pitch_angle);
                                    roll->rotate_roll(roll_angle);

                                    qDebug() <<"pitchRoll string"<<pitch_angle;
                                    qDebug() <<"pitchRoll string"<<roll_angle;

                                }

}



void ParseNMEA::readyRead()
{   //TapeRepeater *tape = new TapeRepeater(this);
    QByteArray Buffer;
    Buffer.resize(socket->pendingDatagramSize());
    QHostAddress sender;
    quint16 senderPort;
    socket->readDatagram(Buffer.data(),Buffer.size(),&sender,&senderPort);
    qDebug() << "message from:" <<Buffer;
    //int data = Buffer.toInt();
    //tape->rotate_niddle(data);
    ParserNmea(Buffer);
}

void ParseNMEA::alarm()
{
    qDebug() <<"alarm";
}
