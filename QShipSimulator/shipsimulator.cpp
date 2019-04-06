#include "shipsimulator.h"
#include "ui_shipsimulator.h"
#include <QDebug>
#include <heading_taperepeater.h>
#include <speed_logmeter.h>
#include <position_gyrometer.h>
#include <udp_nmea.h>
#include <pitchroll.h>
#include <windspeedindicator.h>
#include <QFile>
#include<miscnmea.h>

ShipSimulator::ShipSimulator(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ShipSimulator)
{
    ui->setupUi(this);
    //    ui->tabWidget->setStyleSheet("QTabBar::tab {height:50px;width: 100px;}");
    //    ui->tabWidget->setStyleSheet("QTabBar::tab{background-image : url(../QShipSimulator/images/green_off.png)}");
  //  ui->pushButton_Tr_Start->setStyleSheet("QPushButton{background-image : url(../QShipSimulator/images/green_off.png);border-style: solid;border-width:1px;border-radius:50px;max-width:100px;max-height:100px;min-width:100px;min-height:100px;}");
  //  ui->pushButton_tr_Stop->setStyleSheet("QPushButton{background-image : url(../QShipSimulator/images/red_off.png);border-style: solid;border-width:1px;border-radius:50px;max-width:100px;max-height:100px;min-width:100px;min-height:100px;}");
//    ui->pushButton_log_Start->setStyleSheet("QPushButton{background-image : url(../QShipSimulator/images/green_off.png);border-style: solid;border-width:1px;border-radius:50px;max-width:100px;max-height:100px;min-width:100px;min-height:100px;}");
//    ui->pushButton_log_Stop->setStyleSheet("QPushButton{background-image : url(../QShipSimulator/images/red_off.png);border-style: solid;border-width:1px;border-radius:50px;max-width:100px;max-height:100px;min-width:100px;min-height:100px;}");
//    ui->pushButton_pitch_roll_start->setStyleSheet("QPushButton{background-image : url(../QShipSimulator/images/green_off.png);border-style: solid;border-width:1px;border-radius:50px;max-width:100px;max-height:100px;min-width:100px;min-height:100px;}");
//    ui->pushButton_pitchroll_stop->setStyleSheet("QPushButton{background-image : url(../QShipSimulator/images/red_off.png);border-style: solid;border-width:1px;border-radius:50px;max-width:100px;max-height:100px;min-width:100px;min-height:100px;}");
//    ui->pushButton_gyro_start->setStyleSheet("QPushButton{background-image : url(../QShipSimulator/images/green_off.png);border-style: solid;border-width:1px;border-radius:50px;max-width:100px;max-height:100px;min-width:100px;min-height:100px;}");
//    ui->pushButton_gyro_stop->setStyleSheet("QPushButton{background-image : url(../QShipSimulator/images/red_off.png);border-style: solid;border-width:1px;border-radius:50px;max-width:100px;max-height:100px;min-width:100px;min-height:100px;}");
//    ui->pushButton_windmeter_start->setStyleSheet("QPushButton{background-image : url(../QShipSimulator/images/green_off.png);border-style: solid;border-width:1px;border-radius:50px;max-width:100px;max-height:100px;min-width:100px;min-height:100px;}");
//    ui->pushButton_windmeter_stop->setStyleSheet("QPushButton{background-image : url(../QShipSimulator/images/red_off.png);border-style: solid;border-width:1px;border-radius:50px;max-width:100px;max-height:100px;min-width:100px;min-height:100px;}");
//    ui->pushButton_Misc_stop->setStyleSheet("QPushButton{background-image : url(../QShipSimulator/images/red_off.png);border-style: solid;border-width:1px;border-radius:50px;max-width:100px;max-height:100px;min-width:100px;min-height:100px;}");
//    ui->pushButton_Misc_Start->setStyleSheet("QPushButton{background-image : url(../QShipSimulator/images/green_off.png);border-style: solid;border-width:1px;border-radius:50px;max-width:100px;max-height:100px;min-width:100px;min-height:100px;}");

    ui->lineEdit_gyro_lat->setText("72.45");
    ui->lineEdit_gyro_long->setText("74.12");
    ui->lineEdit_gyro_course->setText("38.0");




}

