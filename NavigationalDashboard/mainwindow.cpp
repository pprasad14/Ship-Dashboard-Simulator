#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <parsenmea.h>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setStyleSheet("background-color: black;");

    logmeter = new Logmeter(this);
    logmeter->setGeometry(0,0,500,500);
    logmeter->show();


    repeater = new TapeRepeater(this);
    repeater->setGeometry(0,0,2048,700);
    repeater->show();

    gyro = new Gyrometer(this);
    gyro->setGeometry(400,0,1000,1000);
    gyro->show();

    pitch =  new Pitchmeter(this);
    pitch->setGeometry(0,0,1000,1000);
    pitch->show();

    roll =  new Rollmeter(this);
    roll->setGeometry(0,0,700,700);
    roll->show();

    Twind =  new WindSpeedIndicator(this);
    Twind->setGeometry(0,0,700,700);
    Twind->show();

    Rwind =  new WindSpeedRelativeIndicator(this);
    Rwind->setGeometry(0,0,1000,1000);
    Rwind->show();


//    depth = new DepthIndicator(this);
//    depth->setGeometry(0,0,100,1500);
//    depth->show();

    //    QPalette pal(palette());
//    pal.setColor(QPalette::Background, Qt::black);
//    repeater->setAutoFillBackground(true);
//    repeater->setPalette(pal);
//repeater->setStyleSheet("background-color: black");

////    repeater->setPalette(pal);

     ParseNMEA *parser =  new ParseNMEA(this);
     }

MainWindow::~MainWindow()
{
    delete ui;
}


