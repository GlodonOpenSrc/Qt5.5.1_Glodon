/****************************************************************************
** Meta object code from reading C++ file 'qguiapplication.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../gui/kernel/qguiapplication.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qguiapplication.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QGuiApplication_t {
    QByteArrayData data[32];
    char stringdata0[471];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGuiApplication_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGuiApplication_t qt_meta_stringdata_QGuiApplication = {
    {
QT_MOC_LITERAL(0, 0, 15), // "QGuiApplication"
QT_MOC_LITERAL(1, 16, 19), // "fontDatabaseChanged"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 11), // "screenAdded"
QT_MOC_LITERAL(4, 49, 8), // "QScreen*"
QT_MOC_LITERAL(5, 58, 6), // "screen"
QT_MOC_LITERAL(6, 65, 13), // "screenRemoved"
QT_MOC_LITERAL(7, 79, 16), // "lastWindowClosed"
QT_MOC_LITERAL(8, 96, 18), // "focusObjectChanged"
QT_MOC_LITERAL(9, 115, 11), // "focusObject"
QT_MOC_LITERAL(10, 127, 18), // "focusWindowChanged"
QT_MOC_LITERAL(11, 146, 8), // "QWindow*"
QT_MOC_LITERAL(12, 155, 11), // "focusWindow"
QT_MOC_LITERAL(13, 167, 23), // "applicationStateChanged"
QT_MOC_LITERAL(14, 191, 20), // "Qt::ApplicationState"
QT_MOC_LITERAL(15, 212, 5), // "state"
QT_MOC_LITERAL(16, 218, 22), // "layoutDirectionChanged"
QT_MOC_LITERAL(17, 241, 19), // "Qt::LayoutDirection"
QT_MOC_LITERAL(18, 261, 9), // "direction"
QT_MOC_LITERAL(19, 271, 17), // "commitDataRequest"
QT_MOC_LITERAL(20, 289, 16), // "QSessionManager&"
QT_MOC_LITERAL(21, 306, 14), // "sessionManager"
QT_MOC_LITERAL(22, 321, 16), // "saveStateRequest"
QT_MOC_LITERAL(23, 338, 14), // "paletteChanged"
QT_MOC_LITERAL(24, 353, 3), // "pal"
QT_MOC_LITERAL(25, 357, 20), // "_q_updateFocusObject"
QT_MOC_LITERAL(26, 378, 6), // "object"
QT_MOC_LITERAL(27, 385, 10), // "windowIcon"
QT_MOC_LITERAL(28, 396, 22), // "applicationDisplayName"
QT_MOC_LITERAL(29, 419, 15), // "layoutDirection"
QT_MOC_LITERAL(30, 435, 12), // "platformName"
QT_MOC_LITERAL(31, 448, 22) // "quitOnLastWindowClosed"

    },
    "QGuiApplication\0fontDatabaseChanged\0"
    "\0screenAdded\0QScreen*\0screen\0screenRemoved\0"
    "lastWindowClosed\0focusObjectChanged\0"
    "focusObject\0focusWindowChanged\0QWindow*\0"
    "focusWindow\0applicationStateChanged\0"
    "Qt::ApplicationState\0state\0"
    "layoutDirectionChanged\0Qt::LayoutDirection\0"
    "direction\0commitDataRequest\0"
    "QSessionManager&\0sessionManager\0"
    "saveStateRequest\0paletteChanged\0pal\0"
    "_q_updateFocusObject\0object\0windowIcon\0"
    "applicationDisplayName\0layoutDirection\0"
    "platformName\0quitOnLastWindowClosed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGuiApplication[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       5,  106, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      11,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06 /* Public */,
       3,    1,   75,    2, 0x06 /* Public */,
       6,    1,   78,    2, 0x06 /* Public */,
       7,    0,   81,    2, 0x06 /* Public */,
       8,    1,   82,    2, 0x06 /* Public */,
      10,    1,   85,    2, 0x06 /* Public */,
      13,    1,   88,    2, 0x06 /* Public */,
      16,    1,   91,    2, 0x06 /* Public */,
      19,    1,   94,    2, 0x06 /* Public */,
      22,    1,   97,    2, 0x06 /* Public */,
      23,    1,  100,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      25,    1,  103,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QObjectStar,    9,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void, 0x80000000 | 20,   21,
    QMetaType::Void, 0x80000000 | 20,   21,
    QMetaType::Void, QMetaType::QPalette,   24,

 // slots: parameters
    QMetaType::Void, QMetaType::QObjectStar,   26,

 // properties: name, type, flags
      27, QMetaType::QIcon, 0x00095103,
      28, QMetaType::QString, 0x00095103,
      29, 0x80000000 | 17, 0x0049510b,
      30, QMetaType::QString, 0x00085001,
      31, QMetaType::Bool, 0x00095103,

 // properties: notify_signal_id
       0,
       0,
       7,
       0,
       0,

       0        // eod
};