ShipSimulator::~ShipSimulator()
{
    delete ui;
}

//Reads from file to generate NMEA sentences and sends it to Dashboard
void ShipSimulator::readfile()
{   UDP_NMEA udp;
    qDebug()<<list_gyro.size()<<list_log.size()<<list_misc.size()<<list_roll_pitch.size()<<list_wind.size();



    if(gyro_index<list_gyro.size()-2){
        qDebug()<<"Inside Gyro"<<list_gyro[gyro_index];
    ui->textBrowser_displayGPRMC->append(list_gyro[gyro_index]);
    udp.writeData(list_gyro[gyro_index]);
    gyro_index++;
    }else
    {
        qDebug()<<"Inside Gyro  00000"<<list_gyro[gyro_index];
        gyro_index = 0;

    }


    if(log_index<list_log.size()-2){

    ui->textBrowser_displayGPRMC->append(list_log[log_index]);
    udp.writeData(list_log[log_index]);
    log_index++;
    }else
    {
        log_index = 0;
    }

    if(roll_index<list_roll_pitch.size()-2){

    ui->textBrowser_displayGPRMC->append(list_roll_pitch[roll_index]);
    udp.writeData(list_roll_pitch[roll_index]);
    roll_index++;
    }else
    {
        roll_index = 0;
    }
    if(wind_index<list_wind.size()-2){

    ui->textBrowser_displayGPRMC->append(list_wind[wind_index]);
    udp.writeData(list_wind[wind_index]);
    wind_index++;
    }
    else
    {
    wind_index = 0;
    }
    if(misc_index<list_misc.size()-2){

    ui->textBrowser_displayGPRMC->append(list_misc[misc_index]);
    udp.writeData(list_misc[misc_index]);
    misc_index++;
    }
    else
    {
    misc_index = 0;
    }
}



void ShipSimulator::on_course_slider_sliderMoved(int position)
{
   // ui->lineEdit_course->setText(QString("%1").arg(position));
}

void ShipSimulator::on_lineEdit_course_textChanged(const QString &arg1)
{
    int course = arg1.toDouble();
    //ui->course_slider->setSliderPosition(course);
    //ui->lcdNumber_tr->display(course);
}

void ShipSimulator::on_pushButton_Tr_Start_clicked()
{
    //ui->pushButton_tr_Stop->setStyleSheet("QPushButton{background-image : url(../QShipSimulator/images/green_on.png);border-style: solid;border-width:1px;border-radius:50px;max-width:100px;max-height:100px;min-width:100px;min-height:100px;}");

    timer = new QTimer(this);

    connect(timer , SIGNAL(timeout()) , this , SLOT(generate_NMEA_tr()));
    timer->start(2000);

}
//===============================================================================
//generates NMEA Sentences for logmeter
void ShipSimulator::generate_NMEA_log()
{   Speed_Logmeter *log = new Speed_Logmeter(this);


    QString id = "VW";


    double course = ui->lcdNumber_log_course->value();
    double velocity = ui->lcdNumber_log_speed->value();
    //    qDebug() <<id<<course;
    QString str = log->generateNMEA(id,course,velocity);

    ui->textBrowser_displayGPRMC->append(str);
}
//=====================================================================================
//generates NMEA Sentences for Gyrometer

