/****************************************************************************
** Meta object code from reading C++ file 'qlookattransform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../core/transforms/qlookattransform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qlookattransform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Qt3D__QLookAtTransform_t {
    QByteArrayData data[10];
    char stringdata0[132];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qt3D__QLookAtTransform_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qt3D__QLookAtTransform_t qt_meta_stringdata_Qt3D__QLookAtTransform = {
    {
QT_MOC_LITERAL(0, 0, 22), // "Qt3D::QLookAtTransform"
QT_MOC_LITERAL(1, 23, 15), // "positionChanged"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 15), // "upVectorChanged"
QT_MOC_LITERAL(4, 56, 17), // "viewCenterChanged"
QT_MOC_LITERAL(5, 74, 17), // "viewVectorChanged"
QT_MOC_LITERAL(6, 92, 8), // "position"
QT_MOC_LITERAL(7, 101, 8), // "upVector"
QT_MOC_LITERAL(8, 110, 10), // "viewCenter"
QT_MOC_LITERAL(9, 121, 10) // "viewVector"

    },
    "Qt3D::QLookAtTransform\0positionChanged\0"
    "\0upVectorChanged\0viewCenterChanged\0"
    "viewVectorChanged\0position\0upVector\0"
    "viewCenter\0viewVector"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qt3D__QLookAtTransform[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       4,   38, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,
       4,    0,   36,    2, 0x06 /* Public */,
       5,    0,   37,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       6, QMetaType::QVector3D, 0x00495103,
       7, QMetaType::QVector3D, 0x00495103,
       8, QMetaType::QVector3D, 0x00495103,
       9, QMetaType::QVector3D, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,

       0        // eod
};

void Qt3D::QLookAtTransform::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QLookAtTransform *_t = static_cast<QLookAtTransform *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->positionChanged(); break;
        case 1: _t->upVectorChanged(); break;
        case 2: _t->viewCenterChanged(); break;
        case 3: _t->viewVectorChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QLookAtTransform::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QLookAtTransform::positionChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (QLookAtTransform::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QLookAtTransform::upVectorChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (QLookAtTransform::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QLookAtTransform::viewCenterChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (QLookAtTransform::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QLookAtTransform::viewVectorChanged)) {
                *result = 3;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QLookAtTransform *_t = static_cast<QLookAtTransform *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVector3D*>(_v) = _t->position(); break;
        case 1: *reinterpret_cast< QVector3D*>(_v) = _t->upVector(); break;
        case 2: *reinterpret_cast< QVector3D*>(_v) = _t->viewCenter(); break;
        case 3: *reinterpret_cast< QVector3D*>(_v) = _t->viewVector(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QLookAtTransform *_t = static_cast<QLookAtTransform *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPosition(*reinterpret_cast< QVector3D*>(_v)); break;
        case 1: _t->setUpVector(*reinterpret_cast< QVector3D*>(_v)); break;
        case 2: _t->setViewCenter(*reinterpret_cast< QVector3D*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject Qt3D::QLookAtTransform::staticMetaObject = {
    { &Qt3D::QAbstractTransform::staticMetaObject, qt_meta_stringdata_Qt3D__QLookAtTransform.data,
      qt_meta_data_Qt3D__QLookAtTransform,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Qt3D::QLookAtTransform::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qt3D::QLookAtTransform::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Qt3D__QLookAtTransform.stringdata0))
        return static_cast<void*>(const_cast< QLookAtTransform*>(this));
    return Qt3D::QAbstractTransform::qt_metacast(_clname);
}

int Qt3D::QLookAtTransform::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Qt3D::QAbstractTransform::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Qt3D::QLookAtTransform::positionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void Qt3D::QLookAtTransform::upVectorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void Qt3D::QLookAtTransform::viewCenterChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void Qt3D::QLookAtTransform::viewVectorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
