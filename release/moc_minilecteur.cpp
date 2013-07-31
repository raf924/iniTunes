/****************************************************************************
** Meta object code from reading C++ file 'minilecteur.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.1.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../minilecteur.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'minilecteur.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.1.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MiniLecteur_t {
    QByteArrayData data[17];
    char stringdata[187];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_MiniLecteur_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_MiniLecteur_t qt_meta_stringdata_MiniLecteur = {
    {
QT_MOC_LITERAL(0, 0, 11),
QT_MOC_LITERAL(1, 12, 14),
QT_MOC_LITERAL(2, 27, 0),
QT_MOC_LITERAL(3, 28, 15),
QT_MOC_LITERAL(4, 44, 11),
QT_MOC_LITERAL(5, 56, 11),
QT_MOC_LITERAL(6, 68, 15),
QT_MOC_LITERAL(7, 84, 15),
QT_MOC_LITERAL(8, 100, 13),
QT_MOC_LITERAL(9, 114, 12),
QT_MOC_LITERAL(10, 127, 11),
QT_MOC_LITERAL(11, 139, 4),
QT_MOC_LITERAL(12, 144, 10),
QT_MOC_LITERAL(13, 155, 4),
QT_MOC_LITERAL(14, 160, 4),
QT_MOC_LITERAL(15, 165, 12),
QT_MOC_LITERAL(16, 178, 7)
    },
    "MiniLecteur\0seekBarPressed\0\0seekBarReleased\0"
    "playClicked\0nextClicked\0previousClicked\0"
    "positionChanged\0volumeChanged\0"
    "windowedMode\0setPosition\0seek\0setNewSong\0"
    "Song\0song\0changeButton\0playing\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MiniLecteur[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x05,
       3,    0,   70,    2, 0x05,
       4,    0,   71,    2, 0x05,
       5,    0,   72,    2, 0x05,
       6,    0,   73,    2, 0x05,
       7,    1,   74,    2, 0x05,
       8,    1,   77,    2, 0x05,
       9,    0,   80,    2, 0x05,

 // slots: name, argc, parameters, tag, flags
      10,    1,   81,    2, 0x0a,
      12,    1,   84,    2, 0x0a,
      15,    1,   87,    2, 0x0a,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::LongLong,   11,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, QMetaType::Bool,   16,

       0        // eod
};

void MiniLecteur::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MiniLecteur *_t = static_cast<MiniLecteur *>(_o);
        switch (_id) {
        case 0: _t->seekBarPressed(); break;
        case 1: _t->seekBarReleased(); break;
        case 2: _t->playClicked(); break;
        case 3: _t->nextClicked(); break;
        case 4: _t->previousClicked(); break;
        case 5: _t->positionChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->volumeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->windowedMode(); break;
        case 8: _t->setPosition((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 9: _t->setNewSong((*reinterpret_cast< const Song(*)>(_a[1]))); break;
        case 10: _t->changeButton((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MiniLecteur::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MiniLecteur::seekBarPressed)) {
                *result = 0;
            }
        }
        {
            typedef void (MiniLecteur::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MiniLecteur::seekBarReleased)) {
                *result = 1;
            }
        }
        {
            typedef void (MiniLecteur::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MiniLecteur::playClicked)) {
                *result = 2;
            }
        }
        {
            typedef void (MiniLecteur::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MiniLecteur::nextClicked)) {
                *result = 3;
            }
        }
        {
            typedef void (MiniLecteur::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MiniLecteur::previousClicked)) {
                *result = 4;
            }
        }
        {
            typedef void (MiniLecteur::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MiniLecteur::positionChanged)) {
                *result = 5;
            }
        }
        {
            typedef void (MiniLecteur::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MiniLecteur::volumeChanged)) {
                *result = 6;
            }
        }
        {
            typedef void (MiniLecteur::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MiniLecteur::windowedMode)) {
                *result = 7;
            }
        }
    }
}

const QMetaObject MiniLecteur::staticMetaObject = {
    { &MobileWidget::staticMetaObject, qt_meta_stringdata_MiniLecteur.data,
      qt_meta_data_MiniLecteur,  qt_static_metacall, 0, 0}
};


const QMetaObject *MiniLecteur::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MiniLecteur::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MiniLecteur.stringdata))
        return static_cast<void*>(const_cast< MiniLecteur*>(this));
    return MobileWidget::qt_metacast(_clname);
}

int MiniLecteur::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MobileWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void MiniLecteur::seekBarPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void MiniLecteur::seekBarReleased()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void MiniLecteur::playClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void MiniLecteur::nextClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void MiniLecteur::previousClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void MiniLecteur::positionChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void MiniLecteur::volumeChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void MiniLecteur::windowedMode()
{
    QMetaObject::activate(this, &staticMetaObject, 7, 0);
}
QT_END_MOC_NAMESPACE