void ShipSimulator::generate_NMEA_gyro()
{
    Position_Gyrometer *gyro = new Position_Gyrometer(this);
    QString lat = ui->lineEdit_gyro_lat->text();
    QString long1 = ui->lineEdit_gyro_long->text();
    QString heading_angle = ui->lineEdit_gyro_course->text();
    QString str = gyro->generateNMEA(lat,long1,lat_value,long_value,heading_angle);
    ui->textBrowser_displayGPRMC->append(str);

}
//=====================================================================================
//generates NMEA Sentences for Pitch and Roll
void ShipSimulator::generate_NMEA_pitch_roll()
{
    PitchRoll *pitch_roll = new PitchRoll(this);
    QString pitch_angle = ui->lineEdit_pitch->text();
    QString roll_angle = ui->lineEdit_roll->text();
    QString str = pitch_roll->generateNMEA(pitch_angle,roll_angle);
    ui->textBrowser_displayGPRMC->append(str);

}
//=====================================================================================
//generates NMEA Sentences for Windmeter
void ShipSimulator::generate_NMEA_wind()
{
    WindSpeedIndicator *wind = new WindSpeedIndicator(this);
    double wind_angle = ui->lcdNumber_wind_angle->value();
    double wind_speed = ui->lcdNumber_wind_speed->value();
    QString str = wind->generateNMEA(wind_angle,wind_speed);
    ui->textBrowser_displayGPRMC->append(str);

}

void ShipSimulator::generateNmeaMisc()
{
    MiscNmea *misc = new MiscNmea(this);

    ui->textBrowser_displayGPRMC->append(misc->generateAltitudeNMEA(ui->doubleSpinBox_altitude->text()));
    ui->textBrowser_displayGPRMC->append(misc->generateBearingAndDistanceToNMEA(ui->doubleSpinBox_waypoint_distance->text(),ui->doubleSpinBox_waypoint_bearing->text()));
    ui->textBrowser_displayGPRMC->append(misc->generateDateTimeNMEA(""));
    ui->textBrowser_displayGPRMC->append(misc->generateMeanTempNMEA(ui->doubleSpinBox_mean_temp_water->text()));
    ui->textBrowser_displayGPRMC->append(misc->generateRudderAngleNMEA(ui->doubleSpinBox_rudder_angle->text()));
    ui->textBrowser_displayGPRMC->append(misc->generateWayPointLocationNMEA(ui->doubleSpinBox_waypoint_lat->text(),ui->doubleSpinBox_waypoint_long->text()));
    ui->textBrowser_displayGPRMC->append(misc->generateBearingOriginToDestinationNMEA(ui->doubleSpinBox_Source_Destination_Bearing->text()));

}

//==================================================================
//generates NMEA sentences for tape Repeater

void ShipSimulator::generate_NMEA_tr()
{
    Heading_TapeRepeater *hr = new Heading_TapeRepeater(this);
    QString id = "LL";

    //double course = ui->lcdNumber_tr->value();
    //    qDebug() <<id<<course;
    //QString str = hr->generateNMEA(id,course);
   // ui->textBrowser_displayGPRMC->append(str);
}



void ShipSimulator::on_pushButton_tr_Stop_clicked()
{
   // ui->pushButton_tr_Stop->setStyleSheet("QPushButton{background-image : url(E:/projects/NavigationalDashboard/images/red_on.png);border-style: solid;border-width:1px;border-radius:50px;max-width:100px;max-height:100px;min-width:100px;min-height:100px;}");
    timer->stop();
}

void ShipSimulator::on_pushButton_log_Start_clicked()
{
  //  ui->pushButton_log_Stop->setStyleSheet("QPushButton{background-image : url(../QShipSimulator/images/green_on.png);border-style: solid;border-width:1px;border-radius:50px;max-width:100px;max-height:100px;min-width:100px;min-height:100px;}");



    connect(&timerLog , SIGNAL(timeout()) , this , SLOT(generate_NMEA_log()));
    timerLog.start(2000);

}
void ShipSimulator::on_slider_log_course_sliderMoved(int position)
{
    ui->lineEdit_log_course->setText(QString("%1").arg(position));

}


void ShipSimulator::on_slider_log_velocity_sliderMoved(int position)
{
    ui->lineEdit_log_velocity->setText(QString("%1").arg(position));

}

