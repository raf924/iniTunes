/****************************************************************************
** Meta object code from reading C++ file 'bar.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.1.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../bar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.1.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Bar_t {
    QByteArrayData data[28];
    char stringdata[354];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_Bar_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_Bar_t qt_meta_stringdata_Bar = {
    {
QT_MOC_LITERAL(0, 0, 3),
QT_MOC_LITERAL(1, 4, 14),
QT_MOC_LITERAL(2, 19, 0),
QT_MOC_LITERAL(3, 20, 15),
QT_MOC_LITERAL(4, 36, 11),
QT_MOC_LITERAL(5, 48, 11),
QT_MOC_LITERAL(6, 60, 15),
QT_MOC_LITERAL(7, 76, 15),
QT_MOC_LITERAL(8, 92, 13),
QT_MOC_LITERAL(9, 106, 15),
QT_MOC_LITERAL(10, 122, 28),
QT_MOC_LITERAL(11, 151, 8),
QT_MOC_LITERAL(12, 160, 14),
QT_MOC_LITERAL(13, 175, 16),
QT_MOC_LITERAL(14, 192, 11),
QT_MOC_LITERAL(15, 204, 11),
QT_MOC_LITERAL(16, 216, 4),
QT_MOC_LITERAL(17, 221, 11),
QT_MOC_LITERAL(18, 233, 12),
QT_MOC_LITERAL(19, 246, 11),
QT_MOC_LITERAL(20, 258, 15),
QT_MOC_LITERAL(21, 274, 12),
QT_MOC_LITERAL(22, 287, 7),
QT_MOC_LITERAL(23, 295, 16),
QT_MOC_LITERAL(24, 312, 7),
QT_MOC_LITERAL(25, 320, 14),
QT_MOC_LITERAL(26, 335, 3),
QT_MOC_LITERAL(27, 339, 13)
    },
    "Bar\0seekBarPressed\0\0seekBarReleased\0"
    "playClicked\0nextClicked\0previousClicked\0"
    "positionChanged\0volumeChanged\0"
    "newPlaybackMode\0QMediaPlaylist::PlaybackMode\0"
    "newQuery\0addFilePressed\0addFolderPressed\0"
    "miniLecteur\0songChanged\0Song\0seekChanged\0"
    "closeClicked\0hideClicked\0maximizeClicked\0"
    "changeButton\0playing\0enableNavigation\0"
    "enabled\0changeMaximize\0max\0restoreOnMove\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Bar[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      17,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  119,    2, 0x05,
       3,    0,  120,    2, 0x05,
       4,    0,  121,    2, 0x05,
       5,    0,  122,    2, 0x05,
       6,    0,  123,    2, 0x05,
       7,    1,  124,    2, 0x05,
       8,    1,  127,    2, 0x05,
       9,    1,  130,    2, 0x05,
      11,    2,  133,    2, 0x05,
      12,    0,  138,    2, 0x05,
      13,    0,  139,    2, 0x05,
      14,    0,  140,    2, 0x05,
      15,    1,  141,    2, 0x05,
      17,    1,  144,    2, 0x05,
      18,    0,  147,    2, 0x05,
      19,    0,  148,    2, 0x05,
      20,    1,  149,    2, 0x05,

 // slots: name, argc, parameters, tag, flags
      21,    1,  152,    2, 0x0a,
      23,    1,  155,    2, 0x0a,
      25,    1,  158,    2, 0x0a,
      27,    0,  161,    2, 0x0a,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, 0x80000000 | 10,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 16,    2,
    QMetaType::Void, QMetaType::LongLong,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,   22,
    QMetaType::Void, QMetaType::Bool,   24,
    QMetaType::Void, QMetaType::Bool,   26,
    QMetaType::Void,

       0        // eod
};

void Bar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Bar *_t = static_cast<Bar *>(_o);
        switch (_id) {
        case 0: _t->seekBarPressed(); break;
        case 1: _t->seekBarReleased(); break;
        case 2: _t->playClicked(); break;
        case 3: _t->nextClicked(); break;
        case 4: _t->previousClicked(); break;
        case 5: _t->positionChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->volumeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->newPlaybackMode((*reinterpret_cast< QMediaPlaylist::PlaybackMode(*)>(_a[1]))); break;
        case 8: _t->newQuery((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 9: _t->addFilePressed(); break;
        case 10: _t->addFolderPressed(); break;
        case 11: _t->miniLecteur(); break;
        case 12: _t->songChanged((*reinterpret_cast< const Song(*)>(_a[1]))); break;
        case 13: _t->seekChanged((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 14: _t->closeClicked(); break;
        case 15: _t->hideClicked(); break;
        case 16: _t->maximizeClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->changeButton((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: _t->enableNavigation((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 19: _t->changeMaximize((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 20: _t->restoreOnMove(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMediaPlaylist::PlaybackMode >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Bar::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Bar::seekBarPressed)) {
                *result = 0;
            }
        }
        {
            typedef void (Bar::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Bar::seekBarReleased)) {
                *result = 1;
            }
        }
        {
            typedef void (Bar::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Bar::playClicked)) {
                *result = 2;
            }
        }
        {
            typedef void (Bar::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Bar::nextClicked)) {
                *result = 3;
            }
        }
        {
            typedef void (Bar::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Bar::previousClicked)) {
                *result = 4;
            }
        }
        {
            typedef void (Bar::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Bar::positionChanged)) {
                *result = 5;
            }
        }
        {
            typedef void (Bar::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Bar::volumeChanged)) {
                *result = 6;
            }
        }
        {
            typedef void (Bar::*_t)(QMediaPlaylist::PlaybackMode );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Bar::newPlaybackMode)) {
                *result = 7;
            }
        }
        {
            typedef void (Bar::*_t)(const QString & , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Bar::newQuery)) {
                *result = 8;
            }
        }
        {
            typedef void (Bar::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Bar::addFilePressed)) {
                *result = 9;
            }
        }
        {
            typedef void (Bar::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Bar::addFolderPressed)) {
                *result = 10;
            }
        }
        {
            typedef void (Bar::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Bar::miniLecteur)) {
                *result = 11;
            }
        }
        {
            typedef void (Bar::*_t)(const Song & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Bar::songChanged)) {
                *result = 12;
            }
        }
        {
            typedef void (Bar::*_t)(qint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Bar::seekChanged)) {
                *result = 13;
            }
        }
        {
            typedef void (Bar::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Bar::closeClicked)) {
                *result = 14;
            }
        }
        {
            typedef void (Bar::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Bar::hideClicked)) {
                *result = 15;
            }
        }
        {
            typedef void (Bar::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Bar::maximizeClicked)) {
                *result = 16;
            }
        }
    }
}

const QMetaObject Bar::staticMetaObject = {
    { &MobileWidget::staticMetaObject, qt_meta_stringdata_Bar.data,
      qt_meta_data_Bar,  qt_static_metacall, 0, 0}
};


const QMetaObject *Bar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Bar::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Bar.stringdata))
        return static_cast<void*>(const_cast< Bar*>(this));
    return MobileWidget::qt_metacast(_clname);
}

int Bar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MobileWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    }
    return _id;
}

// SIGNAL 0
void Bar::seekBarPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void Bar::seekBarReleased()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void Bar::playClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void Bar::nextClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void Bar::previousClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void Bar::positionChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Bar::volumeChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Bar::newPlaybackMode(QMediaPlaylist::PlaybackMode _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void Bar::newQuery(const QString & _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void Bar::addFilePressed()
{
    QMetaObject::activate(this, &staticMetaObject, 9, 0);
}

// SIGNAL 10
void Bar::addFolderPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 10, 0);
}

// SIGNAL 11
void Bar::miniLecteur()
{
    QMetaObject::activate(this, &staticMetaObject, 11, 0);
}

// SIGNAL 12
void Bar::songChanged(const Song & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void Bar::seekChanged(qint64 _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void Bar::closeClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 14, 0);
}

// SIGNAL 15
void Bar::hideClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 15, 0);
}

// SIGNAL 16
void Bar::maximizeClicked(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}
QT_END_MOC_NAMESPACE
