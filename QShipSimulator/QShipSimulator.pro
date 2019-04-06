#-------------------------------------------------
#
# Project created by QtCreator 2015-04-21T20:41:37
#
#-------------------------------------------------

QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QShipSimulator
TEMPLATE = app


SOURCES += main.cpp\
        shipsimulator.cpp \
    heading_taperepeater.cpp \
    checksum.cpp \
    speed_logmeter.cpp \
    position_gyrometer.cpp \
    udp_nmea.cpp \
    pitchroll.cpp \
    windspeedindicator.cpp \
    miscnmea.cpp

HEADERS  += shipsimulator.h \
    heading_taperepeater.h \
    checksum.h \
    speed_logmeter.h \
    position_gyrometer.h \
    udp_nmea.h \
    pitchroll.h \
    windspeedindicator.h \
    miscnmea.h

FORMS    += shipsimulator.ui