void ShipSimulator::on_pushButton_gyro_start_clicked()
{
    //ui->pushButton_gyro_stop->setStyleSheet("QPushButton{background-image : url(../QShipSimulator/images/green_on.png);border-style: solid;border-width:1px;border-radius:50px;max-width:100px;max-height:100px;min-width:100px;min-height:100px;}");

   // timer = new QTimer(this);

    connect(&timerGyro , SIGNAL(timeout()) , this , SLOT(generate_NMEA_gyro()));
    timerGyro.start(2000);

}

void ShipSimulator::on_lineEdit_course_textEdited(const QString &arg1)
{
    ui->slider_log_course->setValue(arg1.toInt());
}





void ShipSimulator::on_pushButton_lat_Direction_clicked()
{

    if(lat_count%2==0)
    {
        ui->pushButton_lat_Direction->setText("S");
        lat_value = "S";
    }
    else
    {
        ui->pushButton_lat_Direction->setText("N");
        lat_value = "N";
    }
    lat_count++;
}

void ShipSimulator::on_pushButton_long_direction_clicked()
{
    if(long_count%2==0)
    {
        ui->pushButton_long_direction->setText("E");
        long_value = "E";
    }
    else
    {
        ui->pushButton_long_direction->setText("W");
        long_value = "W";
    }
    long_count++;
}


void ShipSimulator::on_pushButton_pitch_roll_start_clicked()
{

    //ui->pushButton_pitchroll_stop->setStyleSheet("QPushButton{background-image : url(../QShipSimulator/images/green_on.png);border-style: solid;border-width:1px;border-radius:50px;max-width:100px;max-height:100px;min-width:100px;min-height:100px;}");

   // timer = new QTimer(this);

    connect(&timerRoll , SIGNAL(timeout()) , this , SLOT(generate_NMEA_pitch_roll()));
    timerRoll.start(1000);

}

void ShipSimulator::on_slider_pitch_sliderMoved(int position)
{
    ui->lineEdit_pitch->setText(QString("%1").arg(position));

}

void ShipSimulator::on_slider_roll_sliderMoved(int position)
{
    ui->lineEdit_roll->setText(QString("%1").arg(position));

}

void ShipSimulator::on_horizontalSlider_gyro_heading_sliderMoved(int position)
{
    ui->lineEdit_gyro_course->setText(QString("%1").arg(position));

}



void ShipSimulator::on_slider_wind_angle_sliderMoved(int position)
{
    ui->lineEdit_wind_angle->setText((QString("%1")).arg(position));
}

void ShipSimulator::on_slider_wind_speed_sliderMoved(int position)
{
    ui->lineEdit_wind_speed->setText((QString("%1")).arg(position));

}

