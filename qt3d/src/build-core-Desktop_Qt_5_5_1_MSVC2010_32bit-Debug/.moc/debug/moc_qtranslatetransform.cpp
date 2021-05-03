/****************************************************************************
** Meta object code from reading C++ file 'qtranslatetransform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../core/transforms/qtranslatetransform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtranslatetransform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Qt3D__QTranslateTransform_t {
    QByteArrayData data[12];
    char stringdata0[102];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qt3D__QTranslateTransform_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qt3D__QTranslateTransform_t qt_meta_stringdata_Qt3D__QTranslateTransform = {
    {
QT_MOC_LITERAL(0, 0, 25), // "Qt3D::QTranslateTransform"
QT_MOC_LITERAL(1, 26, 16), // "translateChanged"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 5), // "setDx"
QT_MOC_LITERAL(4, 50, 3), // "arg"
QT_MOC_LITERAL(5, 54, 5), // "setDy"
QT_MOC_LITERAL(6, 60, 5), // "setDz"
QT_MOC_LITERAL(7, 66, 14), // "setTranslation"
QT_MOC_LITERAL(8, 81, 2), // "dx"
QT_MOC_LITERAL(9, 84, 2), // "dy"
QT_MOC_LITERAL(10, 87, 2), // "dz"
QT_MOC_LITERAL(11, 90, 11) // "translation"

    },
    "Qt3D::QTranslateTransform\0translateChanged\0"
    "\0setDx\0arg\0setDy\0setDz\0setTranslation\0"
    "dx\0dy\0dz\0translation"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qt3D__QTranslateTransform[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       4,   52, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   40,    2, 0x0a /* Public */,
       5,    1,   43,    2, 0x0a /* Public */,
       6,    1,   46,    2, 0x0a /* Public */,
       7,    1,   49,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::Float,    4,
    QMetaType::Void, QMetaType::QVector3D,    4,

 // properties: name, type, flags
       8, QMetaType::Float, 0x00495103,
       9, QMetaType::Float, 0x00495103,
      10, QMetaType::Float, 0x00495103,
      11, QMetaType::QVector3D, 0x00495103,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,

       0        // eod
};

void Qt3D::QTranslateTransform::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QTranslateTransform *_t = static_cast<QTranslateTransform *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->translateChanged(); break;
        case 1: _t->setDx((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 2: _t->setDy((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 3: _t->setDz((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 4: _t->setTranslation((*reinterpret_cast< const QVector3D(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QTranslateTransform::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QTranslateTransform::translateChanged)) {
                *result = 0;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QTranslateTransform *_t = static_cast<QTranslateTransform *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = _t->dx(); break;
        case 1: *reinterpret_cast< float*>(_v) = _t->dy(); break;
        case 2: *reinterpret_cast< float*>(_v) = _t->dz(); break;
        case 3: *reinterpret_cast< QVector3D*>(_v) = _t->translation(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QTranslateTransform *_t = static_cast<QTranslateTransform *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setDx(*reinterpret_cast< float*>(_v)); break;
        case 1: _t->setDy(*reinterpret_cast< float*>(_v)); break;
        case 2: _t->setDz(*reinterpret_cast< float*>(_v)); break;
        case 3: _t->setTranslation(*reinterpret_cast< QVector3D*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject Qt3D::QTranslateTransform::staticMetaObject = {
    { &QAbstractTransform::staticMetaObject, qt_meta_stringdata_Qt3D__QTranslateTransform.data,
      qt_meta_data_Qt3D__QTranslateTransform,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Qt3D::QTranslateTransform::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qt3D::QTranslateTransform::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Qt3D__QTranslateTransform.stringdata0))
        return static_cast<void*>(const_cast< QTranslateTransform*>(this));
    return QAbstractTransform::qt_metacast(_clname);
}

int Qt3D::QTranslateTransform::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractTransform::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
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
void Qt3D::QTranslateTransform::translateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
