/****************************************************************************
** Meta object code from reading C++ file 'baseview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../baseview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'baseview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BaseView_t {
    QByteArrayData data[38];
    char stringdata0[478];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BaseView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BaseView_t qt_meta_stringdata_BaseView = {
    {
QT_MOC_LITERAL(0, 0, 8), // "BaseView"
QT_MOC_LITERAL(1, 9, 20), // "letsSetSelectedRoute"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 3), // "ind"
QT_MOC_LITERAL(4, 35, 20), // "letsSetSelectedPoint"
QT_MOC_LITERAL(5, 56, 19), // "letsUpdateRouteName"
QT_MOC_LITERAL(6, 76, 4), // "name"
QT_MOC_LITERAL(7, 81, 12), // "letsOpenFile"
QT_MOC_LITERAL(8, 94, 12), // "letsAddRoute"
QT_MOC_LITERAL(9, 107, 8), // "polyline"
QT_MOC_LITERAL(10, 116, 12), // "letsDelRoute"
QT_MOC_LITERAL(11, 129, 12), // "letsAddPoint"
QT_MOC_LITERAL(12, 142, 12), // "letsDelPoint"
QT_MOC_LITERAL(13, 155, 15), // "letsChangePoint"
QT_MOC_LITERAL(14, 171, 14), // "QGeoCoordinate"
QT_MOC_LITERAL(15, 186, 5), // "point"
QT_MOC_LITERAL(16, 192, 8), // "letsUndo"
QT_MOC_LITERAL(17, 201, 8), // "letsRedo"
QT_MOC_LITERAL(18, 210, 15), // "addInRouteTable"
QT_MOC_LITERAL(19, 226, 10), // "Properties"
QT_MOC_LITERAL(20, 237, 5), // "route"
QT_MOC_LITERAL(21, 243, 17), // "delFromRouteTable"
QT_MOC_LITERAL(22, 261, 15), // "addInTrackTable"
QT_MOC_LITERAL(23, 277, 17), // "delFromTrackTable"
QT_MOC_LITERAL(24, 295, 18), // "changePointInTable"
QT_MOC_LITERAL(25, 314, 11), // "setPolyline"
QT_MOC_LITERAL(26, 326, 14), // "updateDistance"
QT_MOC_LITERAL(27, 341, 8), // "distance"
QT_MOC_LITERAL(28, 350, 16), // "updateTrackTable"
QT_MOC_LITERAL(29, 367, 21), // "QList<QGeoCoordinate>"
QT_MOC_LITERAL(30, 389, 5), // "track"
QT_MOC_LITERAL(31, 395, 19), // "updateAltitudeGraph"
QT_MOC_LITERAL(32, 415, 15), // "QVector<double>"
QT_MOC_LITERAL(33, 431, 9), // "altitudes"
QT_MOC_LITERAL(34, 441, 6), // "points"
QT_MOC_LITERAL(35, 448, 9), // "showError"
QT_MOC_LITERAL(36, 458, 3), // "msg"
QT_MOC_LITERAL(37, 462, 15) // "getOpenFileName"

    },
    "BaseView\0letsSetSelectedRoute\0\0ind\0"
    "letsSetSelectedPoint\0letsUpdateRouteName\0"
    "name\0letsOpenFile\0letsAddRoute\0polyline\0"
    "letsDelRoute\0letsAddPoint\0letsDelPoint\0"
    "letsChangePoint\0QGeoCoordinate\0point\0"
    "letsUndo\0letsRedo\0addInRouteTable\0"
    "Properties\0route\0delFromRouteTable\0"
    "addInTrackTable\0delFromTrackTable\0"
    "changePointInTable\0setPolyline\0"
    "updateDistance\0distance\0updateTrackTable\0"
    "QList<QGeoCoordinate>\0track\0"
    "updateAltitudeGraph\0QVector<double>\0"
    "altitudes\0points\0showError\0msg\0"
    "getOpenFileName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BaseView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      12,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  129,    2, 0x06 /* Public */,
       4,    1,  132,    2, 0x06 /* Public */,
       5,    1,  135,    2, 0x06 /* Public */,
       7,    0,  138,    2, 0x06 /* Public */,
       8,    1,  139,    2, 0x06 /* Public */,
       8,    0,  142,    2, 0x26 /* Public | MethodCloned */,
      10,    0,  143,    2, 0x06 /* Public */,
      11,    0,  144,    2, 0x06 /* Public */,
      12,    0,  145,    2, 0x06 /* Public */,
      13,    1,  146,    2, 0x06 /* Public */,
      16,    0,  149,    2, 0x06 /* Public */,
      17,    0,  150,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      18,    2,  151,    2, 0x0a /* Public */,
      21,    1,  156,    2, 0x0a /* Public */,
      22,    2,  159,    2, 0x0a /* Public */,
      23,    1,  164,    2, 0x0a /* Public */,
      24,    2,  167,    2, 0x0a /* Public */,
      25,    1,  172,    2, 0x0a /* Public */,
      26,    2,  175,    2, 0x0a /* Public */,
      28,    1,  180,    2, 0x0a /* Public */,
      31,    2,  183,    2, 0x0a /* Public */,
      35,    1,  188,    2, 0x0a /* Public */,
      37,    0,  191,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 19, QMetaType::Int,   20,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, 0x80000000 | 14, QMetaType::Int,   15,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, 0x80000000 | 14, QMetaType::Int,   15,    3,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::Double, QMetaType::Int,   27,    3,
    QMetaType::Void, 0x80000000 | 29,   30,
    QMetaType::Void, 0x80000000 | 32, 0x80000000 | 32,   33,   34,
    QMetaType::Void, QMetaType::QString,   36,
    QMetaType::QString,

       0        // eod
};