void ShipSimulator::on_pushButton_windmeter_start_clicked()
{
    //ui->pushButton_windmeter_stop->setStyleSheet("QPushButton{background-image : url(../QShipSimulator/images/green_on.png);border-style: solid;border-width:1px;border-radius:50px;max-width:100px;max-height:100px;min-width:100px;min-height:100px;}");

   // timer = new QTimer(this);

    connect(&timerWind , SIGNAL(timeout()) , this , SLOT(generate_NMEA_wind()));
    timerWind.start(2000);

}
//=====================================================================================
//Reads the file Displays and Sends NMEA to Dashboard
void ShipSimulator::on_pushButton_readfile_start_clicked()
{   QString line_gyro,line_log,line_roll_pitch,line_wind,line_tape,line_misc;
    file_gyro.setFileName("nmea/gyro.txt");
    file_log.setFileName("nmea/log.txt");
    file_roll_pitch.setFileName("nmea/pitchRoll.txt");
    file_tape.setFileName("");
    file_wind.setFileName("nmea/windspeed.txt");
    file_misc.setFileName("nmea/misc.txt");




    timerReadFile = new QTimer(this);

    file_gyro.open(QIODevice::ReadOnly | QIODevice::Text);
    file_log.open(QIODevice::ReadOnly | QIODevice::Text);
    file_wind.open(QIODevice::ReadOnly | QIODevice::Text);
    file_roll_pitch.open(QIODevice::ReadOnly | QIODevice::Text);
    file_tape.open(QIODevice::ReadOnly | QIODevice::Text);
    file_misc.open(QIODevice::ReadOnly | QIODevice::Text);

    QTextStream in_gyro(&file_gyro);
    QTextStream in_log(&file_log);
    QTextStream in_roll_pitch(&file_roll_pitch);
    QTextStream in_tape(&file_tape);
    QTextStream in_wind(&file_wind);
    QTextStream in_misc(&file_misc);


    line_gyro = in_gyro.readAll();
    line_log = in_log.readAll();
    line_roll_pitch = in_roll_pitch.readAll();
    line_tape = in_tape.readAll();
    line_wind = in_wind.readAll();
    line_misc = in_misc.readAll();

    list_gyro= line_gyro.split("\n");
    list_log = line_log.split("\n");
    list_roll_pitch= line_roll_pitch.split("\n");
    list_tape = line_tape.split("\n");
    list_wind = line_wind.split("\n");
    list_misc = line_misc.split("\n");


    connect(timerReadFile,SIGNAL(timeout()),this,SLOT(readfile()));
    timerReadFile->start(1000);


}

void ShipSimulator::on_pushButton_Misc_Start_clicked()
{
    //ui->pushButton_Misc_stop->setStyleSheet("QPushButton{background-image : url(../QShipSimulator/images/green_on.png);border-style: solid;border-width:1px;border-radius:50px;max-width:100px;max-height:100px;min-width:100px;min-height:100px;}");



    connect(&timerMisc , SIGNAL(timeout()) , this , SLOT(generateNmeaMisc()));
    timerMisc.start(2000);
}

void ShipSimulator::on_pushButton_log_Stop_clicked()
{
   //  ui->pushButton_log_Start->setStyleSheet("QPushButton{background-image : url(../QShipSimulator/images/green_on.png);border-style: solid;border-width:1px;border-radius:50px;max-width:100px;max-height:100px;min-width:100px;min-height:100px;}");
    timerLog.stop();
}

void ShipSimulator::on_pushButton_pitchroll_stop_clicked()
{
 //   ui->pushButton_pitch_roll_start->setStyleSheet("QPushButton{background-image : url(../QShipSimulator/images/green_on.png);border-style: solid;border-width:1px;border-radius:50px;max-width:100px;max-height:100px;min-width:100px;min-height:100px;}");
   timerRoll.stop();
}

void ShipSimulator::on_pushButton_gyro_stop_clicked()
{
    //ui->pushButton_gyro_start->setStyleSheet("QPushButton{background-image : url(../QShipSimulator/images/green_on.png);border-style: solid;border-width:1px;border-radius:50px;max-width:100px;max-height:100px;min-width:100px;min-height:100px;}");
   timerGyro.stop();
}

void ShipSimulator::on_pushButton_windmeter_stop_clicked()
{
    //ui->pushButton_windmeter_start->setStyleSheet("QPushButton{background-image : url(../QShipSimulator/images/green_on.png);border-style: solid;border-width:1px;border-radius:50px;max-width:100px;max-height:100px;min-width:100px;min-height:100px;}");
   timerWind.stop();
}

void ShipSimulator::on_pushButton_Misc_stop_clicked()
{
    //ui->pushButton_Misc_Start->setStyleSheet("QPushButton{background-image : url(../QShipSimulator/images/green_on.png);border-style: solid;border-width:1px;border-radius:50px;max-width:100px;max-height:100px;min-width:100px;min-height:100px;}");
   timerMisc.stop();
}

void ShipSimulator::on_pushButton_readfile_Stop_clicked()
{
timerReadFile->stop();
}
