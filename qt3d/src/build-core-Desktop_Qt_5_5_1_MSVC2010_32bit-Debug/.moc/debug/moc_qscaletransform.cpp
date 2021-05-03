/****************************************************************************
** Meta object code from reading C++ file 'qscaletransform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../core/transforms/qscaletransform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qscaletransform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Qt3D__QScaleTransform_t {
    QByteArrayData data[6];
    char stringdata0[65];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qt3D__QScaleTransform_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qt3D__QScaleTransform_t qt_meta_stringdata_Qt3D__QScaleTransform = {
    {
QT_MOC_LITERAL(0, 0, 21), // "Qt3D::QScaleTransform"
QT_MOC_LITERAL(1, 22, 14), // "scale3DChanged"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 12), // "scaleChanged"
QT_MOC_LITERAL(4, 51, 7), // "scale3D"
QT_MOC_LITERAL(5, 59, 5) // "scale"

    },
    "Qt3D::QScaleTransform\0scale3DChanged\0"
    "\0scaleChanged\0scale3D\0scale"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qt3D__QScaleTransform[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       2,   26, // properties
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
       4, QMetaType::QVector3D, 0x00495103,
       5, QMetaType::Float, 0x00495103,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

void Qt3D::QScaleTransform::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QScaleTransform *_t = static_cast<QScaleTransform *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->scale3DChanged(); break;
        case 1: _t->scaleChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QScaleTransform::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QScaleTransform::scale3DChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (QScaleTransform::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QScaleTransform::scaleChanged)) {
                *result = 1;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QScaleTransform *_t = static_cast<QScaleTransform *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVector3D*>(_v) = _t->scale3D(); break;
        case 1: *reinterpret_cast< float*>(_v) = _t->scale(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QScaleTransform *_t = static_cast<QScaleTransform *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setScale3D(*reinterpret_cast< QVector3D*>(_v)); break;
        case 1: _t->setScale(*reinterpret_cast< float*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject Qt3D::QScaleTransform::staticMetaObject = {
    { &QAbstractTransform::staticMetaObject, qt_meta_stringdata_Qt3D__QScaleTransform.data,
      qt_meta_data_Qt3D__QScaleTransform,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Qt3D::QScaleTransform::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qt3D::QScaleTransform::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Qt3D__QScaleTransform.stringdata0))
        return static_cast<void*>(const_cast< QScaleTransform*>(this));
    return QAbstractTransform::qt_metacast(_clname);
}

int Qt3D::QScaleTransform::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Qt3D::QScaleTransform::scale3DChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void Qt3D::QScaleTransform::scaleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