void QGuiApplication::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QGuiApplication *_t = static_cast<QGuiApplication *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->fontDatabaseChanged(); break;
        case 1: _t->screenAdded((*reinterpret_cast< QScreen*(*)>(_a[1]))); break;
        case 2: _t->screenRemoved((*reinterpret_cast< QScreen*(*)>(_a[1]))); break;
        case 3: _t->lastWindowClosed(); break;
        case 4: _t->focusObjectChanged((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 5: _t->focusWindowChanged((*reinterpret_cast< QWindow*(*)>(_a[1]))); break;
        case 6: _t->applicationStateChanged((*reinterpret_cast< Qt::ApplicationState(*)>(_a[1]))); break;
        case 7: _t->layoutDirectionChanged((*reinterpret_cast< Qt::LayoutDirection(*)>(_a[1]))); break;
        case 8: _t->commitDataRequest((*reinterpret_cast< QSessionManager(*)>(_a[1]))); break;
        case 9: _t->saveStateRequest((*reinterpret_cast< QSessionManager(*)>(_a[1]))); break;
        case 10: _t->paletteChanged((*reinterpret_cast< const QPalette(*)>(_a[1]))); break;
        case 11: _t->d_func()->_q_updateFocusObject((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QGuiApplication::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QGuiApplication::fontDatabaseChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (QGuiApplication::*_t)(QScreen * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QGuiApplication::screenAdded)) {
                *result = 1;
            }
        }
        {
            typedef void (QGuiApplication::*_t)(QScreen * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QGuiApplication::screenRemoved)) {
                *result = 2;
            }
        }
        {
            typedef void (QGuiApplication::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QGuiApplication::lastWindowClosed)) {
                *result = 3;
            }
        }
        {
            typedef void (QGuiApplication::*_t)(QObject * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QGuiApplication::focusObjectChanged)) {
                *result = 4;
            }
        }
        {
            typedef void (QGuiApplication::*_t)(QWindow * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QGuiApplication::focusWindowChanged)) {
                *result = 5;
            }
        }
        {
            typedef void (QGuiApplication::*_t)(Qt::ApplicationState );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QGuiApplication::applicationStateChanged)) {
                *result = 6;
            }
        }
        {
            typedef void (QGuiApplication::*_t)(Qt::LayoutDirection );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QGuiApplication::layoutDirectionChanged)) {
                *result = 7;
            }
        }
        {
            typedef void (QGuiApplication::*_t)(QSessionManager & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QGuiApplication::commitDataRequest)) {
                *result = 8;
            }
        }
        {
            typedef void (QGuiApplication::*_t)(QSessionManager & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QGuiApplication::saveStateRequest)) {
                *result = 9;
            }
        }
        {
            typedef void (QGuiApplication::*_t)(const QPalette & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QGuiApplication::paletteChanged)) {
                *result = 10;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QGuiApplication *_t = static_cast<QGuiApplication *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QIcon*>(_v) = _t->windowIcon(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->applicationDisplayName(); break;
        case 2: *reinterpret_cast< Qt::LayoutDirection*>(_v) = _t->layoutDirection(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->platformName(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->quitOnLastWindowClosed(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QGuiApplication *_t = static_cast<QGuiApplication *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setWindowIcon(*reinterpret_cast< QIcon*>(_v)); break;
        case 1: _t->setApplicationDisplayName(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setLayoutDirection(*reinterpret_cast< Qt::LayoutDirection*>(_v)); break;
        case 4: _t->setQuitOnLastWindowClosed(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QGuiApplication::staticMetaObject = {
    { &QCoreApplication::staticMetaObject, qt_meta_stringdata_QGuiApplication.data,
      qt_meta_data_QGuiApplication,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QGuiApplication::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGuiApplication::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QGuiApplication.stringdata0))
        return static_cast<void*>(const_cast< QGuiApplication*>(this));
    return QCoreApplication::qt_metacast(_clname);
}

int QGuiApplication::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCoreApplication::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QGuiApplication::fontDatabaseChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void QGuiApplication::screenAdded(QScreen * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QGuiApplication::screenRemoved(QScreen * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QGuiApplication::lastWindowClosed()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void QGuiApplication::focusObjectChanged(QObject * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QGuiApplication::focusWindowChanged(QWindow * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QGuiApplication::applicationStateChanged(Qt::ApplicationState _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QGuiApplication::layoutDirectionChanged(Qt::LayoutDirection _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void QGuiApplication::commitDataRequest(QSessionManager & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void QGuiApplication::saveStateRequest(QSessionManager & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void QGuiApplication::paletteChanged(const QPalette & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}
QT_END_MOC_NAMESPACE
