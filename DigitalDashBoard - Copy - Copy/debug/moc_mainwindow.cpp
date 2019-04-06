/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[28];
    char stringdata0[403];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 9), // "readyRead"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 12), // "slotGyroData"
QT_MOC_LITERAL(4, 35, 5), // "value"
QT_MOC_LITERAL(5, 41, 3), // "lat"
QT_MOC_LITERAL(6, 45, 3), // "lon"
QT_MOC_LITERAL(7, 49, 13), // "slotPitchData"
QT_MOC_LITERAL(8, 63, 11), // "slotLogData"
QT_MOC_LITERAL(9, 75, 12), // "slotRollData"
QT_MOC_LITERAL(10, 88, 17), // "slotWindSpeedData"
QT_MOC_LITERAL(11, 106, 21), // "slotWindDirectionData"
QT_MOC_LITERAL(12, 128, 17), // "slotWaterTempData"
QT_MOC_LITERAL(13, 146, 19), // "slotOutsideTempData"
QT_MOC_LITERAL(14, 166, 19), // "slotRudderAngleData"
QT_MOC_LITERAL(15, 186, 24), // "slotWayPointLocationData"
QT_MOC_LITERAL(16, 211, 5), // "longt"
QT_MOC_LITERAL(17, 217, 24), // "slotWayPointRangeBearing"
QT_MOC_LITERAL(18, 242, 7), // "bearing"
QT_MOC_LITERAL(19, 250, 5), // "range"
QT_MOC_LITERAL(20, 256, 16), // "slotAltitudeData"
QT_MOC_LITERAL(21, 273, 8), // "altitude"
QT_MOC_LITERAL(22, 282, 23), // "slotOutsideHumidityData"
QT_MOC_LITERAL(23, 306, 18), // "slotWaterDepthData"
QT_MOC_LITERAL(24, 325, 18), // "slotRateOfTempData"
QT_MOC_LITERAL(25, 344, 19), // "slotTransitPosition"
QT_MOC_LITERAL(26, 364, 15), // "slotDateAndTime"
QT_MOC_LITERAL(27, 380, 22) // "slotDestinationBearing"

    },
    "MainWindow\0readyRead\0\0slotGyroData\0"
    "value\0lat\0lon\0slotPitchData\0slotLogData\0"
    "slotRollData\0slotWindSpeedData\0"
    "slotWindDirectionData\0slotWaterTempData\0"
    "slotOutsideTempData\0slotRudderAngleData\0"
    "slotWayPointLocationData\0longt\0"
    "slotWayPointRangeBearing\0bearing\0range\0"
    "slotAltitudeData\0altitude\0"
    "slotOutsideHumidityData\0slotWaterDepthData\0"
    "slotRateOfTempData\0slotTransitPosition\0"
    "slotDateAndTime\0slotDestinationBearing"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  109,    2, 0x0a /* Public */,
       3,    3,  110,    2, 0x0a /* Public */,
       7,    1,  117,    2, 0x0a /* Public */,
       8,    1,  120,    2, 0x0a /* Public */,
       9,    1,  123,    2, 0x0a /* Public */,
      10,    1,  126,    2, 0x0a /* Public */,
      11,    1,  129,    2, 0x0a /* Public */,
      12,    1,  132,    2, 0x0a /* Public */,
      13,    1,  135,    2, 0x0a /* Public */,
      14,    1,  138,    2, 0x0a /* Public */,
      15,    2,  141,    2, 0x0a /* Public */,
      17,    2,  146,    2, 0x0a /* Public */,
      20,    1,  151,    2, 0x0a /* Public */,
      22,    1,  154,    2, 0x0a /* Public */,
      23,    1,  157,    2, 0x0a /* Public */,
      24,    1,  160,    2, 0x0a /* Public */,
      25,    1,  163,    2, 0x0a /* Public */,
      26,    1,  166,    2, 0x0a /* Public */,
      27,    1,  169,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QString,    4,    5,    6,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    5,   16,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   18,   19,
    QMetaType::Void, QMetaType::QString,   21,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->readyRead(); break;
        case 1: _t->slotGyroData((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 2: _t->slotPitchData((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->slotLogData((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->slotRollData((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->slotWindSpeedData((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->slotWindDirectionData((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->slotWaterTempData((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->slotOutsideTempData((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->slotRudderAngleData((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->slotWayPointLocationData((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 11: _t->slotWayPointRangeBearing((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 12: _t->slotAltitudeData((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 13: _t->slotOutsideHumidityData((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 14: _t->slotWaterDepthData((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 15: _t->slotRateOfTempData((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 16: _t->slotTransitPosition((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 17: _t->slotDateAndTime((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 18: _t->slotDestinationBearing((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 19;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
