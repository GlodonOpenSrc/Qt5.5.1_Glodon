/****************************************************************************
** Meta object code from reading C++ file 'qtransform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../core/transforms/qtransform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtransform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Qt3D__QTransform_t {
    QByteArrayData data[8];
    char stringdata0[93];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qt3D__QTransform_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qt3D__QTransform_t qt_meta_stringdata_Qt3D__QTransform = {
    {
QT_MOC_LITERAL(0, 0, 16), // "Qt3D::QTransform"
QT_MOC_LITERAL(1, 17, 13), // "matrixChanged"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 17), // "transformsChanged"
QT_MOC_LITERAL(4, 50, 21), // "_q_transformDestroyed"
QT_MOC_LITERAL(5, 72, 3), // "obj"
QT_MOC_LITERAL(6, 76, 9), // "_q_update"
QT_MOC_LITERAL(7, 86, 6) // "matrix"

    },
    "Qt3D::QTransform\0matrixChanged\0\0"
    "transformsChanged\0_q_transformDestroyed\0"
    "obj\0_q_update\0matrix"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qt3D__QTransform[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       1,   40, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   36,    2, 0x08 /* Private */,
       6,    0,   39,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QObjectStar,    5,
    QMetaType::Void,

 // properties: name, type, flags
       7, QMetaType::QMatrix4x4, 0x00495001,

 // properties: notify_signal_id
       0,

       0        // eod
};

void Qt3D::QTransform::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QTransform *_t = static_cast<QTransform *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->matrixChanged(); break;
        case 1: _t->transformsChanged(); break;
        case 2: _t->d_func()->_q_transformDestroyed((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 3: _t->d_func()->_q_update(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QTransform::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QTransform::matrixChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (QTransform::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QTransform::transformsChanged)) {
                *result = 1;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QTransform *_t = static_cast<QTransform *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QMatrix4x4*>(_v) = _t->matrix(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject Qt3D::QTransform::staticMetaObject = {
    { &QComponent::staticMetaObject, qt_meta_stringdata_Qt3D__QTransform.data,
      qt_meta_data_Qt3D__QTransform,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Qt3D::QTransform::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qt3D::QTransform::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Qt3D__QTransform.stringdata0))
        return static_cast<void*>(const_cast< QTransform*>(this));
    return QComponent::qt_metacast(_clname);
}

int Qt3D::QTransform::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QComponent::qt_metacall(_c, _id, _a);
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
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Qt3D::QTransform::matrixChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void Qt3D::QTransform::transformsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
