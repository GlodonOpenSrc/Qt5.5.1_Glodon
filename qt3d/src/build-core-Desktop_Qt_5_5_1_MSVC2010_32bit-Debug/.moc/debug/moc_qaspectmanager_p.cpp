/****************************************************************************
** Meta object code from reading C++ file 'qaspectmanager_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../core/aspects/qaspectmanager_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qaspectmanager_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Qt3D__QAspectManager_t {
    QByteArrayData data[21];
    char stringdata0[252];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qt3D__QAspectManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qt3D__QAspectManager_t qt_meta_stringdata_Qt3D__QAspectManager = {
    {
QT_MOC_LITERAL(0, 0, 20), // "Qt3D::QAspectManager"
QT_MOC_LITERAL(1, 21, 10), // "initialize"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 8), // "shutdown"
QT_MOC_LITERAL(4, 42, 13), // "setRootEntity"
QT_MOC_LITERAL(5, 56, 14), // "Qt3D::QEntity*"
QT_MOC_LITERAL(6, 71, 4), // "root"
QT_MOC_LITERAL(7, 76, 7), // "setData"
QT_MOC_LITERAL(8, 84, 4), // "data"
QT_MOC_LITERAL(9, 89, 14), // "registerAspect"
QT_MOC_LITERAL(10, 104, 22), // "Qt3D::QAbstractAspect*"
QT_MOC_LITERAL(11, 127, 6), // "aspect"
QT_MOC_LITERAL(12, 134, 4), // "exec"
QT_MOC_LITERAL(13, 139, 4), // "quit"
QT_MOC_LITERAL(14, 144, 7), // "aspects"
QT_MOC_LITERAL(15, 152, 10), // "jobManager"
QT_MOC_LITERAL(16, 163, 26), // "QAbstractAspectJobManager*"
QT_MOC_LITERAL(17, 190, 13), // "changeArbiter"
QT_MOC_LITERAL(18, 204, 15), // "QChangeArbiter*"
QT_MOC_LITERAL(19, 220, 14), // "serviceLocator"
QT_MOC_LITERAL(20, 235, 16) // "QServiceLocator*"

    },
    "Qt3D::QAspectManager\0initialize\0\0"
    "shutdown\0setRootEntity\0Qt3D::QEntity*\0"
    "root\0setData\0data\0registerAspect\0"
    "Qt3D::QAbstractAspect*\0aspect\0exec\0"
    "quit\0aspects\0jobManager\0"
    "QAbstractAspectJobManager*\0changeArbiter\0"
    "QChangeArbiter*\0serviceLocator\0"
    "QServiceLocator*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qt3D__QAspectManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x0a /* Public */,
       3,    0,   75,    2, 0x0a /* Public */,
       4,    1,   76,    2, 0x0a /* Public */,
       7,    1,   79,    2, 0x0a /* Public */,
       9,    1,   82,    2, 0x0a /* Public */,
       8,    0,   85,    2, 0x0a /* Public */,
      12,    0,   86,    2, 0x0a /* Public */,
      13,    0,   87,    2, 0x0a /* Public */,
      14,    0,   88,    2, 0x0a /* Public */,
      15,    0,   89,    2, 0x0a /* Public */,
      17,    0,   90,    2, 0x0a /* Public */,
      19,    0,   91,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::QVariantMap,    8,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::QVariantMap,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 16,
    0x80000000 | 18,
    0x80000000 | 20,

       0        // eod
};

void Qt3D::QAspectManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QAspectManager *_t = static_cast<QAspectManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->initialize(); break;
        case 1: _t->shutdown(); break;
        case 2: _t->setRootEntity((*reinterpret_cast< Qt3D::QEntity*(*)>(_a[1]))); break;
        case 3: _t->setData((*reinterpret_cast< const QVariantMap(*)>(_a[1]))); break;
        case 4: _t->registerAspect((*reinterpret_cast< Qt3D::QAbstractAspect*(*)>(_a[1]))); break;
        case 5: { QVariantMap _r = _t->data();
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = _r; }  break;
        case 6: _t->exec(); break;
        case 7: _t->quit(); break;
        case 8: _t->aspects(); break;
        case 9: { QAbstractAspectJobManager* _r = _t->jobManager();
            if (_a[0]) *reinterpret_cast< QAbstractAspectJobManager**>(_a[0]) = _r; }  break;
        case 10: { QChangeArbiter* _r = _t->changeArbiter();
            if (_a[0]) *reinterpret_cast< QChangeArbiter**>(_a[0]) = _r; }  break;
        case 11: { QServiceLocator* _r = _t->serviceLocator();
            if (_a[0]) *reinterpret_cast< QServiceLocator**>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject Qt3D::QAspectManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Qt3D__QAspectManager.data,
      qt_meta_data_Qt3D__QAspectManager,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Qt3D::QAspectManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qt3D::QAspectManager::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Qt3D__QAspectManager.stringdata0))
        return static_cast<void*>(const_cast< QAspectManager*>(this));
    return QObject::qt_metacast(_clname);
}

int Qt3D::QAspectManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
