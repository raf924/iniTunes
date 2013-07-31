/****************************************************************************
** Meta object code from reading C++ file 'nowplayingwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.1.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../nowplayingwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'nowplayingwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.1.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_NowPlayingWidget_t {
    QByteArrayData data[19];
    char stringdata[255];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_NowPlayingWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_NowPlayingWidget_t qt_meta_stringdata_NowPlayingWidget = {
    {
QT_MOC_LITERAL(0, 0, 16),
QT_MOC_LITERAL(1, 17, 14),
QT_MOC_LITERAL(2, 32, 0),
QT_MOC_LITERAL(3, 33, 15),
QT_MOC_LITERAL(4, 49, 13),
QT_MOC_LITERAL(5, 63, 13),
QT_MOC_LITERAL(6, 77, 15),
QT_MOC_LITERAL(7, 93, 19),
QT_MOC_LITERAL(8, 113, 28),
QT_MOC_LITERAL(9, 142, 11),
QT_MOC_LITERAL(10, 154, 5),
QT_MOC_LITERAL(11, 160, 7),
QT_MOC_LITERAL(12, 168, 4),
QT_MOC_LITERAL(13, 173, 4),
QT_MOC_LITERAL(14, 178, 16),
QT_MOC_LITERAL(15, 195, 16),
QT_MOC_LITERAL(16, 212, 22),
QT_MOC_LITERAL(17, 235, 6),
QT_MOC_LITERAL(18, 242, 11)
    },
    "NowPlayingWidget\0seekBarPressed\0\0"
    "seekBarReleased\0randomClicked\0"
    "repeatClicked\0positionChanged\0"
    "playBackModeChanged\0QMediaPlaylist::PlaybackMode\0"
    "setPosition\0value\0setSong\0Song\0song\0"
    "changeRandomMode\0changeRepeatMode\0"
    "seekBarActionTriggered\0action\0updateLabel\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NowPlayingWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x05,
       3,    0,   75,    2, 0x05,
       4,    0,   76,    2, 0x05,
       5,    0,   77,    2, 0x05,
       6,    1,   78,    2, 0x05,
       7,    1,   81,    2, 0x05,

 // slots: name, argc, parameters, tag, flags
       9,    1,   84,    2, 0x0a,
      11,    1,   87,    2, 0x0a,
      14,    0,   90,    2, 0x0a,
      15,    0,   91,    2, 0x0a,
      16,    1,   92,    2, 0x0a,
      18,    0,   95,    2, 0x0a,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, 0x80000000 | 8,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::LongLong,   10,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void,

       0        // eod
};

void NowPlayingWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        NowPlayingWidget *_t = static_cast<NowPlayingWidget *>(_o);
        switch (_id) {
        case 0: _t->seekBarPressed(); break;
        case 1: _t->seekBarReleased(); break;
        case 2: _t->randomClicked(); break;
        case 3: _t->repeatClicked(); break;
        case 4: _t->positionChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->playBackModeChanged((*reinterpret_cast< QMediaPlaylist::PlaybackMode(*)>(_a[1]))); break;
        case 6: _t->setPosition((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 7: _t->setSong((*reinterpret_cast< const Song(*)>(_a[1]))); break;
        case 8: _t->changeRandomMode(); break;
        case 9: _t->changeRepeatMode(); break;
        case 10: _t->seekBarActionTriggered((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->updateLabel(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
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
            typedef void (NowPlayingWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NowPlayingWidget::seekBarPressed)) {
                *result = 0;
            }
        }
        {
            typedef void (NowPlayingWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NowPlayingWidget::seekBarReleased)) {
                *result = 1;
            }
        }
        {
            typedef void (NowPlayingWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NowPlayingWidget::randomClicked)) {
                *result = 2;
            }
        }
        {
            typedef void (NowPlayingWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NowPlayingWidget::repeatClicked)) {
                *result = 3;
            }
        }
        {
            typedef void (NowPlayingWidget::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NowPlayingWidget::positionChanged)) {
                *result = 4;
            }
        }
        {
            typedef void (NowPlayingWidget::*_t)(QMediaPlaylist::PlaybackMode );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NowPlayingWidget::playBackModeChanged)) {
                *result = 5;
            }
        }
    }
}

const QMetaObject NowPlayingWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_NowPlayingWidget.data,
      qt_meta_data_NowPlayingWidget,  qt_static_metacall, 0, 0}
};


const QMetaObject *NowPlayingWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NowPlayingWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_NowPlayingWidget.stringdata))
        return static_cast<void*>(const_cast< NowPlayingWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int NowPlayingWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void NowPlayingWidget::seekBarPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void NowPlayingWidget::seekBarReleased()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void NowPlayingWidget::randomClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void NowPlayingWidget::repeatClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void NowPlayingWidget::positionChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void NowPlayingWidget::playBackModeChanged(QMediaPlaylist::PlaybackMode _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
