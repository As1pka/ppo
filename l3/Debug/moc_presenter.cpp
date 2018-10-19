/****************************************************************************
** Meta object code from reading C++ file 'presenter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../presenter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'presenter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Presenter_t {
    QByteArrayData data[57];
    char stringdata0[715];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Presenter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Presenter_t qt_meta_stringdata_Presenter = {
    {
QT_MOC_LITERAL(0, 0, 9), // "Presenter"
QT_MOC_LITERAL(1, 10, 19), // "letsAddInRouteTable"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 10), // "Properties"
QT_MOC_LITERAL(4, 42, 5), // "route"
QT_MOC_LITERAL(5, 48, 3), // "ind"
QT_MOC_LITERAL(6, 52, 21), // "letsDelFromRouteTable"
QT_MOC_LITERAL(7, 74, 19), // "letsAddInTrackTable"
QT_MOC_LITERAL(8, 94, 14), // "QGeoCoordinate"
QT_MOC_LITERAL(9, 109, 5), // "point"
QT_MOC_LITERAL(10, 115, 21), // "letsDelFromTrackTable"
QT_MOC_LITERAL(11, 137, 22), // "letsChangePointInTable"
QT_MOC_LITERAL(12, 160, 15), // "letsSetPolyline"
QT_MOC_LITERAL(13, 176, 8), // "polyline"
QT_MOC_LITERAL(14, 185, 18), // "letsUpdateDistance"
QT_MOC_LITERAL(15, 204, 8), // "distance"
QT_MOC_LITERAL(16, 213, 20), // "letsUpdateTrackTable"
QT_MOC_LITERAL(17, 234, 21), // "QList<QGeoCoordinate>"
QT_MOC_LITERAL(18, 256, 5), // "track"
QT_MOC_LITERAL(19, 262, 24), // "letsUpdateAltitudesGraph"
QT_MOC_LITERAL(20, 287, 15), // "QVector<double>"
QT_MOC_LITERAL(21, 303, 9), // "altitudes"
QT_MOC_LITERAL(22, 313, 6), // "points"
QT_MOC_LITERAL(23, 320, 13), // "letsShowError"
QT_MOC_LITERAL(24, 334, 3), // "msg"
QT_MOC_LITERAL(25, 338, 14), // "letsAddCommand"
QT_MOC_LITERAL(26, 353, 8), // "Command*"
QT_MOC_LITERAL(27, 362, 1), // "c"
QT_MOC_LITERAL(28, 364, 8), // "letsRedo"
QT_MOC_LITERAL(29, 373, 8), // "letsUndo"
QT_MOC_LITERAL(30, 382, 9), // "letsParse"
QT_MOC_LITERAL(31, 392, 6), // "QFile&"
QT_MOC_LITERAL(32, 399, 7), // "gpxFile"
QT_MOC_LITERAL(33, 407, 11), // "openGpxFile"
QT_MOC_LITERAL(34, 419, 12), // "saveNewRoute"
QT_MOC_LITERAL(35, 432, 5), // "Route"
QT_MOC_LITERAL(36, 438, 1), // "r"
QT_MOC_LITERAL(37, 440, 8), // "addRoute"
QT_MOC_LITERAL(38, 449, 8), // "delRoute"
QT_MOC_LITERAL(39, 458, 16), // "setSelectedRoute"
QT_MOC_LITERAL(40, 475, 16), // "setSelectedPoint"
QT_MOC_LITERAL(41, 492, 15), // "updateRouteName"
QT_MOC_LITERAL(42, 508, 4), // "name"
QT_MOC_LITERAL(43, 513, 14), // "updateDistance"
QT_MOC_LITERAL(44, 528, 17), // "delRouteFromTable"
QT_MOC_LITERAL(45, 546, 17), // "delPointFromTable"
QT_MOC_LITERAL(46, 564, 15), // "addRouteInTable"
QT_MOC_LITERAL(47, 580, 15), // "addPointInTable"
QT_MOC_LITERAL(48, 596, 18), // "changePointInTable"
QT_MOC_LITERAL(49, 615, 17), // "fillAltitudeGraph"
QT_MOC_LITERAL(50, 633, 14), // "fillTrackTable"
QT_MOC_LITERAL(51, 648, 12), // "fillPolyline"
QT_MOC_LITERAL(52, 661, 8), // "addPoint"
QT_MOC_LITERAL(53, 670, 8), // "delPoint"
QT_MOC_LITERAL(54, 679, 11), // "changePoint"
QT_MOC_LITERAL(55, 691, 11), // "redoTrigger"
QT_MOC_LITERAL(56, 703, 11) // "undoTrigger"

    },
    "Presenter\0letsAddInRouteTable\0\0"
    "Properties\0route\0ind\0letsDelFromRouteTable\0"
    "letsAddInTrackTable\0QGeoCoordinate\0"
    "point\0letsDelFromTrackTable\0"
    "letsChangePointInTable\0letsSetPolyline\0"
    "polyline\0letsUpdateDistance\0distance\0"
    "letsUpdateTrackTable\0QList<QGeoCoordinate>\0"
    "track\0letsUpdateAltitudesGraph\0"
    "QVector<double>\0altitudes\0points\0"
    "letsShowError\0msg\0letsAddCommand\0"
    "Command*\0c\0letsRedo\0letsUndo\0letsParse\0"
    "QFile&\0gpxFile\0openGpxFile\0saveNewRoute\0"
    "Route\0r\0addRoute\0delRoute\0setSelectedRoute\0"
    "setSelectedPoint\0updateRouteName\0name\0"
    "updateDistance\0delRouteFromTable\0"
    "delPointFromTable\0addRouteInTable\0"
    "addPointInTable\0changePointInTable\0"
    "fillAltitudeGraph\0fillTrackTable\0"
    "fillPolyline\0addPoint\0delPoint\0"
    "changePoint\0redoTrigger\0undoTrigger"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Presenter[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      35,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      14,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,  189,    2, 0x06 /* Public */,
       6,    1,  194,    2, 0x06 /* Public */,
       7,    2,  197,    2, 0x06 /* Public */,
      10,    1,  202,    2, 0x06 /* Public */,
      11,    2,  205,    2, 0x06 /* Public */,
      12,    1,  210,    2, 0x06 /* Public */,
      14,    2,  213,    2, 0x06 /* Public */,
      16,    1,  218,    2, 0x06 /* Public */,
      19,    2,  221,    2, 0x06 /* Public */,
      23,    1,  226,    2, 0x06 /* Public */,
      25,    1,  229,    2, 0x06 /* Public */,
      28,    0,  232,    2, 0x06 /* Public */,
      29,    0,  233,    2, 0x06 /* Public */,
      30,    1,  234,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      33,    0,  237,    2, 0x0a /* Public */,
      34,    1,  238,    2, 0x0a /* Public */,
      37,    1,  241,    2, 0x0a /* Public */,
      38,    0,  244,    2, 0x0a /* Public */,
      39,    1,  245,    2, 0x0a /* Public */,
      40,    1,  248,    2, 0x0a /* Public */,
      41,    1,  251,    2, 0x0a /* Public */,
      43,    2,  254,    2, 0x0a /* Public */,
      44,    1,  259,    2, 0x0a /* Public */,
      45,    1,  262,    2, 0x0a /* Public */,
      46,    2,  265,    2, 0x0a /* Public */,
      47,    2,  270,    2, 0x0a /* Public */,
      48,    2,  275,    2, 0x0a /* Public */,
      49,    1,  280,    2, 0x0a /* Public */,
      50,    1,  283,    2, 0x0a /* Public */,
      51,    1,  286,    2, 0x0a /* Public */,
      52,    0,  289,    2, 0x0a /* Public */,
      53,    0,  290,    2, 0x0a /* Public */,
      54,    1,  291,    2, 0x0a /* Public */,
      55,    0,  294,    2, 0x0a /* Public */,
      56,    0,  295,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Int,    9,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Int,    9,    5,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::Double, QMetaType::Int,   15,    5,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void, 0x80000000 | 20, 0x80000000 | 20,   21,   22,
    QMetaType::Void, QMetaType::QString,   24,
    QMetaType::Void, 0x80000000 | 26,   27,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 31,   32,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 35,   36,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::QString,   42,
    QMetaType::Void, QMetaType::Double, QMetaType::Int,   15,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,    5,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Int,    9,    5,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Int,    9,    5,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Presenter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Presenter *_t = static_cast<Presenter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->letsAddInRouteTable((*reinterpret_cast< const Properties(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2]))); break;
        case 1: _t->letsDelFromRouteTable((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 2: _t->letsAddInTrackTable((*reinterpret_cast< const QGeoCoordinate(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2]))); break;
        case 3: _t->letsDelFromTrackTable((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 4: _t->letsChangePointInTable((*reinterpret_cast< const QGeoCoordinate(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2]))); break;
        case 5: _t->letsSetPolyline((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->letsUpdateDistance((*reinterpret_cast< const double(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2]))); break;
        case 7: _t->letsUpdateTrackTable((*reinterpret_cast< const QList<QGeoCoordinate>(*)>(_a[1]))); break;
        case 8: _t->letsUpdateAltitudesGraph((*reinterpret_cast< const QVector<double>(*)>(_a[1])),(*reinterpret_cast< const QVector<double>(*)>(_a[2]))); break;
        case 9: _t->letsShowError((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->letsAddCommand((*reinterpret_cast< Command*(*)>(_a[1]))); break;
        case 11: _t->letsRedo(); break;
        case 12: _t->letsUndo(); break;
        case 13: _t->letsParse((*reinterpret_cast< QFile(*)>(_a[1]))); break;
        case 14: _t->openGpxFile(); break;
        case 15: _t->saveNewRoute((*reinterpret_cast< Route(*)>(_a[1]))); break;
        case 16: _t->addRoute((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 17: _t->delRoute(); break;
        case 18: _t->setSelectedRoute((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: _t->setSelectedPoint((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->updateRouteName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 21: _t->updateDistance((*reinterpret_cast< const double(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2]))); break;
        case 22: _t->delRouteFromTable((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 23: _t->delPointFromTable((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 24: _t->addRouteInTable((*reinterpret_cast< const Properties(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2]))); break;
        case 25: _t->addPointInTable((*reinterpret_cast< const QGeoCoordinate(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2]))); break;
        case 26: _t->changePointInTable((*reinterpret_cast< const QGeoCoordinate(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2]))); break;
        case 27: _t->fillAltitudeGraph((*reinterpret_cast< const QList<QGeoCoordinate>(*)>(_a[1]))); break;
        case 28: _t->fillTrackTable((*reinterpret_cast< const QList<QGeoCoordinate>(*)>(_a[1]))); break;
        case 29: _t->fillPolyline((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 30: _t->addPoint(); break;
        case 31: _t->delPoint(); break;
        case 32: _t->changePoint((*reinterpret_cast< QGeoCoordinate(*)>(_a[1]))); break;
        case 33: _t->redoTrigger(); break;
        case 34: _t->undoTrigger(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QGeoCoordinate> >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<double> >(); break;
            }
            break;
        case 25:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
            }
            break;
        case 26:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
            }
            break;
        case 27:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QGeoCoordinate> >(); break;
            }
            break;
        case 28:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QGeoCoordinate> >(); break;
            }
            break;
        case 32:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (Presenter::*_t)(const Properties & , const int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Presenter::letsAddInRouteTable)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Presenter::*_t)(const int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Presenter::letsDelFromRouteTable)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Presenter::*_t)(const QGeoCoordinate & , const int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Presenter::letsAddInTrackTable)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (Presenter::*_t)(const int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Presenter::letsDelFromTrackTable)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (Presenter::*_t)(const QGeoCoordinate & , const int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Presenter::letsChangePointInTable)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (Presenter::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Presenter::letsSetPolyline)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (Presenter::*_t)(const double & , const int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Presenter::letsUpdateDistance)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (Presenter::*_t)(const QList<QGeoCoordinate> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Presenter::letsUpdateTrackTable)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (Presenter::*_t)(const QVector<double> & , const QVector<double> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Presenter::letsUpdateAltitudesGraph)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (Presenter::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Presenter::letsShowError)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (Presenter::*_t)(Command * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Presenter::letsAddCommand)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (Presenter::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Presenter::letsRedo)) {
                *result = 11;
                return;
            }
        }
        {
            typedef void (Presenter::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Presenter::letsUndo)) {
                *result = 12;
                return;
            }
        }
        {
            typedef void (Presenter::*_t)(QFile & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Presenter::letsParse)) {
                *result = 13;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Presenter::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Presenter.data,
      qt_meta_data_Presenter,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Presenter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Presenter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Presenter.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Presenter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 35)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 35;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 35)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 35;
    }
    return _id;
}

// SIGNAL 0
void Presenter::letsAddInRouteTable(const Properties & _t1, const int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Presenter::letsDelFromRouteTable(const int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Presenter::letsAddInTrackTable(const QGeoCoordinate & _t1, const int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Presenter::letsDelFromTrackTable(const int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Presenter::letsChangePointInTable(const QGeoCoordinate & _t1, const int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Presenter::letsSetPolyline(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Presenter::letsUpdateDistance(const double & _t1, const int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Presenter::letsUpdateTrackTable(const QList<QGeoCoordinate> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void Presenter::letsUpdateAltitudesGraph(const QVector<double> & _t1, const QVector<double> & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void Presenter::letsShowError(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void Presenter::letsAddCommand(Command * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void Presenter::letsRedo()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void Presenter::letsUndo()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void Presenter::letsParse(QFile & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
