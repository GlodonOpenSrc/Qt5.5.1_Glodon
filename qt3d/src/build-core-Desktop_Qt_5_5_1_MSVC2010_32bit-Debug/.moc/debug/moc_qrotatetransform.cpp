/****************************************************************************
** Meta object code from reading C++ file 'qrotatetransform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../core/transforms/qrotatetransform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qrotatetransform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Qt3D__QRotateTransform_t {
    QByteArrayData data[7];
    char stringdata0[69];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qt3D__QRotateTransform_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qt3D__QRotateTransform_t qt_meta_stringdata_Qt3D__QRotateTransform = {
    {
QT_MOC_LITERAL(0, 0, 22), // "Qt3D::QRotateTransform"
QT_MOC_LITERAL(1, 23, 11), // "axisChanged"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 12), // "angleChanged"
QT_MOC_LITERAL(4, 49, 5), // "angle"
QT_MOC_LITERAL(5, 55, 8), // "angleRad"
QT_MOC_LITERAL(6, 64, 4) // "axis"

    },
    "Qt3D::QRotateTransform\0axisChanged\0\0"
    "angleChanged\0angle\0angleRad\0axis"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qt3D__QRotateTransform[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       3,   26, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,
       3,    0,   25,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       4, QMetaType::Float, 0x00495003,
       5, QMetaType::Float, 0x00495103,
       6, QMetaType::QVector3D, 0x00495103,

 // properties: notify_signal_id
       1,
       1,
       0,

       0        // eod
};

void Qt3D::QRotateTransform::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QRotateTransform *_t = static_cast<QRotateTransform *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->axisChanged(); break;
        case 1: _t->angleChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QRotateTransform::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QRotateTransform::axisChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (QRotateTransform::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QRotateTransform::angleChanged)) {
                *result = 1;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QRotateTransform *_t = static_cast<QRotateTransform *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = _t->angleDeg(); break;
        case 1: *reinterpret_cast< float*>(_v) = _t->angleRad(); break;
        case 2: *reinterpret_cast< QVector3D*>(_v) = _t->axis(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QRotateTransform *_t = static_cast<QRotateTransform *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setAngleDeg(*reinterpret_cast< float*>(_v)); break;
        case 1: _t->setAngleRad(*reinterpret_cast< float*>(_v)); break;
        case 2: _t->setAxis(*reinterpret_cast< QVector3D*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject Qt3D::QRotateTransform::staticMetaObject = {
    { &QAbstractTransform::staticMetaObject, qt_meta_stringdata_Qt3D__QRotateTransform.data,
      qt_meta_data_Qt3D__QRotateTransform,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Qt3D::QRotateTransform::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qt3D::QRotateTransform::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Qt3D__QRotateTransform.stringdata0))
        return static_cast<void*>(const_cast< QRotateTransform*>(this));
    return QAbstractTransform::qt_metacast(_clname);
}

int Qt3D::QRotateTransform::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractTransform::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Qt3D::QRotateTransform::axisChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void Qt3D::QRotateTransform::angleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
