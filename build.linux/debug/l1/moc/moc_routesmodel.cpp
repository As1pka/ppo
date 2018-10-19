/****************************************************************************
** Meta object code from reading C++ file 'routesmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../l3/routesmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'routesmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RoutesModel_t {
    QByteArrayData data[25];
    char stringdata0[341];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RoutesModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RoutesModel_t qt_meta_stringdata_RoutesModel = {
    {
QT_MOC_LITERAL(0, 0, 11), // "RoutesModel"
QT_MOC_LITERAL(1, 12, 11), // "letsAddInfo"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 4), // "info"
QT_MOC_LITERAL(4, 30, 13), // "letsClearInfo"
QT_MOC_LITERAL(5, 44, 19), // "letsAddRouteInTable"
QT_MOC_LITERAL(6, 64, 10), // "Properties"
QT_MOC_LITERAL(7, 75, 5), // "route"
QT_MOC_LITERAL(8, 81, 3), // "ind"
QT_MOC_LITERAL(9, 85, 21), // "letsDelRouteFromTable"
QT_MOC_LITERAL(10, 107, 19), // "letsUpdateRouteName"
QT_MOC_LITERAL(11, 127, 4), // "name"
QT_MOC_LITERAL(12, 132, 18), // "letsFillTrackTable"
QT_MOC_LITERAL(13, 151, 21), // "QList<QGeoCoordinate>"
QT_MOC_LITERAL(14, 173, 5), // "track"
QT_MOC_LITERAL(15, 179, 21), // "letsFillAltitudeGraph"
QT_MOC_LITERAL(16, 201, 19), // "letsAddPointInTable"
QT_MOC_LITERAL(17, 221, 14), // "QGeoCoordinate"
QT_MOC_LITERAL(18, 236, 5), // "point"
QT_MOC_LITERAL(19, 242, 21), // "letsDelPointFromTable"
QT_MOC_LITERAL(20, 264, 22), // "letsChangePointInTable"
QT_MOC_LITERAL(21, 287, 16), // "letsFillPolyline"
QT_MOC_LITERAL(22, 304, 8), // "polyline"
QT_MOC_LITERAL(23, 313, 18), // "letsUpdateDistance"
QT_MOC_LITERAL(24, 332, 8) // "distance"

    },
    "RoutesModel\0letsAddInfo\0\0info\0"
    "letsClearInfo\0letsAddRouteInTable\0"
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
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      12,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,
       4,    0,   77,    2, 0x06 /* Public */,
       5,    2,   78,    2, 0x06 /* Public */,
       9,    1,   83,    2, 0x06 /* Public */,
      10,    1,   86,    2, 0x06 /* Public */,
      12,    1,   89,    2, 0x06 /* Public */,
      15,    1,   92,    2, 0x06 /* Public */,
      16,    2,   95,    2, 0x06 /* Public */,
      19,    1,  100,    2, 0x06 /* Public */,
      20,    2,  103,    2, 0x06 /* Public */,
      21,    1,  108,    2, 0x06 /* Public */,
      23,    2,  111,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6, QMetaType::Int,    7,    8,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, 0x80000000 | 17, QMetaType::Int,   18,    8,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, 0x80000000 | 17, QMetaType::Int,   18,    8,
    QMetaType::Void, QMetaType::QString,   22,
    QMetaType::Void, QMetaType::Double, QMetaType::Int,   24,    8,

       0        // eod
};

void RoutesModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RoutesModel *_t = static_cast<RoutesModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->letsAddInfo((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->letsClearInfo(); break;
        case 2: _t->letsAddRouteInTable((*reinterpret_cast< const Properties(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2]))); break;
        case 3: _t->letsDelRouteFromTable((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 4: _t->letsUpdateRouteName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->letsFillTrackTable((*reinterpret_cast< const QList<QGeoCoordinate>(*)>(_a[1]))); break;
        case 6: _t->letsFillAltitudeGraph((*reinterpret_cast< const QList<QGeoCoordinate>(*)>(_a[1]))); break;
        case 7: _t->letsAddPointInTable((*reinterpret_cast< const QGeoCoordinate(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2]))); break;
        case 8: _t->letsDelPointFromTable((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 9: _t->letsChangePointInTable((*reinterpret_cast< const QGeoCoordinate(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2]))); break;
        case 10: _t->letsFillPolyline((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->letsUpdateDistance((*reinterpret_cast< const double(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QGeoCoordinate> >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QGeoCoordinate> >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
            }
            break;
        case 9:
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
            using _t = void (RoutesModel::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RoutesModel::letsAddInfo)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (RoutesModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RoutesModel::letsClearInfo)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (RoutesModel::*)(const Properties & , const int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RoutesModel::letsAddRouteInTable)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (RoutesModel::*)(const int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RoutesModel::letsDelRouteFromTable)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (RoutesModel::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RoutesModel::letsUpdateRouteName)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (RoutesModel::*)(const QList<QGeoCoordinate> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RoutesModel::letsFillTrackTable)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (RoutesModel::*)(const QList<QGeoCoordinate> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RoutesModel::letsFillAltitudeGraph)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (RoutesModel::*)(const QGeoCoordinate & , const int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RoutesModel::letsAddPointInTable)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (RoutesModel::*)(const int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RoutesModel::letsDelPointFromTable)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (RoutesModel::*)(const QGeoCoordinate & , const int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RoutesModel::letsChangePointInTable)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (RoutesModel::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RoutesModel::letsFillPolyline)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (RoutesModel::*)(const double & , const int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RoutesModel::letsUpdateDistance)) {
                *result = 11;
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
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void RoutesModel::letsAddInfo(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void RoutesModel::letsClearInfo()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void RoutesModel::letsAddRouteInTable(const Properties & _t1, const int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void RoutesModel::letsDelRouteFromTable(const int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void RoutesModel::letsUpdateRouteName(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void RoutesModel::letsFillTrackTable(const QList<QGeoCoordinate> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void RoutesModel::letsFillAltitudeGraph(const QList<QGeoCoordinate> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void RoutesModel::letsAddPointInTable(const QGeoCoordinate & _t1, const int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void RoutesModel::letsDelPointFromTable(const int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void RoutesModel::letsChangePointInTable(const QGeoCoordinate & _t1, const int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void RoutesModel::letsFillPolyline(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void RoutesModel::letsUpdateDistance(const double & _t1, const int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
