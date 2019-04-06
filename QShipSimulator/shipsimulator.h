#ifndef SHIPSIMULATOR_H
#define SHIPSIMULATOR_H

#include <QMainWindow>
#include <QTimer>
#include <QFile>
namespace Ui {
class ShipSimulator;
}
static QString lat_value = "N";
static QString long_value = "E";
static QStringList list_gyro;
static QStringList list_log;
static QStringList list_tape;
static QStringList list_roll_pitch;
static QStringList list_wind;
static QStringList list_misc;

class ShipSimulator : public QMainWindow
{
    Q_OBJECT

public:
    explicit ShipSimulator(QWidget *parent = 0);
    ~ShipSimulator();
    QTimer *timer;

    QTimer timerGyro;
    QTimer timerLog;
    QTimer timerPitch;
    QTimer timerRoll;
    QTimer timerWind;
    QTimer timerMisc;

    int lat_count;
    int long_count;
    QFile file_gyro,file_log,file_tape,file_roll_pitch,file_wind,file_misc;
    int gyro_index=0,tape_index=0,log_index=0,roll_index=0,wind_index=0,misc_index = 0;

    QTimer *timerReadFile;
private slots:
    void readfile();
    void on_course_slider_sliderMoved(int position);

    void on_lineEdit_course_textChanged(const QString &arg1);

    void on_pushButton_Tr_Start_clicked();
    void generate_NMEA_tr();
    void generate_NMEA_log();
    void generate_NMEA_gyro();
    void generate_NMEA_pitch_roll();
    void generate_NMEA_wind();
    void generateNmeaMisc();

    void on_pushButton_tr_Stop_clicked();

    void on_pushButton_log_Start_clicked();

    void on_slider_log_course_sliderMoved(int position);


    void on_slider_log_velocity_sliderMoved(int position);

    void on_pushButton_gyro_start_clicked();

    void on_lineEdit_course_textEdited(const QString &arg1);


    void on_pushButton_lat_Direction_clicked();

    void on_pushButton_long_direction_clicked();



    void on_pushButton_pitch_roll_start_clicked();

    void on_slider_pitch_sliderMoved(int position);

    void on_slider_roll_sliderMoved(int position);

    void on_horizontalSlider_gyro_heading_sliderMoved(int position);



    void on_slider_wind_angle_sliderMoved(int position);

    void on_slider_wind_speed_sliderMoved(int position);

    void on_pushButton_windmeter_start_clicked();

    void on_pushButton_readfile_start_clicked();

    void on_pushButton_Misc_Start_clicked();

    void on_pushButton_log_Stop_clicked();

    void on_pushButton_pitchroll_stop_clicked();

    void on_pushButton_gyro_stop_clicked();

    void on_pushButton_windmeter_stop_clicked();

    void on_pushButton_Misc_stop_clicked();

    void on_pushButton_readfile_Stop_clicked();

private:
    Ui::ShipSimulator *ui;
};

#endif // SHIPSIMULATOR_H
