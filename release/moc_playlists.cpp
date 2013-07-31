/****************************************************************************
** Meta object code from reading C++ file 'playlists.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.1.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../playlists.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'playlists.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.1.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Playlists_t {
    QByteArrayData data[9];
    char stringdata[88];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_Playlists_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_Playlists_t qt_meta_stringdata_Playlists = {
    {
QT_MOC_LITERAL(0, 0, 9),
QT_MOC_LITERAL(1, 10, 14),
QT_MOC_LITERAL(2, 25, 0),
QT_MOC_LITERAL(3, 26, 9),
QT_MOC_LITERAL(4, 36, 11),
QT_MOC_LITERAL(5, 48, 4),
QT_MOC_LITERAL(6, 53, 10),
QT_MOC_LITERAL(7, 64, 17),
QT_MOC_LITERAL(8, 82, 4)
    },
    "Playlists\0playlistChosen\0\0songAdded\0"
    "addPlaylist\0name\0mkPlaylist\0"
    "QTableWidgetItem*\0item\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Playlists[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x05,
       3,    2,   37,    2, 0x05,

 // slots: name, argc, parameters, tag, flags
       4,    1,   42,    2, 0x0a,
       6,    1,   45,    2, 0x0a,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, 0x80000000 | 7,    8,

       0        // eod
};

void Playlists::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Playlists *_t = static_cast<Playlists *>(_o);
        switch (_id) {
        case 0: _t->playlistChosen((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->songAdded((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->addPlaylist((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->mkPlaylist((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Playlists::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Playlists::playlistChosen)) {
                *result = 0;
            }
        }
        {
            typedef void (Playlists::*_t)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Playlists::songAdded)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject Playlists::staticMetaObject = {
    { &QTableWidget::staticMetaObject, qt_meta_stringdata_Playlists.data,
      qt_meta_data_Playlists,  qt_static_metacall, 0, 0}
};


const QMetaObject *Playlists::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Playlists::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Playlists.stringdata))
        return static_cast<void*>(const_cast< Playlists*>(this));
    return QTableWidget::qt_metacast(_clname);
}

int Playlists::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTableWidget::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void Playlists::playlistChosen(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Playlists::songAdded(const QString & _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
