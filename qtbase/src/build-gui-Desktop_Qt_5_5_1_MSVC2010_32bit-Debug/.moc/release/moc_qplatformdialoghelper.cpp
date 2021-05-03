/****************************************************************************
** Meta object code from reading C++ file 'qplatformdialoghelper.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../gui/kernel/qplatformdialoghelper.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qplatformdialoghelper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QPlatformDialogHelper_t {
    QByteArrayData data[4];
    char stringdata0[37];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QPlatformDialogHelper_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QPlatformDialogHelper_t qt_meta_stringdata_QPlatformDialogHelper = {
    {
QT_MOC_LITERAL(0, 0, 21), // "QPlatformDialogHelper"
QT_MOC_LITERAL(1, 22, 6), // "accept"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 6) // "reject"

    },
    "QPlatformDialogHelper\0accept\0\0reject"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QPlatformDialogHelper[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
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

       0        // eod
};

void QPlatformDialogHelper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QPlatformDialogHelper *_t = static_cast<QPlatformDialogHelper *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->accept(); break;
        case 1: _t->reject(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QPlatformDialogHelper::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QPlatformDialogHelper::accept)) {
                *result = 0;
            }
        }
        {
            typedef void (QPlatformDialogHelper::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QPlatformDialogHelper::reject)) {
                *result = 1;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QPlatformDialogHelper::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QPlatformDialogHelper.data,
      qt_meta_data_QPlatformDialogHelper,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QPlatformDialogHelper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QPlatformDialogHelper::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QPlatformDialogHelper.stringdata0))
        return static_cast<void*>(const_cast< QPlatformDialogHelper*>(this));
    return QObject::qt_metacast(_clname);
}

int QPlatformDialogHelper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void QPlatformDialogHelper::accept()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void QPlatformDialogHelper::reject()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
struct qt_meta_stringdata_QPlatformColorDialogHelper_t {
    QByteArrayData data[5];
    char stringdata0[68];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QPlatformColorDialogHelper_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QPlatformColorDialogHelper_t qt_meta_stringdata_QPlatformColorDialogHelper = {
    {
QT_MOC_LITERAL(0, 0, 26), // "QPlatformColorDialogHelper"
QT_MOC_LITERAL(1, 27, 19), // "currentColorChanged"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 5), // "color"
QT_MOC_LITERAL(4, 54, 13) // "colorSelected"

    },
    "QPlatformColorDialogHelper\0"
    "currentColorChanged\0\0color\0colorSelected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QPlatformColorDialogHelper[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,
       4,    1,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QColor,    3,
    QMetaType::Void, QMetaType::QColor,    3,

       0        // eod
};

void QPlatformColorDialogHelper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QPlatformColorDialogHelper *_t = static_cast<QPlatformColorDialogHelper *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->currentColorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 1: _t->colorSelected((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QPlatformColorDialogHelper::*_t)(const QColor & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QPlatformColorDialogHelper::currentColorChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (QPlatformColorDialogHelper::*_t)(const QColor & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QPlatformColorDialogHelper::colorSelected)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject QPlatformColorDialogHelper::staticMetaObject = {
    { &QPlatformDialogHelper::staticMetaObject, qt_meta_stringdata_QPlatformColorDialogHelper.data,
      qt_meta_data_QPlatformColorDialogHelper,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QPlatformColorDialogHelper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QPlatformColorDialogHelper::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QPlatformColorDialogHelper.stringdata0))
        return static_cast<void*>(const_cast< QPlatformColorDialogHelper*>(this));
    return QPlatformDialogHelper::qt_metacast(_clname);
}

int QPlatformColorDialogHelper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPlatformDialogHelper::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void QPlatformColorDialogHelper::currentColorChanged(const QColor & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QPlatformColorDialogHelper::colorSelected(const QColor & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_QPlatformFontDialogHelper_t {
    QByteArrayData data[5];
    char stringdata0[64];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QPlatformFontDialogHelper_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QPlatformFontDialogHelper_t qt_meta_stringdata_QPlatformFontDialogHelper = {
    {
QT_MOC_LITERAL(0, 0, 25), // "QPlatformFontDialogHelper"
QT_MOC_LITERAL(1, 26, 18), // "currentFontChanged"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 4), // "font"
QT_MOC_LITERAL(4, 51, 12) // "fontSelected"

    },
    "QPlatformFontDialogHelper\0currentFontChanged\0"
    "\0font\0fontSelected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QPlatformFontDialogHelper[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,
       4,    1,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QFont,    3,
    QMetaType::Void, QMetaType::QFont,    3,

       0        // eod
};

void QPlatformFontDialogHelper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QPlatformFontDialogHelper *_t = static_cast<QPlatformFontDialogHelper *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->currentFontChanged((*reinterpret_cast< const QFont(*)>(_a[1]))); break;
        case 1: _t->fontSelected((*reinterpret_cast< const QFont(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QPlatformFontDialogHelper::*_t)(const QFont & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QPlatformFontDialogHelper::currentFontChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (QPlatformFontDialogHelper::*_t)(const QFont & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QPlatformFontDialogHelper::fontSelected)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject QPlatformFontDialogHelper::staticMetaObject = {
    { &QPlatformDialogHelper::staticMetaObject, qt_meta_stringdata_QPlatformFontDialogHelper.data,
      qt_meta_data_QPlatformFontDialogHelper,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QPlatformFontDialogHelper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QPlatformFontDialogHelper::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QPlatformFontDialogHelper.stringdata0))
        return static_cast<void*>(const_cast< QPlatformFontDialogHelper*>(this));
    return QPlatformDialogHelper::qt_metacast(_clname);
}

int QPlatformFontDialogHelper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPlatformDialogHelper::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void QPlatformFontDialogHelper::currentFontChanged(const QFont & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QPlatformFontDialogHelper::fontSelected(const QFont & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_QPlatformFileDialogHelper_t {
    QByteArrayData data[13];
    char stringdata0[146];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QPlatformFileDialogHelper_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QPlatformFileDialogHelper_t qt_meta_stringdata_QPlatformFileDialogHelper = {
    {
QT_MOC_LITERAL(0, 0, 25), // "QPlatformFileDialogHelper"
QT_MOC_LITERAL(1, 26, 12), // "fileSelected"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 4), // "file"
QT_MOC_LITERAL(4, 45, 13), // "filesSelected"
QT_MOC_LITERAL(5, 59, 11), // "QList<QUrl>"
QT_MOC_LITERAL(6, 71, 5), // "files"
QT_MOC_LITERAL(7, 77, 14), // "currentChanged"
QT_MOC_LITERAL(8, 92, 4), // "path"
QT_MOC_LITERAL(9, 97, 16), // "directoryEntered"
QT_MOC_LITERAL(10, 114, 9), // "directory"
QT_MOC_LITERAL(11, 124, 14), // "filterSelected"
QT_MOC_LITERAL(12, 139, 6) // "filter"

    },
    "QPlatformFileDialogHelper\0fileSelected\0"
    "\0file\0filesSelected\0QList<QUrl>\0files\0"
    "currentChanged\0path\0directoryEntered\0"
    "directory\0filterSelected\0filter"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QPlatformFileDialogHelper[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       4,    1,   42,    2, 0x06 /* Public */,
       7,    1,   45,    2, 0x06 /* Public */,
       9,    1,   48,    2, 0x06 /* Public */,
      11,    1,   51,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QUrl,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::QUrl,    8,
    QMetaType::Void, QMetaType::QUrl,   10,
    QMetaType::Void, QMetaType::QString,   12,

       0        // eod
};

