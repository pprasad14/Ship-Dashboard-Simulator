#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QTimer>
#include<QDateTime>
#include <QLabel>
#include <QScrollBar>
#include<QMediaPlayer>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
   alarm=new QMediaPlayer();
   alarm->setMedia(QUrl("qrc:/alarm/alarm.mp3"));
    ui->setupUi(this);
    SetupUi();
    udpSocket = new QUdpSocket(this);
    udpSocket->open(QUdpSocket::ReadWrite);
    int i = udpSocket->bind(45454,QUdpSocket::ShareAddress | QUdpSocket::ReuseAddressHint);

    qDebug() << "UDP Socket:"<<i ;
    connect(udpSocket,SIGNAL(readyRead()),this,SLOT(readyRead()));
    connect(&nmeaParser,SIGNAL(sigLogData(int)),this,SLOT(slotLogData(int)));
    connect(&nmeaParser,SIGNAL(sigGyroData(int,QString,QString)),this,SLOT(slotGyroData(int,QString,QString)));
    connect(&nmeaParser,SIGNAL(sigPitchData(int)),this,SLOT(slotPitchData(int)));
    connect(&nmeaParser,SIGNAL(sigRollData(int)),this,SLOT(slotRollData(int)));
    connect(&nmeaParser,SIGNAL(sigWindSpeedData(int)),this,SLOT(slotWindSpeedData(int)));
    connect(&nmeaParser,SIGNAL(sigWindDirectionData(int)),this,SLOT(slotWindDirectionData(int)));

    connect(&nmeaParser,SIGNAL(sigWaterTempData(QString)),this,SLOT(slotWaterTempData(QString)));
    connect(&nmeaParser,SIGNAL(sigAltitudeData(QString)),this,SLOT(slotAltitudeData(QString)));
    connect(&nmeaParser,SIGNAL(sigRudderAnglepData(QString)),this,SLOT(slotRudderAngleData(QString)));
    connect(&nmeaParser,SIGNAL(sigWayPointLocationData(QString,QString)),this,SLOT(slotWayPointLocationData(QString,QString)));
    connect(&nmeaParser,SIGNAL(sigDateAndTimeData(QString)),this,SLOT(slotDateAndTime(QString)));
    connect(&nmeaParser,SIGNAL(sigBearingtoWayPointData(QString,QString)),this,SLOT(slotWayPointRangeBearing(QString,QString)));
    connect(&nmeaParser,SIGNAL(sigWaterDepthData(QString)),this,SLOT(slotWaterDepthData(QString)));
    connect(&nmeaParser,SIGNAL(sigBearingOrgtoDestinationData(QString)),this,SLOT(slotDestinationBearing(QString)));
//   / this->layout()->setSizeConstraint(QLayout::SetFixedSize);

}
void MainWindow::readyRead()
{
    QByteArray Buffer;
    Buffer.resize(udpSocket->pendingDatagramSize());
    QHostAddress sender;
    quint16 senderPort;
    udpSocket->readDatagram(Buffer.data(),Buffer.size(),&sender,&senderPort);
    nmeaParser.slotParseNmea(Buffer.data());
}

void MainWindow::slotLogData(int value)
{

    if(value>=40)
    {

        logMeterNiddle->setCurrentValue(value);
        changeBackgroundParameter->clearrColors();
        changeBackgroundParameter->addColor(0.1,Qt::gray);
        changeBackgroundParameter->addColor(1.0,Qt::red);
        ui->label_speed->setText(QString("%1 NM").arg(value));
        //play alarm
        alarm->play();

    }else
    {
        logMeterNiddle->setCurrentValue(value);
        changeBackgroundParameter->clearrColors();
        changeBackgroundParameter->addColor(0.1,Qt::gray);
        changeBackgroundParameter->addColor(1.0,Qt::blue);
        ui->label_speed->setText(QString("%1 NM").arg(value));
        alarm->stop();

    }

}

void MainWindow::slotGyroData(int value,QString lat,QString lon)
{

    gyroNiddle->setCurrentValue(value);

    ui->label_latitude->setText(QString("%1<sup>o</sup>").arg(lat));
    ui->label_longitude->setText(QString("%1<sup>o</sup>").arg(lon));
}

