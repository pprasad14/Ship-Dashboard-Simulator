

QT       += core gui network multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = DigitalDashBoard
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    Dial/qcgaugewidget.cpp \
    nmeaparser.cpp

HEADERS  += mainwindow.h \
    Dial/qcgaugewidget.h \
    nmeaparser.h

FORMS    += mainwindow.ui

RESOURCES += \
    res.qrc
