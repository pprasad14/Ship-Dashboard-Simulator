/****************************************************************************
** Meta object code from reading C++ file 'nmeaparser.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../nmeaparser.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'nmeaparser.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_NMEAParser_t {
    QByteArrayData data[23];
    char stringdata0[325];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NMEAParser_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NMEAParser_t qt_meta_stringdata_NMEAParser = {
    {
QT_MOC_LITERAL(0, 0, 10), // "NMEAParser"
QT_MOC_LITERAL(1, 11, 10), // "sigLogData"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 5), // "value"
QT_MOC_LITERAL(4, 29, 11), // "sigGyroData"
QT_MOC_LITERAL(5, 41, 16), // "sigWindSpeedData"
QT_MOC_LITERAL(6, 58, 20), // "sigWindDirectionData"
QT_MOC_LITERAL(7, 79, 12), // "sigPitchData"
QT_MOC_LITERAL(8, 92, 11), // "sigRollData"
QT_MOC_LITERAL(9, 104, 17), // "sigWaterDepthData"
QT_MOC_LITERAL(10, 122, 16), // "sigWaterTempData"
QT_MOC_LITERAL(11, 139, 19), // "sigRudderAnglepData"
QT_MOC_LITERAL(12, 159, 15), // "sigAltitudeData"
QT_MOC_LITERAL(13, 175, 30), // "sigBearingOrgtoDestinationData"
QT_MOC_LITERAL(14, 206, 24), // "sigBearingtoWayPointData"
QT_MOC_LITERAL(15, 231, 7), // "bearing"
QT_MOC_LITERAL(16, 239, 5), // "range"
QT_MOC_LITERAL(17, 245, 18), // "sigDateAndTimeData"
QT_MOC_LITERAL(18, 264, 23), // "sigWayPointLocationData"
QT_MOC_LITERAL(19, 288, 3), // "lat"
QT_MOC_LITERAL(20, 292, 5), // "longt"
QT_MOC_LITERAL(21, 298, 13), // "slotParseNmea"
QT_MOC_LITERAL(22, 312, 12) // "nmeaSentence"

    },
    "NMEAParser\0sigLogData\0\0value\0sigGyroData\0"
    "sigWindSpeedData\0sigWindDirectionData\0"
    "sigPitchData\0sigRollData\0sigWaterDepthData\0"
    "sigWaterTempData\0sigRudderAnglepData\0"
    "sigAltitudeData\0sigBearingOrgtoDestinationData\0"
    "sigBearingtoWayPointData\0bearing\0range\0"
    "sigDateAndTimeData\0sigWayPointLocationData\0"
    "lat\0longt\0slotParseNmea\0nmeaSentence"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NMEAParser[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      14,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   89,    2, 0x06 /* Public */,
       4,    3,   92,    2, 0x06 /* Public */,
       5,    1,   99,    2, 0x06 /* Public */,
       6,    1,  102,    2, 0x06 /* Public */,
       7,    1,  105,    2, 0x06 /* Public */,
       8,    1,  108,    2, 0x06 /* Public */,
       9,    1,  111,    2, 0x06 /* Public */,
      10,    1,  114,    2, 0x06 /* Public */,
      11,    1,  117,    2, 0x06 /* Public */,
      12,    1,  120,    2, 0x06 /* Public */,
      13,    1,  123,    2, 0x06 /* Public */,
      14,    2,  126,    2, 0x06 /* Public */,
      17,    1,  131,    2, 0x06 /* Public */,
      18,    2,  134,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      21,    1,  139,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QString,    3,    2,    2,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   15,   16,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   19,   20,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,   22,

       0        // eod
};

void NMEAParser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        NMEAParser *_t = static_cast<NMEAParser *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sigLogData((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->sigGyroData((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 2: _t->sigWindSpeedData((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->sigWindDirectionData((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->sigPitchData((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->sigRollData((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->sigWaterDepthData((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->sigWaterTempData((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->sigRudderAnglepData((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->sigAltitudeData((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->sigBearingOrgtoDestinationData((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: _t->sigBearingtoWayPointData((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 12: _t->sigDateAndTimeData((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 13: _t->sigWayPointLocationData((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 14: _t->slotParseNmea((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (NMEAParser::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NMEAParser::sigLogData)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (NMEAParser::*_t)(int , QString , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NMEAParser::sigGyroData)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (NMEAParser::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NMEAParser::sigWindSpeedData)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (NMEAParser::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NMEAParser::sigWindDirectionData)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (NMEAParser::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NMEAParser::sigPitchData)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (NMEAParser::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NMEAParser::sigRollData)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (NMEAParser::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NMEAParser::sigWaterDepthData)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (NMEAParser::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NMEAParser::sigWaterTempData)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (NMEAParser::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NMEAParser::sigRudderAnglepData)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (NMEAParser::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NMEAParser::sigAltitudeData)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (NMEAParser::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NMEAParser::sigBearingOrgtoDestinationData)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (NMEAParser::*_t)(QString , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NMEAParser::sigBearingtoWayPointData)) {
                *result = 11;
                return;
            }
        }
        {
            typedef void (NMEAParser::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NMEAParser::sigDateAndTimeData)) {
                *result = 12;
                return;
            }
        }
        {
            typedef void (NMEAParser::*_t)(QString , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NMEAParser::sigWayPointLocationData)) {
                *result = 13;
                return;
            }
        }
    }
}

const QMetaObject NMEAParser::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_NMEAParser.data,
      qt_meta_data_NMEAParser,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *NMEAParser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NMEAParser::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_NMEAParser.stringdata0))
        return static_cast<void*>(const_cast< NMEAParser*>(this));
    return QObject::qt_metacast(_clname);
}

int NMEAParser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void NMEAParser::sigLogData(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void NMEAParser::sigGyroData(int _t1, QString _t2, QString _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void NMEAParser::sigWindSpeedData(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void NMEAParser::sigWindDirectionData(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void NMEAParser::sigPitchData(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void NMEAParser::sigRollData(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void NMEAParser::sigWaterDepthData(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void NMEAParser::sigWaterTempData(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void NMEAParser::sigRudderAnglepData(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void NMEAParser::sigAltitudeData(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void NMEAParser::sigBearingOrgtoDestinationData(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void NMEAParser::sigBearingtoWayPointData(QString _t1, QString _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void NMEAParser::sigDateAndTimeData(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void NMEAParser::sigWayPointLocationData(QString _t1, QString _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}
QT_END_MOC_NAMESPACE