void MainWindow::slotPitchData(int value)
{
    int x = value + 90;
    qDebug()<<"sbdajjdfhfdj.................:"<<value;
    if(value>=18 || value<= -18){
        changeBackgroundPitchParameter->clearrColors();
        changeBackgroundPitchParameter->addColor(0.1,Qt::red);
        changeBackgroundPitchParameter->addColor(1.0,Qt::red);
        pitchNiddle->setCurrentValue(x);
        ui->label_Pitch->setText(QString("%1<sup>o</sup>").arg(value));
        alarm->play();

    }else
    {
        changeBackgroundPitchParameter->clearrColors();
        changeBackgroundPitchParameter->addColor(0.1,Qt::black);
        changeBackgroundPitchParameter->addColor(1.0,Qt::black);
        ui->label_Pitch->setText(QString("%1<sup>o</sup>").arg(value));
        pitchNiddle->setCurrentValue(x);
        alarm->stop();
    }

}

void MainWindow::slotRollData(int value)
{

    int x = value + 90;
    qDebug()<<"sbdajjdfhfdj.................:"<<value;
    if(value>=18 || value<= -18){
        changeBackgroundRollParameter->clearrColors();
        changeBackgroundRollParameter->addColor(0.1,Qt::red);
        changeBackgroundRollParameter->addColor(1.0,Qt::red);
        rollNiddle->setCurrentValue(x);
          ui->label_Roll->setText(QString("%1<sup>o</sup>").arg(value));
          alarm->play();
    }else
    {
        changeBackgroundRollParameter->clearrColors();
        changeBackgroundRollParameter->addColor(0.1,Qt::black);
        changeBackgroundRollParameter->addColor(1.0,Qt::black);

        rollNiddle->setCurrentValue(x);
          ui->label_Roll->setText(QString("%1<sup>o</sup>").arg(value));
          alarm->stop();
    }
}

void MainWindow::slotWindSpeedData(int value)
{
    if(value>=15){

        changeBackgroundWindSpeedParameter->clearrColors();
        changeBackgroundWindSpeedParameter->addColor(0.1,Qt::red);
        changeBackgroundWindSpeedParameter->addColor(1.0,Qt::red);
        alarm->play();
       }else
    {
        changeBackgroundWindSpeedParameter->clearrColors();
        changeBackgroundWindSpeedParameter->addColor(0.1,Qt::gray);
        changeBackgroundWindSpeedParameter->addColor(1.0,QColor("#8BE0E6"));
        alarm->stop();
     }
    windSpeedNiddle->setCurrentValue(value);
      ui->label_windSpeed->setText(QString("%1 Knots").arg(value));
}

void MainWindow::slotWindDirectionData(int value)
{
    windDirectionNiddle->setCurrentValue(value);
      ui->label_WindDirection->setText(QString("%1<sup>o</sup>").arg(value));
}

void MainWindow::slotWaterTempData(QString value)
{
    ui->label_waterTemp->setText(QString("%1<sup>o</sup>C").arg(value));
}

void MainWindow::slotOutsideTempData(QString value)
{
    // ui->label_Outsidetemp->setText(value);
}

void MainWindow::slotRudderAngleData(QString value)
{
    ui->label_rudder->setText(QString("%1<sup>o</sup>").arg(value));
}

void MainWindow::slotWayPointLocationData(QString lat, QString longt)
{
    // ui->label_wayPointLocation->setText(value);
    ui->label_waypoint_Lat->setText(QString("%1<sup>o</sup>").arg(lat));
    ui->label_waypoint_Long->setText(QString("%1<sup>o</sup>").arg(longt));
}

void MainWindow::slotWayPointRangeBearing(QString bearing, QString range)
{
    ui->label_WayPoint_Bearing->setText(QString("%1<sup>o</sup>").arg(bearing));
    ui->label_wayPoint_distance->setText(QString("%1 N").arg(range));
}

void MainWindow::slotAltitudeData(QString altitude)
{
    ui->label_Altitude->setText(QString("%1 f").arg(altitude));
}

void MainWindow::slotOutsideHumidityData(QString value)
{
    // ui->label_outsideHumidity->setText(value);
}

void MainWindow::slotWaterDepthData(QString value)
{
    //ui->label_waterDepth->setText(value);
}

void MainWindow::slotRateOfTempData(QString value)
{
    //ui->label_Rat_of_turn->setText(value);
}

