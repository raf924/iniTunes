/****************************************************************************
** Meta object code from reading C++ file 'library.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.1.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../library.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'library.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.1.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Library_t {
    QByteArrayData data[20];
    char stringdata[173];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_Library_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_Library_t qt_meta_stringdata_Library = {
    {
QT_MOC_LITERAL(0, 0, 7),
QT_MOC_LITERAL(1, 8, 12),
QT_MOC_LITERAL(2, 21, 0),
QT_MOC_LITERAL(3, 22, 1),
QT_MOC_LITERAL(4, 24, 7),
QT_MOC_LITERAL(5, 32, 4),
QT_MOC_LITERAL(6, 37, 4),
QT_MOC_LITERAL(7, 42, 14),
QT_MOC_LITERAL(8, 57, 8),
QT_MOC_LITERAL(9, 66, 17),
QT_MOC_LITERAL(10, 84, 8),
QT_MOC_LITERAL(11, 93, 8),
QT_MOC_LITERAL(12, 102, 8),
QT_MOC_LITERAL(13, 111, 5),
QT_MOC_LITERAL(14, 117, 5),
QT_MOC_LITERAL(15, 123, 9),
QT_MOC_LITERAL(16, 133, 11),
QT_MOC_LITERAL(17, 145, 4),
QT_MOC_LITERAL(18, 150, 10),
QT_MOC_LITERAL(19, 161, 10)
    },
    "Library\0criticalCopy\0\0f\0newSong\0Song\0"
    "song\0libraryChanged\0Library*\0"
    "addSongInPlaylist\0file_rep\0playlist\0"
    "addFiles\0files\0reset\0moveFiles\0"
    "newPlaylist\0name\0deleteSong\0deleteFile\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Library[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x05,
       4,    1,   62,    2, 0x05,
       7,    1,   65,    2, 0x05,

 // slots: name, argc, parameters, tag, flags
       9,    2,   68,    2, 0x0a,
      12,    1,   73,    2, 0x0a,
      14,    0,   76,    2, 0x0a,
      15,    0,   77,    2, 0x0a,
      16,    1,   78,    2, 0x0a,
      18,    2,   81,    2, 0x0a,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 8,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   10,   11,
    QMetaType::Void, QMetaType::QStringList,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   17,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Bool,    6,   19,

       0        // eod
};

void Library::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Library *_t = static_cast<Library *>(_o);
        switch (_id) {
        case 0: _t->criticalCopy((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->newSong((*reinterpret_cast< const Song(*)>(_a[1]))); break;
        case 2: _t->libraryChanged((*reinterpret_cast< Library*(*)>(_a[1]))); break;
        case 3: _t->addSongInPlaylist((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: _t->addFiles((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 5: _t->reset(); break;
        case 6: _t->moveFiles(); break;
        case 7: _t->newPlaylist((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->deleteSong((*reinterpret_cast< const Song(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Library* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Library::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Library::criticalCopy)) {
                *result = 0;
            }
        }
        {
            typedef void (Library::*_t)(const Song & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Library::newSong)) {
                *result = 1;
            }
        }
        {
            typedef void (Library::*_t)(Library * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Library::libraryChanged)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject Library::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Library.data,
      qt_meta_data_Library,  qt_static_metacall, 0, 0}
};


const QMetaObject *Library::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Library::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Library.stringdata))
        return static_cast<void*>(const_cast< Library*>(this));
    return QObject::qt_metacast(_clname);
}

int Library::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void Library::criticalCopy(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Library::newSong(const Song & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Library::libraryChanged(Library * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
