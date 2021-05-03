/****************************************************************************
** Meta object code from reading C++ file 'qcameralens.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../core/core-components/qcameralens.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qcameralens.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Qt3D__QCameraLens_t {
    QByteArrayData data[26];
    char stringdata0[359];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qt3D__QCameraLens_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qt3D__QCameraLens_t qt_meta_stringdata_Qt3D__QCameraLens = {
    {
QT_MOC_LITERAL(0, 0, 17), // "Qt3D::QCameraLens"
QT_MOC_LITERAL(1, 18, 21), // "projectionTypeChanged"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 16), // "nearPlaneChanged"
QT_MOC_LITERAL(4, 58, 15), // "farPlaneChanged"
QT_MOC_LITERAL(5, 74, 18), // "fieldOfViewChanged"
QT_MOC_LITERAL(6, 93, 18), // "aspectRatioChanged"
QT_MOC_LITERAL(7, 112, 11), // "leftChanged"
QT_MOC_LITERAL(8, 124, 12), // "rightChanged"
QT_MOC_LITERAL(9, 137, 13), // "bottomChanged"
QT_MOC_LITERAL(10, 151, 10), // "topChanged"
QT_MOC_LITERAL(11, 162, 23), // "projectionMatrixChanged"
QT_MOC_LITERAL(12, 186, 14), // "projectionType"
QT_MOC_LITERAL(13, 201, 14), // "ProjectionType"
QT_MOC_LITERAL(14, 216, 9), // "nearPlane"
QT_MOC_LITERAL(15, 226, 8), // "farPlane"
QT_MOC_LITERAL(16, 235, 11), // "fieldOfView"
QT_MOC_LITERAL(17, 247, 11), // "aspectRatio"
QT_MOC_LITERAL(18, 259, 4), // "left"
QT_MOC_LITERAL(19, 264, 5), // "right"
QT_MOC_LITERAL(20, 270, 6), // "bottom"
QT_MOC_LITERAL(21, 277, 3), // "top"
QT_MOC_LITERAL(22, 281, 16), // "projectionMatrix"
QT_MOC_LITERAL(23, 298, 20), // "OrthogonalProjection"
QT_MOC_LITERAL(24, 319, 21), // "PerspectiveProjection"
QT_MOC_LITERAL(25, 341, 17) // "FrustumProjection"

    },
    "Qt3D::QCameraLens\0projectionTypeChanged\0"
    "\0nearPlaneChanged\0farPlaneChanged\0"
    "fieldOfViewChanged\0aspectRatioChanged\0"
    "leftChanged\0rightChanged\0bottomChanged\0"
    "topChanged\0projectionMatrixChanged\0"
    "projectionType\0ProjectionType\0nearPlane\0"
    "farPlane\0fieldOfView\0aspectRatio\0left\0"
    "right\0bottom\0top\0projectionMatrix\0"
    "OrthogonalProjection\0PerspectiveProjection\0"
    "FrustumProjection"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qt3D__QCameraLens[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
      10,   74, // properties
       1,  114, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,
       3,    0,   65,    2, 0x06 /* Public */,
       4,    0,   66,    2, 0x06 /* Public */,
       5,    0,   67,    2, 0x06 /* Public */,
       6,    0,   68,    2, 0x06 /* Public */,
       7,    0,   69,    2, 0x06 /* Public */,
       8,    0,   70,    2, 0x06 /* Public */,
       9,    0,   71,    2, 0x06 /* Public */,
      10,    0,   72,    2, 0x06 /* Public */,
      11,    0,   73,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      12, 0x80000000 | 13, 0x0049510b,
      14, QMetaType::Float, 0x00495103,
      15, QMetaType::Float, 0x00495103,
      16, QMetaType::Float, 0x00495103,
      17, QMetaType::Float, 0x00495103,
      18, QMetaType::Float, 0x00495103,
      19, QMetaType::Float, 0x00495103,
      20, QMetaType::Float, 0x00495103,
      21, QMetaType::Float, 0x00495103,
      22, QMetaType::QMatrix4x4, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,
       6,
       7,
       8,
       9,

 // enums: name, flags, count, data
      13, 0x0,    3,  118,

 // enum data: key, value
      23, uint(Qt3D::QCameraLens::OrthogonalProjection),
      24, uint(Qt3D::QCameraLens::PerspectiveProjection),
      25, uint(Qt3D::QCameraLens::FrustumProjection),

       0        // eod
};