void MainWindow::slotTransitPosition(QString value)
{
    // ui->label_TransitPosition->setText(value);
}

void MainWindow::slotDateAndTime(QString value)
{
    //qDebug()<<"Time and Date"<<value;
    QDateTime time=QDateTime::currentDateTime();
    QString time_text=time.toString("hh:mm");
    ui->label_Date_Time->setText(time_text);
}

void MainWindow::slotDestinationBearing(QString value)
{
    ui->label_Destination_Bearing->setText(QString("%1<sup>o</sup>").arg(value));
}

MainWindow::~MainWindow()
{
    delete ui;
}

QcGaugeWidget *MainWindow::createLogMeter()
{
    QcGaugeWidget *mSpeedGauge = new QcGaugeWidget;
    mSpeedGauge->addBackground(99);
    QcBackgroundItem *bkg1 = mSpeedGauge->addBackground(92);
    bkg1->clearrColors();
    bkg1->addColor(0.1,Qt::black);
    bkg1->addColor(1.0,Qt::white);

    changeBackgroundParameter = mSpeedGauge->addBackground(88);
    changeBackgroundParameter->clearrColors();
    changeBackgroundParameter->addColor(0.1,Qt::gray);
    changeBackgroundParameter->addColor(1.0,Qt::blue);

    mSpeedGauge->addArc(55);
    mSpeedGauge->addDegrees(65)->setValueRange(0,80);
    mSpeedGauge->addColorBand(50);

    mSpeedGauge->addValues(80)->setValueRange(0,80);

    mSpeedGauge->addLabel(70)->setText("NM");
    QcLabelItem *lab = mSpeedGauge->addLabel(40);
    lab->setText("0");
    logMeterNiddle = mSpeedGauge->addNeedle(60);
    logMeterNiddle->setLabel(lab);
    logMeterNiddle->setColor(Qt::white);
    logMeterNiddle->setValueRange(0,80);
    mSpeedGauge->addBackground(7);
    mSpeedGauge->addGlass(88);
    return mSpeedGauge;
}

QcGaugeWidget *MainWindow::createGyroMeter()
{
    QcGaugeWidget *mCompassGauge = new QcGaugeWidget;

    mCompassGauge->addBackground(99);
    QcBackgroundItem *bkg1 = mCompassGauge->addBackground(92);
    bkg1->clearrColors();
    bkg1->addColor(0.1,Qt::black);
    bkg1->addColor(1.0,Qt::black);

    QcBackgroundItem *bkg2 = mCompassGauge->addBackground(88);
    bkg2->clearrColors();
    bkg2->addColor(0.1,Qt::black);
    bkg2->addColor(1.0,QColor("#900C3F"));

    QcLabelItem *w = mCompassGauge->addLabel(80);
    w->setText("S");
    w->setAngle(0);
    w->setColor(Qt::white);

    QcLabelItem *n = mCompassGauge->addLabel(80);
    n->setText("W");
    n->setAngle(90);
    n->setColor(Qt::white);

    QcLabelItem *e = mCompassGauge->addLabel(80);
    e->setText("N");
    e->setAngle(180);
    e->setColor(Qt::white);

    QcLabelItem *s = mCompassGauge->addLabel(80);
    s->setText("W");
    s->setAngle(270);
    s->setColor(Qt::white);

    QcDegreesItem *deg = mCompassGauge->addDegrees(70);
    deg->setStep(5);
    deg->setMaxDegree(360);
    deg->setMinDegree(0);
    deg->setColor(Qt::white);
    gyroNiddle = mCompassGauge->addNeedle(60);
    gyroNiddle->setNeedle(QcNeedleItem::CompassNeedle);
    gyroNiddle->setValueRange(0,360);
    gyroNiddle->setMaxDegree(360);
    gyroNiddle->setMinDegree(0);
    //gyroNiddle->setCurrentValue(270);
    mCompassGauge->addBackground(7);
    mCompassGauge->addGlass(88);

    return mCompassGauge;
}