void BaseView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BaseView *_t = static_cast<BaseView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->letsSetSelectedRoute((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->letsSetSelectedPoint((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->letsUpdateRouteName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->letsOpenFile(); break;
        case 4: _t->letsAddRoute((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->letsAddRoute(); break;
        case 6: _t->letsDelRoute(); break;
        case 7: _t->letsAddPoint(); break;
        case 8: _t->letsDelPoint(); break;
        case 9: _t->letsChangePoint((*reinterpret_cast< QGeoCoordinate(*)>(_a[1]))); break;
        case 10: _t->letsUndo(); break;
        case 11: _t->letsRedo(); break;
        case 12: _t->addInRouteTable((*reinterpret_cast< const Properties(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2]))); break;
        case 13: _t->delFromRouteTable((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 14: _t->addInTrackTable((*reinterpret_cast< const QGeoCoordinate(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2]))); break;
        case 15: _t->delFromTrackTable((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 16: _t->changePointInTable((*reinterpret_cast< const QGeoCoordinate(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2]))); break;
        case 17: _t->setPolyline((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 18: _t->updateDistance((*reinterpret_cast< const double(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2]))); break;
        case 19: _t->updateTrackTable((*reinterpret_cast< const QList<QGeoCoordinate>(*)>(_a[1]))); break;
        case 20: _t->updateAltitudeGraph((*reinterpret_cast< const QVector<double>(*)>(_a[1])),(*reinterpret_cast< const QVector<double>(*)>(_a[2]))); break;
        case 21: _t->showError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 22: { QString _r = _t->getOpenFileName();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
            }
            break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
            }
            break;
        case 19:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QGeoCoordinate> >(); break;
            }
            break;
        case 20:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<double> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (BaseView::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BaseView::letsSetSelectedRoute)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (BaseView::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BaseView::letsSetSelectedPoint)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (BaseView::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BaseView::letsUpdateRouteName)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (BaseView::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BaseView::letsOpenFile)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (BaseView::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BaseView::letsAddRoute)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (BaseView::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BaseView::letsDelRoute)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (BaseView::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BaseView::letsAddPoint)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (BaseView::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BaseView::letsDelPoint)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (BaseView::*_t)(QGeoCoordinate );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BaseView::letsChangePoint)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (BaseView::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BaseView::letsUndo)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (BaseView::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BaseView::letsRedo)) {
                *result = 11;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject BaseView::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_BaseView.data,
      qt_meta_data_BaseView,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *BaseView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BaseView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BaseView.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int BaseView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    }
    return _id;
}

// SIGNAL 0
void BaseView::letsSetSelectedRoute(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void BaseView::letsSetSelectedPoint(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void BaseView::letsUpdateRouteName(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void BaseView::letsOpenFile()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void BaseView::letsAddRoute(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 6
void BaseView::letsDelRoute()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void BaseView::letsAddPoint()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void BaseView::letsDelPoint()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void BaseView::letsChangePoint(QGeoCoordinate _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void BaseView::letsUndo()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void BaseView::letsRedo()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