void Qt3D::QCameraLens::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QCameraLens *_t = static_cast<QCameraLens *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->projectionTypeChanged(); break;
        case 1: _t->nearPlaneChanged(); break;
        case 2: _t->farPlaneChanged(); break;
        case 3: _t->fieldOfViewChanged(); break;
        case 4: _t->aspectRatioChanged(); break;
        case 5: _t->leftChanged(); break;
        case 6: _t->rightChanged(); break;
        case 7: _t->bottomChanged(); break;
        case 8: _t->topChanged(); break;
        case 9: _t->projectionMatrixChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QCameraLens::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QCameraLens::projectionTypeChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (QCameraLens::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QCameraLens::nearPlaneChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (QCameraLens::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QCameraLens::farPlaneChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (QCameraLens::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QCameraLens::fieldOfViewChanged)) {
                *result = 3;
            }
        }
        {
            typedef void (QCameraLens::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QCameraLens::aspectRatioChanged)) {
                *result = 4;
            }
        }
        {
            typedef void (QCameraLens::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QCameraLens::leftChanged)) {
                *result = 5;
            }
        }
        {
            typedef void (QCameraLens::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QCameraLens::rightChanged)) {
                *result = 6;
            }
        }
        {
            typedef void (QCameraLens::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QCameraLens::bottomChanged)) {
                *result = 7;
            }
        }
        {
            typedef void (QCameraLens::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QCameraLens::topChanged)) {
                *result = 8;
            }
        }
        {
            typedef void (QCameraLens::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QCameraLens::projectionMatrixChanged)) {
                *result = 9;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QCameraLens *_t = static_cast<QCameraLens *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< ProjectionType*>(_v) = _t->projectionType(); break;
        case 1: *reinterpret_cast< float*>(_v) = _t->nearPlane(); break;
        case 2: *reinterpret_cast< float*>(_v) = _t->farPlane(); break;
        case 3: *reinterpret_cast< float*>(_v) = _t->fieldOfView(); break;
        case 4: *reinterpret_cast< float*>(_v) = _t->aspectRatio(); break;
        case 5: *reinterpret_cast< float*>(_v) = _t->left(); break;
        case 6: *reinterpret_cast< float*>(_v) = _t->right(); break;
        case 7: *reinterpret_cast< float*>(_v) = _t->bottom(); break;
        case 8: *reinterpret_cast< float*>(_v) = _t->top(); break;
        case 9: *reinterpret_cast< QMatrix4x4*>(_v) = _t->projectionMatrix(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QCameraLens *_t = static_cast<QCameraLens *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setProjectionType(*reinterpret_cast< ProjectionType*>(_v)); break;
        case 1: _t->setNearPlane(*reinterpret_cast< float*>(_v)); break;
        case 2: _t->setFarPlane(*reinterpret_cast< float*>(_v)); break;
        case 3: _t->setFieldOfView(*reinterpret_cast< float*>(_v)); break;
        case 4: _t->setAspectRatio(*reinterpret_cast< float*>(_v)); break;
        case 5: _t->setLeft(*reinterpret_cast< float*>(_v)); break;
        case 6: _t->setRight(*reinterpret_cast< float*>(_v)); break;
        case 7: _t->setBottom(*reinterpret_cast< float*>(_v)); break;
        case 8: _t->setTop(*reinterpret_cast< float*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject Qt3D::QCameraLens::staticMetaObject = {
    { &QComponent::staticMetaObject, qt_meta_stringdata_Qt3D__QCameraLens.data,
      qt_meta_data_Qt3D__QCameraLens,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Qt3D::QCameraLens::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qt3D::QCameraLens::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Qt3D__QCameraLens.stringdata0))
        return static_cast<void*>(const_cast< QCameraLens*>(this));
    return QComponent::qt_metacast(_clname);
}

int Qt3D::QCameraLens::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QComponent::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 10;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Qt3D::QCameraLens::projectionTypeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void Qt3D::QCameraLens::nearPlaneChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void Qt3D::QCameraLens::farPlaneChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void Qt3D::QCameraLens::fieldOfViewChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void Qt3D::QCameraLens::aspectRatioChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void Qt3D::QCameraLens::leftChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}

// SIGNAL 6
void Qt3D::QCameraLens::rightChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, Q_NULLPTR);
}

// SIGNAL 7
void Qt3D::QCameraLens::bottomChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, Q_NULLPTR);
}

// SIGNAL 8
void Qt3D::QCameraLens::topChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, Q_NULLPTR);
}

// SIGNAL 9
void Qt3D::QCameraLens::projectionMatrixChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