QcGaugeWidget *MainWindow::createWindSpeedMeter()
{
    QcGaugeWidget *mWindGauge = new QcGaugeWidget;
    mWindGauge->addBackground(99);
    QcBackgroundItem *bkg1 = mWindGauge->addBackground(92);
    bkg1->clearrColors();
    bkg1->addColor(0.1,Qt::black);
    bkg1->addColor(1.0,Qt::white);

    changeBackgroundWindSpeedParameter = mWindGauge->addBackground(88);
    changeBackgroundWindSpeedParameter->clearrColors();
    changeBackgroundWindSpeedParameter->addColor(0.1,Qt::gray);
    changeBackgroundWindSpeedParameter->addColor(1.0,QColor("#8BE0E6"));

    mWindGauge->addArc(55);
    mWindGauge->addDegrees(65)->setValueRange(0,80);
    mWindGauge->addColorBand(50);

    mWindGauge->addValues(80)->setValueRange(0,80);

    mWindGauge->addLabel(70)->setText("Km/h");
    QcLabelItem *lab = mWindGauge->addLabel(40);
    lab->setText("0");
    windSpeedNiddle = mWindGauge->addNeedle(60);
    windSpeedNiddle->setLabel(lab);
    windSpeedNiddle->setColor(Qt::white);
    windSpeedNiddle->setValueRange(0,80);
    mWindGauge->addBackground(7);
    mWindGauge->addGlass(88);
    return mWindGauge;

}

QcGaugeWidget *MainWindow::createWindDirectionMeter()
{
    QcGaugeWidget *mCompassGauge = new QcGaugeWidget;

    mCompassGauge->addBackground(99);
    QcBackgroundItem *bkg1 = mCompassGauge->addBackground(92);
    bkg1->clearrColors();
    bkg1->addColor(0.1,Qt::black);
    bkg1->addColor(1.0,Qt::white);

    QcBackgroundItem *bkg2 = mCompassGauge->addBackground(88);
    bkg2->clearrColors();
    bkg2->addColor(0.1,Qt::gray);
    bkg2->addColor(1.0,QColor("#8BE0E6"));

    QcLabelItem *w = mCompassGauge->addLabel(80);
    w->setText("S");
    w->setAngle(0);
    w->setColor(Qt::black);

    QcLabelItem *n = mCompassGauge->addLabel(80);
    n->setText("W");
    n->setAngle(90);
    n->setColor(Qt::black);

    QcLabelItem *e = mCompassGauge->addLabel(80);
    e->setText("N");
    e->setAngle(180);
    e->setColor(Qt::black);

    QcLabelItem *s = mCompassGauge->addLabel(80);
    s->setText("E");
    s->setAngle(270);
    s->setColor(Qt::black);

    QcDegreesItem *deg = mCompassGauge->addDegrees(70);
    deg->setStep(5);
    deg->setMaxDegree(270);
    deg->setMinDegree(-75);
    deg->setColor(Qt::black);
    windDirectionNiddle = mCompassGauge->addNeedle(60);
    windDirectionNiddle->setNeedle(QcNeedleItem::CompassNeedle);
    windDirectionNiddle->setValueRange(0,360);
    windDirectionNiddle->setMaxDegree(360);
    windDirectionNiddle->setMinDegree(0);
    mCompassGauge->addBackground(7);
    mCompassGauge->addGlass(88);
    return mCompassGauge;
}

QWidget *MainWindow::createDepthIndicator()
{
    QWidget *newWidget = new QWidget;
    QVBoxLayout layout;
    QLabel label;
    QSlider *vScrollBar = new QSlider;

    label.setText("Depth Indicator");
    vScrollBar->setOrientation(Qt::Vertical);
    layout.addWidget(&label);
    layout.addWidget(vScrollBar);


    newWidget->setLayout(&layout);



    return newWidget;



}

QcGaugeWidget *MainWindow::createPitchMeter()
{

    QcGaugeWidget *mAttitudeGauge = new QcGaugeWidget;
    mAttitudeGauge->addBackground(99);
    changeBackgroundPitchParameter = mAttitudeGauge->addBackground(92);
    changeBackgroundPitchParameter->clearrColors();
    changeBackgroundPitchParameter->addColor(0.1,Qt::black);
    changeBackgroundPitchParameter->addColor(1.0,Qt::black);
    mAttMeter = mAttitudeGauge->addAttitudeMeter(88);

    pitchNiddle = mAttitudeGauge->addNeedle(70);
    pitchNiddle->setMinDegree(0);
    pitchNiddle->setMaxDegree(180);
    pitchNiddle->setValueRange(0,180);
    pitchNiddle->setCurrentValue(90);
    pitchNiddle->setColor(Qt::white);
    pitchNiddle->setNeedle(QcNeedleItem::PitchNeedle);
    mAttitudeGauge->addGlass(80);
    return mAttitudeGauge;
}