void QPlatformFileDialogHelper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QPlatformFileDialogHelper *_t = static_cast<QPlatformFileDialogHelper *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->fileSelected((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 1: _t->filesSelected((*reinterpret_cast< const QList<QUrl>(*)>(_a[1]))); break;
        case 2: _t->currentChanged((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 3: _t->directoryEntered((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 4: _t->filterSelected((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QUrl> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QPlatformFileDialogHelper::*_t)(const QUrl & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QPlatformFileDialogHelper::fileSelected)) {
                *result = 0;
            }
        }
        {
            typedef void (QPlatformFileDialogHelper::*_t)(const QList<QUrl> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QPlatformFileDialogHelper::filesSelected)) {
                *result = 1;
            }
        }
        {
            typedef void (QPlatformFileDialogHelper::*_t)(const QUrl & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QPlatformFileDialogHelper::currentChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (QPlatformFileDialogHelper::*_t)(const QUrl & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QPlatformFileDialogHelper::directoryEntered)) {
                *result = 3;
            }
        }
        {
            typedef void (QPlatformFileDialogHelper::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QPlatformFileDialogHelper::filterSelected)) {
                *result = 4;
            }
        }
    }
}

const QMetaObject QPlatformFileDialogHelper::staticMetaObject = {
    { &QPlatformDialogHelper::staticMetaObject, qt_meta_stringdata_QPlatformFileDialogHelper.data,
      qt_meta_data_QPlatformFileDialogHelper,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QPlatformFileDialogHelper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QPlatformFileDialogHelper::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QPlatformFileDialogHelper.stringdata0))
        return static_cast<void*>(const_cast< QPlatformFileDialogHelper*>(this));
    return QPlatformDialogHelper::qt_metacast(_clname);
}

