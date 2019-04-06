/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox_gyrometer;
    QGridLayout *gridLayout_9;
    QVBoxLayout *verticalLayout_Gyrometer;
    QGroupBox *groupBox_gyrometer_logmeter;
    QGridLayout *gridLayout_10;
    QVBoxLayout *verticalLayout_logmeter;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox_42;
    QGridLayout *gridLayout_13;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_11;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label;
    QLabel *label_latitude;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_12;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_2;
    QLabel *label_longitude;
    QGroupBox *groupBox_43;
    QGridLayout *gridLayout_14;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_3;
    QLabel *label_speed;
    QWidget *tab_2;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_6;
    QGroupBox *groupBox_24;
    QGridLayout *gridLayout_25;
    QVBoxLayout *verticalLayout_Pitch;
    QGroupBox *groupBox_25;
    QGridLayout *gridLayout_26;
    QVBoxLayout *verticalLayout_roll;
    QGroupBox *groupBox_26;
    QGridLayout *gridLayout_31;
    QGroupBox *groupBox_47;
    QGridLayout *gridLayout_30;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_33;
    QLabel *label_Roll;
    QGroupBox *groupBox_44;
    QGridLayout *gridLayout_27;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_31;
    QLabel *label_Pitch;
    QWidget *tab_4;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout_8;
    QGroupBox *groupBox_30;
    QGridLayout *gridLayout_33;
    QVBoxLayout *verticalLayout_WindSpeed;
    QGroupBox *groupBox_31;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_windDirection;
    QGroupBox *groupBox_32;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_45;
    QGridLayout *gridLayout_28;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_35;
    QLabel *label_windSpeed;
    QGroupBox *groupBox_46;
    QGridLayout *gridLayout_29;
    QHBoxLayout *horizontalLayout_19;
    QLabel *label_37;
    QLabel *label_WindDirection;
    QHBoxLayout *horizontalLayout_3;
    QGroupBox *groupBox_7;
    QGridLayout *gridLayout_3;
    QGroupBox *groupBox_23;
    QGridLayout *gridLayout_19;
    QLabel *label_15;
    QLabel *label_Destination_Bearing;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_5;
    QGroupBox *groupBox_6;
    QFormLayout *formLayout_2;
    QLabel *label_23;
    QLabel *label_WayPoint_Bearing;
    QLabel *label_25;
    QLabel *label_wayPoint_distance;
    QGroupBox *groupBox_5;
    QFormLayout *formLayout;
    QLabel *label_19;
    QLabel *label_waypoint_Lat;
    QLabel *label_21;
    QLabel *label_waypoint_Long;
    QGroupBox *groupBox_8;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *groupBox_22;
    QGridLayout *gridLayout_18;
    QLabel *label_16;
    QLabel *label_Date_Time;
    QGroupBox *groupBox_20;
    QGridLayout *gridLayout_16;
    QLabel *label_Altitude;
    QLabel *label_12;
    QGroupBox *groupBox_21;
    QGridLayout *gridLayout_17;
    QLabel *label_rudder;
    QLabel *label_14;
    QGroupBox *groupBox_19;
    QGridLayout *gridLayout_15;
    QLabel *label_9;
    QLabel *label_waterTemp;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1224, 548);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gridLayout = new QGridLayout(tab);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        groupBox_gyrometer = new QGroupBox(tab);
        groupBox_gyrometer->setObjectName(QStringLiteral("groupBox_gyrometer"));
        groupBox_gyrometer->setMinimumSize(QSize(100, 100));
        gridLayout_9 = new QGridLayout(groupBox_gyrometer);
        gridLayout_9->setSpacing(6);
        gridLayout_9->setContentsMargins(11, 11, 11, 11);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        verticalLayout_Gyrometer = new QVBoxLayout();
        verticalLayout_Gyrometer->setSpacing(6);
        verticalLayout_Gyrometer->setObjectName(QStringLiteral("verticalLayout_Gyrometer"));

        gridLayout_9->addLayout(verticalLayout_Gyrometer, 0, 0, 1, 1);


        horizontalLayout->addWidget(groupBox_gyrometer);

        groupBox_gyrometer_logmeter = new QGroupBox(tab);
        groupBox_gyrometer_logmeter->setObjectName(QStringLiteral("groupBox_gyrometer_logmeter"));
        groupBox_gyrometer_logmeter->setMinimumSize(QSize(100, 100));
        gridLayout_10 = new QGridLayout(groupBox_gyrometer_logmeter);
        gridLayout_10->setSpacing(6);
        gridLayout_10->setContentsMargins(11, 11, 11, 11);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        verticalLayout_logmeter = new QVBoxLayout();
        verticalLayout_logmeter->setSpacing(6);
        verticalLayout_logmeter->setObjectName(QStringLiteral("verticalLayout_logmeter"));

        gridLayout_10->addLayout(verticalLayout_logmeter, 0, 0, 1, 1);


        horizontalLayout->addWidget(groupBox_gyrometer_logmeter);

        groupBox_3 = new QGroupBox(tab);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        verticalLayout_3 = new QVBoxLayout(groupBox_3);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        groupBox_42 = new QGroupBox(groupBox_3);
        groupBox_42->setObjectName(QStringLiteral("groupBox_42"));
        gridLayout_13 = new QGridLayout(groupBox_42);
        gridLayout_13->setSpacing(6);
        gridLayout_13->setContentsMargins(11, 11, 11, 11);
        gridLayout_13->setObjectName(QStringLiteral("gridLayout_13"));
        groupBox = new QGroupBox(groupBox_42);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_11 = new QGridLayout(groupBox);
        gridLayout_11->setSpacing(6);
        gridLayout_11->setContentsMargins(11, 11, 11, 11);
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QLatin1String("font-size:25px;\n"
"color:white;\n"
"font-weight:bold;"));

        horizontalLayout_11->addWidget(label);

        label_latitude = new QLabel(groupBox);
        label_latitude->setObjectName(QStringLiteral("label_latitude"));
        label_latitude->setStyleSheet(QLatin1String("font-size:25px;\n"
"color:white;\n"
"font-weight:bold;"));

        horizontalLayout_11->addWidget(label_latitude);


        gridLayout_11->addLayout(horizontalLayout_11, 0, 0, 1, 1);


        gridLayout_13->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(groupBox_42);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_12 = new QGridLayout(groupBox_2);
        gridLayout_12->setSpacing(6);
        gridLayout_12->setContentsMargins(11, 11, 11, 11);
        gridLayout_12->setObjectName(QStringLiteral("gridLayout_12"));
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QLatin1String("font-size:25px;\n"
"color:white;\n"
"font-weight:bold;"));

        horizontalLayout_12->addWidget(label_2);

        label_longitude = new QLabel(groupBox_2);
        label_longitude->setObjectName(QStringLiteral("label_longitude"));
        label_longitude->setStyleSheet(QLatin1String("font-size:25px;\n"
"color:white;\n"
"font-weight:bold;"));

        horizontalLayout_12->addWidget(label_longitude);


        gridLayout_12->addLayout(horizontalLayout_12, 0, 0, 1, 1);


        gridLayout_13->addWidget(groupBox_2, 1, 0, 1, 1);


        verticalLayout_3->addWidget(groupBox_42);

        groupBox_43 = new QGroupBox(groupBox_3);
        groupBox_43->setObjectName(QStringLiteral("groupBox_43"));
        gridLayout_14 = new QGridLayout(groupBox_43);
        gridLayout_14->setSpacing(6);
        gridLayout_14->setContentsMargins(11, 11, 11, 11);
        gridLayout_14->setObjectName(QStringLiteral("gridLayout_14"));
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        label_3 = new QLabel(groupBox_43);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setStyleSheet(QLatin1String("font-size:25px;\n"
"color:white;\n"
"font-weight:bold;"));

        horizontalLayout_13->addWidget(label_3);

        label_speed = new QLabel(groupBox_43);
        label_speed->setObjectName(QStringLiteral("label_speed"));
        label_speed->setStyleSheet(QLatin1String("font-size:25px;\n"
"color:white;\n"
"font-weight:bold;"));

        horizontalLayout_13->addWidget(label_speed);


        gridLayout_14->addLayout(horizontalLayout_13, 0, 0, 1, 1);


        verticalLayout_3->addWidget(groupBox_43);


        horizontalLayout->addWidget(groupBox_3);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        gridLayout_2 = new QGridLayout(tab_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        groupBox_24 = new QGroupBox(tab_2);
        groupBox_24->setObjectName(QStringLiteral("groupBox_24"));
        gridLayout_25 = new QGridLayout(groupBox_24);
        gridLayout_25->setSpacing(6);
        gridLayout_25->setContentsMargins(11, 11, 11, 11);
        gridLayout_25->setObjectName(QStringLiteral("gridLayout_25"));
        verticalLayout_Pitch = new QVBoxLayout();
        verticalLayout_Pitch->setSpacing(6);
        verticalLayout_Pitch->setObjectName(QStringLiteral("verticalLayout_Pitch"));

        gridLayout_25->addLayout(verticalLayout_Pitch, 0, 0, 1, 1);


        horizontalLayout_6->addWidget(groupBox_24);

        groupBox_25 = new QGroupBox(tab_2);
        groupBox_25->setObjectName(QStringLiteral("groupBox_25"));
        gridLayout_26 = new QGridLayout(groupBox_25);
        gridLayout_26->setSpacing(6);
        gridLayout_26->setContentsMargins(11, 11, 11, 11);
        gridLayout_26->setObjectName(QStringLiteral("gridLayout_26"));
        verticalLayout_roll = new QVBoxLayout();
        verticalLayout_roll->setSpacing(6);
        verticalLayout_roll->setObjectName(QStringLiteral("verticalLayout_roll"));

        gridLayout_26->addLayout(verticalLayout_roll, 0, 0, 1, 1);


        horizontalLayout_6->addWidget(groupBox_25);

        groupBox_26 = new QGroupBox(tab_2);
        groupBox_26->setObjectName(QStringLiteral("groupBox_26"));
        gridLayout_31 = new QGridLayout(groupBox_26);
        gridLayout_31->setSpacing(6);
        gridLayout_31->setContentsMargins(11, 11, 11, 11);
        gridLayout_31->setObjectName(QStringLiteral("gridLayout_31"));
        groupBox_47 = new QGroupBox(groupBox_26);
        groupBox_47->setObjectName(QStringLiteral("groupBox_47"));
        gridLayout_30 = new QGridLayout(groupBox_47);
        gridLayout_30->setSpacing(6);
        gridLayout_30->setContentsMargins(11, 11, 11, 11);
        gridLayout_30->setObjectName(QStringLiteral("gridLayout_30"));
        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setSpacing(6);
        horizontalLayout_17->setObjectName(QStringLiteral("horizontalLayout_17"));
        label_33 = new QLabel(groupBox_47);
        label_33->setObjectName(QStringLiteral("label_33"));
        label_33->setStyleSheet(QLatin1String("font-size:25px;\n"
"color:white;\n"
"font-weight:bold;"));

        horizontalLayout_17->addWidget(label_33);

        label_Roll = new QLabel(groupBox_47);
        label_Roll->setObjectName(QStringLiteral("label_Roll"));
        label_Roll->setStyleSheet(QLatin1String("font-size:25px;\n"
"color:white;\n"
"font-weight:bold;"));

        horizontalLayout_17->addWidget(label_Roll);


        gridLayout_30->addLayout(horizontalLayout_17, 0, 0, 1, 1);


        gridLayout_31->addWidget(groupBox_47, 1, 0, 1, 1);

        groupBox_44 = new QGroupBox(groupBox_26);
        groupBox_44->setObjectName(QStringLiteral("groupBox_44"));
        gridLayout_27 = new QGridLayout(groupBox_44);
        gridLayout_27->setSpacing(6);
        gridLayout_27->setContentsMargins(11, 11, 11, 11);
        gridLayout_27->setObjectName(QStringLiteral("gridLayout_27"));
        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setSpacing(6);
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        label_31 = new QLabel(groupBox_44);
        label_31->setObjectName(QStringLiteral("label_31"));
        label_31->setStyleSheet(QLatin1String("font-size:25px;\n"
"color:white;\n"
"font-weight:bold;"));

        horizontalLayout_16->addWidget(label_31);

        label_Pitch = new QLabel(groupBox_44);
        label_Pitch->setObjectName(QStringLiteral("label_Pitch"));
        label_Pitch->setStyleSheet(QLatin1String("font-size:25px;\n"
"color:white;\n"
"font-weight:bold;"));

        horizontalLayout_16->addWidget(label_Pitch);


        gridLayout_27->addLayout(horizontalLayout_16, 0, 0, 1, 1);


        gridLayout_31->addWidget(groupBox_44, 0, 0, 1, 1);


        horizontalLayout_6->addWidget(groupBox_26);


        gridLayout_2->addLayout(horizontalLayout_6, 0, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        gridLayout_4 = new QGridLayout(tab_4);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        groupBox_30 = new QGroupBox(tab_4);
        groupBox_30->setObjectName(QStringLiteral("groupBox_30"));
        gridLayout_33 = new QGridLayout(groupBox_30);
        gridLayout_33->setSpacing(6);
        gridLayout_33->setContentsMargins(11, 11, 11, 11);
        gridLayout_33->setObjectName(QStringLiteral("gridLayout_33"));
        verticalLayout_WindSpeed = new QVBoxLayout();
        verticalLayout_WindSpeed->setSpacing(6);
        verticalLayout_WindSpeed->setObjectName(QStringLiteral("verticalLayout_WindSpeed"));

        gridLayout_33->addLayout(verticalLayout_WindSpeed, 0, 0, 1, 1);


        horizontalLayout_8->addWidget(groupBox_30);

        groupBox_31 = new QGroupBox(tab_4);
        groupBox_31->setObjectName(QStringLiteral("groupBox_31"));
        verticalLayout_5 = new QVBoxLayout(groupBox_31);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_windDirection = new QVBoxLayout();
        verticalLayout_windDirection->setSpacing(6);
        verticalLayout_windDirection->setObjectName(QStringLiteral("verticalLayout_windDirection"));

        verticalLayout_5->addLayout(verticalLayout_windDirection);


        horizontalLayout_8->addWidget(groupBox_31);

        groupBox_32 = new QGroupBox(tab_4);
        groupBox_32->setObjectName(QStringLiteral("groupBox_32"));
        verticalLayout_4 = new QVBoxLayout(groupBox_32);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        groupBox_45 = new QGroupBox(groupBox_32);
        groupBox_45->setObjectName(QStringLiteral("groupBox_45"));
        gridLayout_28 = new QGridLayout(groupBox_45);
        gridLayout_28->setSpacing(6);
        gridLayout_28->setContentsMargins(11, 11, 11, 11);
        gridLayout_28->setObjectName(QStringLiteral("gridLayout_28"));
        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setSpacing(6);
        horizontalLayout_18->setObjectName(QStringLiteral("horizontalLayout_18"));
        label_35 = new QLabel(groupBox_45);
        label_35->setObjectName(QStringLiteral("label_35"));
        label_35->setStyleSheet(QLatin1String("font-size:25px;\n"
"color:white;\n"
"font-weight:bold;"));

        horizontalLayout_18->addWidget(label_35);

        label_windSpeed = new QLabel(groupBox_45);
        label_windSpeed->setObjectName(QStringLiteral("label_windSpeed"));
        label_windSpeed->setStyleSheet(QLatin1String("font-size:25px;\n"
"color:white;\n"
"font-weight:bold;"));

        horizontalLayout_18->addWidget(label_windSpeed);


        gridLayout_28->addLayout(horizontalLayout_18, 0, 0, 1, 1);


        verticalLayout_2->addWidget(groupBox_45);


        verticalLayout_4->addLayout(verticalLayout_2);

        groupBox_46 = new QGroupBox(groupBox_32);
        groupBox_46->setObjectName(QStringLiteral("groupBox_46"));
        gridLayout_29 = new QGridLayout(groupBox_46);
        gridLayout_29->setSpacing(6);
        gridLayout_29->setContentsMargins(11, 11, 11, 11);
        gridLayout_29->setObjectName(QStringLiteral("gridLayout_29"));
        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setSpacing(6);
        horizontalLayout_19->setObjectName(QStringLiteral("horizontalLayout_19"));
        label_37 = new QLabel(groupBox_46);
        label_37->setObjectName(QStringLiteral("label_37"));
        label_37->setStyleSheet(QLatin1String("font-size:25px;\n"
"color:white;\n"
"font-weight:bold;"));

        horizontalLayout_19->addWidget(label_37);

        label_WindDirection = new QLabel(groupBox_46);
        label_WindDirection->setObjectName(QStringLiteral("label_WindDirection"));
        label_WindDirection->setStyleSheet(QLatin1String("font-size:25px;\n"
"color:white;\n"
"font-weight:bold;"));

        horizontalLayout_19->addWidget(label_WindDirection);


        gridLayout_29->addLayout(horizontalLayout_19, 0, 0, 1, 1);


        verticalLayout_4->addWidget(groupBox_46);


        horizontalLayout_8->addWidget(groupBox_32);


        gridLayout_4->addLayout(horizontalLayout_8, 0, 0, 1, 1);

        tabWidget->addTab(tab_4, QString());

        verticalLayout->addWidget(tabWidget);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        groupBox_7 = new QGroupBox(centralWidget);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        gridLayout_3 = new QGridLayout(groupBox_7);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        groupBox_23 = new QGroupBox(groupBox_7);
        groupBox_23->setObjectName(QStringLiteral("groupBox_23"));
        groupBox_23->setMaximumSize(QSize(16777215, 16777215));
        gridLayout_19 = new QGridLayout(groupBox_23);
        gridLayout_19->setSpacing(6);
        gridLayout_19->setContentsMargins(11, 11, 11, 11);
        gridLayout_19->setObjectName(QStringLiteral("gridLayout_19"));
        label_15 = new QLabel(groupBox_23);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setStyleSheet(QLatin1String("font-size:12px;\n"
"color:white;\n"
"font-weight:bold;"));

        gridLayout_19->addWidget(label_15, 0, 0, 1, 1);

        label_Destination_Bearing = new QLabel(groupBox_23);
        label_Destination_Bearing->setObjectName(QStringLiteral("label_Destination_Bearing"));
        label_Destination_Bearing->setMaximumSize(QSize(16777215, 50));
        label_Destination_Bearing->setStyleSheet(QLatin1String("font-size:12px;\n"
"color:white;\n"
"font-weight:bold;"));

        gridLayout_19->addWidget(label_Destination_Bearing, 0, 1, 1, 1);


        gridLayout_3->addWidget(groupBox_23, 0, 0, 1, 1);


        horizontalLayout_3->addWidget(groupBox_7);

        groupBox_4 = new QGroupBox(centralWidget);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        gridLayout_5 = new QGridLayout(groupBox_4);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        groupBox_6 = new QGroupBox(groupBox_4);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        formLayout_2 = new QFormLayout(groupBox_6);
        formLayout_2->setSpacing(6);
        formLayout_2->setContentsMargins(11, 11, 11, 11);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        label_23 = new QLabel(groupBox_6);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setStyleSheet(QLatin1String("font-size:12px;\n"
"color:white;\n"
"font-weight:bold;"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_23);

        label_WayPoint_Bearing = new QLabel(groupBox_6);
        label_WayPoint_Bearing->setObjectName(QStringLiteral("label_WayPoint_Bearing"));
        label_WayPoint_Bearing->setStyleSheet(QLatin1String("font-size:12px;\n"
"color:white;\n"
"font-weight:bold;"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, label_WayPoint_Bearing);

        label_25 = new QLabel(groupBox_6);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setStyleSheet(QLatin1String("font-size:12px;\n"
"color:white;\n"
"font-weight:bold;"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_25);

        label_wayPoint_distance = new QLabel(groupBox_6);
        label_wayPoint_distance->setObjectName(QStringLiteral("label_wayPoint_distance"));
        label_wayPoint_distance->setStyleSheet(QLatin1String("font-size:12px;\n"
"color:white;\n"
"font-weight:bold;"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, label_wayPoint_distance);


        gridLayout_5->addWidget(groupBox_6, 0, 0, 1, 1);

        groupBox_5 = new QGroupBox(groupBox_4);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        formLayout = new QFormLayout(groupBox_5);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label_19 = new QLabel(groupBox_5);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setStyleSheet(QLatin1String("font-size:12px;\n"
"color:white;\n"
"font-weight:bold;"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_19);

        label_waypoint_Lat = new QLabel(groupBox_5);
        label_waypoint_Lat->setObjectName(QStringLiteral("label_waypoint_Lat"));
        label_waypoint_Lat->setStyleSheet(QLatin1String("font-size:12px;\n"
"color:white;\n"
"font-weight:bold;"));

        formLayout->setWidget(0, QFormLayout::FieldRole, label_waypoint_Lat);

        label_21 = new QLabel(groupBox_5);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setStyleSheet(QLatin1String("font-size:12px;\n"
"color:white;\n"
"font-weight:bold;"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_21);

        label_waypoint_Long = new QLabel(groupBox_5);
        label_waypoint_Long->setObjectName(QStringLiteral("label_waypoint_Long"));
        label_waypoint_Long->setStyleSheet(QLatin1String("font-size:12px;\n"
"color:white;\n"
"font-weight:bold;"));

        formLayout->setWidget(1, QFormLayout::FieldRole, label_waypoint_Long);


        gridLayout_5->addWidget(groupBox_5, 0, 1, 1, 1);

        groupBox_5->raise();
        groupBox_6->raise();

        horizontalLayout_3->addWidget(groupBox_4);

        groupBox_8 = new QGroupBox(centralWidget);
        groupBox_8->setObjectName(QStringLiteral("groupBox_8"));
        horizontalLayout_2 = new QHBoxLayout(groupBox_8);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        groupBox_22 = new QGroupBox(groupBox_8);
        groupBox_22->setObjectName(QStringLiteral("groupBox_22"));
        gridLayout_18 = new QGridLayout(groupBox_22);
        gridLayout_18->setSpacing(6);
        gridLayout_18->setContentsMargins(11, 11, 11, 11);
        gridLayout_18->setObjectName(QStringLiteral("gridLayout_18"));
        label_16 = new QLabel(groupBox_22);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setStyleSheet(QLatin1String("font-size:12px;\n"
"color:white;\n"
"font-weight:bold;"));

        gridLayout_18->addWidget(label_16, 0, 0, 1, 1);

        label_Date_Time = new QLabel(groupBox_22);
        label_Date_Time->setObjectName(QStringLiteral("label_Date_Time"));
        label_Date_Time->setStyleSheet(QLatin1String("font-size:12px;\n"
"color:white;\n"
"font-weight:bold;"));

        gridLayout_18->addWidget(label_Date_Time, 0, 1, 1, 1);


        horizontalLayout_2->addWidget(groupBox_22);

        groupBox_20 = new QGroupBox(groupBox_8);
        groupBox_20->setObjectName(QStringLiteral("groupBox_20"));
        gridLayout_16 = new QGridLayout(groupBox_20);
        gridLayout_16->setSpacing(6);
        gridLayout_16->setContentsMargins(11, 11, 11, 11);
        gridLayout_16->setObjectName(QStringLiteral("gridLayout_16"));
        label_Altitude = new QLabel(groupBox_20);
        label_Altitude->setObjectName(QStringLiteral("label_Altitude"));
        label_Altitude->setStyleSheet(QLatin1String("font-size:12px;\n"
"color:white;\n"
"font-weight:bold;"));

        gridLayout_16->addWidget(label_Altitude, 0, 1, 1, 1);

        label_12 = new QLabel(groupBox_20);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setStyleSheet(QLatin1String("font-size:12px;\n"
"color:white;\n"
"font-weight:bold;"));

        gridLayout_16->addWidget(label_12, 0, 0, 1, 1);


        horizontalLayout_2->addWidget(groupBox_20);

        groupBox_21 = new QGroupBox(groupBox_8);
        groupBox_21->setObjectName(QStringLiteral("groupBox_21"));
        gridLayout_17 = new QGridLayout(groupBox_21);
        gridLayout_17->setSpacing(6);
        gridLayout_17->setContentsMargins(11, 11, 11, 11);
        gridLayout_17->setObjectName(QStringLiteral("gridLayout_17"));
        label_rudder = new QLabel(groupBox_21);
        label_rudder->setObjectName(QStringLiteral("label_rudder"));
        label_rudder->setStyleSheet(QLatin1String("font-size:12px;\n"
"color:white;\n"
"font-weight:bold;"));

        gridLayout_17->addWidget(label_rudder, 0, 1, 1, 1);

        label_14 = new QLabel(groupBox_21);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setStyleSheet(QLatin1String("font-size:12px;\n"
"color:white;\n"
"font-weight:bold;"));

        gridLayout_17->addWidget(label_14, 0, 0, 1, 1);


        horizontalLayout_2->addWidget(groupBox_21);

        groupBox_19 = new QGroupBox(groupBox_8);
        groupBox_19->setObjectName(QStringLiteral("groupBox_19"));
        gridLayout_15 = new QGridLayout(groupBox_19);
        gridLayout_15->setSpacing(6);
        gridLayout_15->setContentsMargins(11, 11, 11, 11);
        gridLayout_15->setObjectName(QStringLiteral("gridLayout_15"));
        label_9 = new QLabel(groupBox_19);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setStyleSheet(QLatin1String("font-size:12px;\n"
"color:white;\n"
"font-weight:bold;"));

        gridLayout_15->addWidget(label_9, 0, 0, 1, 1);

        label_waterTemp = new QLabel(groupBox_19);
        label_waterTemp->setObjectName(QStringLiteral("label_waterTemp"));
        label_waterTemp->setStyleSheet(QLatin1String("font-size:12px;\n"
"color:white;\n"
"font-weight:bold;"));

        gridLayout_15->addWidget(label_waterTemp, 0, 1, 1, 1);


        horizontalLayout_2->addWidget(groupBox_19);


        horizontalLayout_3->addWidget(groupBox_8);


        verticalLayout->addLayout(horizontalLayout_3);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1224, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        groupBox_gyrometer->setTitle(QApplication::translate("MainWindow", "Gyrometer", 0));
        groupBox_gyrometer_logmeter->setTitle(QApplication::translate("MainWindow", "Logmeter", 0));
        groupBox_3->setTitle(QString());
        groupBox_42->setTitle(QString());
        groupBox->setTitle(QApplication::translate("MainWindow", "Gyro Reading", 0));
        label->setText(QApplication::translate("MainWindow", "Latitude:", 0));
        label_latitude->setText(QString());
        groupBox_2->setTitle(QString());
        label_2->setText(QApplication::translate("MainWindow", "Longitude:", 0));
        label_longitude->setText(QString());
        groupBox_43->setTitle(QApplication::translate("MainWindow", "Log Meter Reading", 0));
        label_3->setText(QApplication::translate("MainWindow", "Speed:", 0));
        label_speed->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Gyro/Log Data", 0));
        groupBox_24->setTitle(QApplication::translate("MainWindow", "Pitch", 0));
        groupBox_25->setTitle(QApplication::translate("MainWindow", "Roll", 0));
        groupBox_26->setTitle(QString());
        groupBox_47->setTitle(QApplication::translate("MainWindow", "Roll Reading", 0));
        label_33->setText(QApplication::translate("MainWindow", "Roll:", 0));
        label_Roll->setText(QString());
        groupBox_44->setTitle(QApplication::translate("MainWindow", "Pitch Reading", 0));
        label_31->setText(QApplication::translate("MainWindow", "Pitch:", 0));
        label_Pitch->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Pitch/Roll Data", 0));
        groupBox_30->setTitle(QApplication::translate("MainWindow", "Wind Speed", 0));
        groupBox_31->setTitle(QApplication::translate("MainWindow", "Wind Direction", 0));
        groupBox_32->setTitle(QString());
        groupBox_45->setTitle(QApplication::translate("MainWindow", "Wind Reading", 0));
        label_35->setText(QApplication::translate("MainWindow", "Wind Speed:", 0));
        label_windSpeed->setText(QString());
        groupBox_46->setTitle(QApplication::translate("MainWindow", "Wind Reading", 0));
        label_37->setText(QApplication::translate("MainWindow", "Wind Direction:", 0));
        label_WindDirection->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow", "Wind Data", 0));
        groupBox_7->setTitle(QApplication::translate("MainWindow", "Destination", 0));
        groupBox_23->setTitle(QString());
        label_15->setText(QApplication::translate("MainWindow", "Bearing:", 0));
        label_Destination_Bearing->setText(QString());
        groupBox_4->setTitle(QApplication::translate("MainWindow", "WayPoint", 0));
        groupBox_6->setTitle(QString());
        label_23->setText(QApplication::translate("MainWindow", "Bearing:", 0));
        label_WayPoint_Bearing->setText(QString());
        label_25->setText(QApplication::translate("MainWindow", "Range  :", 0));
        label_wayPoint_distance->setText(QString());
        groupBox_5->setTitle(QString());
        label_19->setText(QApplication::translate("MainWindow", "Lat  :", 0));
        label_waypoint_Lat->setText(QString());
        label_21->setText(QApplication::translate("MainWindow", "Long:", 0));
        label_waypoint_Long->setText(QString());
        groupBox_8->setTitle(QString());
        groupBox_22->setTitle(QString());
        label_16->setText(QApplication::translate("MainWindow", "Current Time:", 0));
        label_Date_Time->setText(QString());
        groupBox_20->setTitle(QString());
        label_Altitude->setText(QString());
        label_12->setText(QApplication::translate("MainWindow", "Alt. :", 0));
        groupBox_21->setTitle(QString());
        label_rudder->setText(QString());
        label_14->setText(QApplication::translate("MainWindow", "Rudder:", 0));
        groupBox_19->setTitle(QString());
        label_9->setText(QApplication::translate("MainWindow", "Water temp:", 0));
        label_waterTemp->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
