#-------------------------------------------------
#
# Project created by QtCreator 2017-05-T11:20:51
#
#-------------------------------------------------

QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = NavigationalDashboard
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    taperepeater.cpp \
    logmeter.cpp \
    parsenmea.cpp \
    gyrometer.cpp \
    pitchmeter.cpp \
    rollmeter.cpp \
    windspeedindicator.cpp \
    windspeedrelativeindicator.cpp

HEADERS  += mainwindow.h \
    taperepeater.h \
    logmeter.h \
    parsenmea.h \
    gyrometer.h \
    pitchmeter.h \
    rollmeter.h \
    windspeedindicator.h \
    windspeedrelativeindicator.h

FORMS    += mainwindow.ui
