/****************************************************************************
** Meta object code from reading C++ file 'routesmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../routesmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'routesmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RoutesModel_t {
    QByteArrayData data[22];
    char stringdata0[310];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RoutesModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RoutesModel_t qt_meta_stringdata_RoutesModel = {
    {
QT_MOC_LITERAL(0, 0, 11), // "RoutesModel"
QT_MOC_LITERAL(1, 12, 19), // "letsAddRouteInTable"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 10), // "Properties"
QT_MOC_LITERAL(4, 44, 5), // "route"
QT_MOC_LITERAL(5, 50, 3), // "ind"
QT_MOC_LITERAL(6, 54, 21), // "letsDelRouteFromTable"
QT_MOC_LITERAL(7, 76, 19), // "letsUpdateRouteName"
QT_MOC_LITERAL(8, 96, 4), // "name"
QT_MOC_LITERAL(9, 101, 18), // "letsFillTrackTable"
QT_MOC_LITERAL(10, 120, 21), // "QList<QGeoCoordinate>"
QT_MOC_LITERAL(11, 142, 5), // "track"
QT_MOC_LITERAL(12, 148, 21), // "letsFillAltitudeGraph"
QT_MOC_LITERAL(13, 170, 19), // "letsAddPointInTable"
QT_MOC_LITERAL(14, 190, 14), // "QGeoCoordinate"
QT_MOC_LITERAL(15, 205, 5), // "point"
QT_MOC_LITERAL(16, 211, 21), // "letsDelPointFromTable"
QT_MOC_LITERAL(17, 233, 22), // "letsChangePointInTable"
QT_MOC_LITERAL(18, 256, 16), // "letsFillPolyline"
QT_MOC_LITERAL(19, 273, 8), // "polyline"
QT_MOC_LITERAL(20, 282, 18), // "letsUpdateDistance"
QT_MOC_LITERAL(21, 301, 8) // "distance"

    },
    "RoutesModel\0letsAddRouteInTable\0\0"
    "Properties\0route\0ind\0letsDelRouteFromTable\0"
    "letsUpdateRouteName\0name\0letsFillTrackTable\0"
    "QList<QGeoCoordinate>\0track\0"
    "letsFillAltitudeGraph\0letsAddPointInTable\0"
    "QGeoCoordinate\0point\0letsDelPointFromTable\0"
    "letsChangePointInTable\0letsFillPolyline\0"
    "polyline\0letsUpdateDistance\0distance"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RoutesModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   64,    2, 0x06 /* Public */,
       6,    1,   69,    2, 0x06 /* Public */,
       7,    1,   72,    2, 0x06 /* Public */,
       9,    1,   75,    2, 0x06 /* Public */,
      12,    1,   78,    2, 0x06 /* Public */,
      13,    2,   81,    2, 0x06 /* Public */,
      16,    1,   86,    2, 0x06 /* Public */,
      17,    2,   89,    2, 0x06 /* Public */,
      18,    1,   94,    2, 0x06 /* Public */,
      20,    2,   97,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 14, QMetaType::Int,   15,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, 0x80000000 | 14, QMetaType::Int,   15,    5,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void, QMetaType::Double, QMetaType::Int,   21,    5,

       0        // eod
};

void RoutesModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RoutesModel *_t = static_cast<RoutesModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->letsAddRouteInTable((*reinterpret_cast< const Properties(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2]))); break;
        case 1: _t->letsDelRouteFromTable((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 2: _t->letsUpdateRouteName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->letsFillTrackTable((*reinterpret_cast< const QList<QGeoCoordinate>(*)>(_a[1]))); break;
        case 4: _t->letsFillAltitudeGraph((*reinterpret_cast< const QList<QGeoCoordinate>(*)>(_a[1]))); break;
        case 5: _t->letsAddPointInTable((*reinterpret_cast< const QGeoCoordinate(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2]))); break;
        case 6: _t->letsDelPointFromTable((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 7: _t->letsChangePointInTable((*reinterpret_cast< const QGeoCoordinate(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2]))); break;
        case 8: _t->letsFillPolyline((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->letsUpdateDistance((*reinterpret_cast< const double(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QGeoCoordinate> >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QGeoCoordinate> >(); break;
            }
            break;
        case 5:
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
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (RoutesModel::*_t)(const Properties & , const int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RoutesModel::letsAddRouteInTable)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (RoutesModel::*_t)(const int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RoutesModel::letsDelRouteFromTable)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (RoutesModel::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RoutesModel::letsUpdateRouteName)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (RoutesModel::*_t)(const QList<QGeoCoordinate> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RoutesModel::letsFillTrackTable)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (RoutesModel::*_t)(const QList<QGeoCoordinate> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RoutesModel::letsFillAltitudeGraph)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (RoutesModel::*_t)(const QGeoCoordinate & , const int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RoutesModel::letsAddPointInTable)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (RoutesModel::*_t)(const int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RoutesModel::letsDelPointFromTable)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (RoutesModel::*_t)(const QGeoCoordinate & , const int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RoutesModel::letsChangePointInTable)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (RoutesModel::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RoutesModel::letsFillPolyline)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (RoutesModel::*_t)(const double & , const int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RoutesModel::letsUpdateDistance)) {
                *result = 9;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject RoutesModel::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_RoutesModel.data,
      qt_meta_data_RoutesModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *RoutesModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RoutesModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RoutesModel.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int RoutesModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void RoutesModel::letsAddRouteInTable(const Properties & _t1, const int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void RoutesModel::letsDelRouteFromTable(const int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void RoutesModel::letsUpdateRouteName(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void RoutesModel::letsFillTrackTable(const QList<QGeoCoordinate> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void RoutesModel::letsFillAltitudeGraph(const QList<QGeoCoordinate> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void RoutesModel::letsAddPointInTable(const QGeoCoordinate & _t1, const int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void RoutesModel::letsDelPointFromTable(const int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void RoutesModel::letsChangePointInTable(const QGeoCoordinate & _t1, const int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void RoutesModel::letsFillPolyline(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void RoutesModel::letsUpdateDistance(const double & _t1, const int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