int QPlatformFileDialogHelper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPlatformDialogHelper::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void QPlatformFileDialogHelper::fileSelected(const QUrl & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QPlatformFileDialogHelper::filesSelected(const QList<QUrl> & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QPlatformFileDialogHelper::currentChanged(const QUrl & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QPlatformFileDialogHelper::directoryEntered(const QUrl & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QPlatformFileDialogHelper::filterSelected(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
struct qt_meta_stringdata_QPlatformMessageDialogHelper_t {
    QByteArrayData data[7];
    char stringdata0[122];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QPlatformMessageDialogHelper_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QPlatformMessageDialogHelper_t qt_meta_stringdata_QPlatformMessageDialogHelper = {
    {
QT_MOC_LITERAL(0, 0, 28), // "QPlatformMessageDialogHelper"
QT_MOC_LITERAL(1, 29, 7), // "clicked"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 37), // "QPlatformDialogHelper::Standa..."
QT_MOC_LITERAL(4, 76, 6), // "button"
QT_MOC_LITERAL(5, 83, 33), // "QPlatformDialogHelper::Button..."
QT_MOC_LITERAL(6, 117, 4) // "role"

    },
    "QPlatformMessageDialogHelper\0clicked\0"
    "\0QPlatformDialogHelper::StandardButton\0"
    "button\0QPlatformDialogHelper::ButtonRole\0"
    "role"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QPlatformMessageDialogHelper[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,

       0        // eod
};

void QPlatformMessageDialogHelper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QPlatformMessageDialogHelper *_t = static_cast<QPlatformMessageDialogHelper *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->clicked((*reinterpret_cast< QPlatformDialogHelper::StandardButton(*)>(_a[1])),(*reinterpret_cast< QPlatformDialogHelper::ButtonRole(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QPlatformMessageDialogHelper::*_t)(QPlatformDialogHelper::StandardButton , QPlatformDialogHelper::ButtonRole );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QPlatformMessageDialogHelper::clicked)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject QPlatformMessageDialogHelper::staticMetaObject = {
    { &QPlatformDialogHelper::staticMetaObject, qt_meta_stringdata_QPlatformMessageDialogHelper.data,
      qt_meta_data_QPlatformMessageDialogHelper,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QPlatformMessageDialogHelper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QPlatformMessageDialogHelper::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QPlatformMessageDialogHelper.stringdata0))
        return static_cast<void*>(const_cast< QPlatformMessageDialogHelper*>(this));
    return QPlatformDialogHelper::qt_metacast(_clname);
}

int QPlatformMessageDialogHelper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPlatformDialogHelper::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void QPlatformMessageDialogHelper::clicked(QPlatformDialogHelper::StandardButton _t1, QPlatformDialogHelper::ButtonRole _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