QcGaugeWidget *MainWindow::createRollMeter()
{


    QcGaugeWidget *mAttitudeGauge = new QcGaugeWidget;
    mAttitudeGauge->addBackground(99);
    changeBackgroundRollParameter = mAttitudeGauge->addBackground(92);
    changeBackgroundRollParameter->clearrColors();
    changeBackgroundRollParameter->addColor(0.1,Qt::black);
    changeBackgroundRollParameter->addColor(1.0,Qt::white);
    QcAttitudeMeter *mAttMeter = mAttitudeGauge->addAttitudeMeter(88);

    rollNiddle = mAttitudeGauge->addNeedle(70);
    rollNiddle->setMinDegree(0);
    rollNiddle->setMaxDegree(180);
    rollNiddle->setValueRange(0,180);
    rollNiddle->setCurrentValue(90);
    rollNiddle->setColor(Qt::white);
    rollNiddle->setNeedle(QcNeedleItem::RollNeedle);
    //    rollNiddle->setCurrentValue(5);
    mAttitudeGauge->addGlass(80);


    return mAttitudeGauge;
}

QcGaugeWidget *MainWindow::createTrottle()
{


}

QcGaugeWidget *MainWindow::createFuel1Indicator()
{
    QcGaugeWidget *mCompassGauge = new QcGaugeWidget;

    mCompassGauge->addBackground(99);
    QcBackgroundItem *bkg1 = mCompassGauge->addBackground(92);
    bkg1->clearrColors();
    bkg1->addColor(0.1,Qt::black);
    bkg1->addColor(1.0,Qt::white);

    QcBackgroundItem *bkg2 = mCompassGauge->addBackground(88);
    bkg2->clearrColors();
    bkg2->addColor(0.1,Qt::white);
    bkg2->addColor(1.0,Qt::black);

    QcLabelItem *w = mCompassGauge->addLabel(80);
    w->setText("W");
    w->setAngle(0);
    w->setColor(Qt::white);

    QcLabelItem *n = mCompassGauge->addLabel(80);
    n->setText("N");
    n->setAngle(90);
    n->setColor(Qt::white);

    QcLabelItem *e = mCompassGauge->addLabel(80);
    e->setText("E");
    e->setAngle(180);
    e->setColor(Qt::white);

    QcLabelItem *s = mCompassGauge->addLabel(80);
    s->setText("S");
    s->setAngle(270);
    s->setColor(Qt::white);

    QcDegreesItem *deg = mCompassGauge->addDegrees(70);
    deg->setStep(5);
    deg->setMaxDegree(270);
    deg->setMinDegree(-75);
    deg->setColor(Qt::white);
    QcNeedleItem *mCompassNeedle = mCompassGauge->addNeedle(60);
    mCompassNeedle->setNeedle(QcNeedleItem::CompassNeedle);
    mCompassNeedle->setValueRange(0,360);
    mCompassNeedle->setMaxDegree(360);
    mCompassNeedle->setMinDegree(0);
    mCompassGauge->addBackground(7);
    mCompassGauge->addGlass(88);
    return mCompassGauge;
}

QcGaugeWidget *MainWindow::createFuel2Indicator()
{

}

QcGaugeWidget *MainWindow::createFuel3Indicator()
{

}

QcGaugeWidget *MainWindow::createFuel4Indicator()
{

}

QcGaugeWidget *MainWindow::createEngine1Meter()
{

}

QcGaugeWidget *MainWindow::createEngine2Meter()
{

}

void MainWindow::SetupUi()
{


    ui->verticalLayout_Gyrometer->addWidget(createGyroMeter());
    ui->verticalLayout_logmeter->addWidget(createLogMeter());
    ui->verticalLayout_Pitch->addWidget(createPitchMeter());
    ui->verticalLayout_roll->addWidget(createRollMeter());
    ui->verticalLayout_WindSpeed->addWidget(createWindSpeedMeter());
    ui->verticalLayout_windDirection->addWidget(createWindDirectionMeter());
    //ui->verticalLayout_depth_indicator->addWidget(createDepthIndicator());
}
