/****************************************************************************
** Meta object code from reading C++ file 'player.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.1.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../player.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'player.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.1.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Player_t {
    QByteArrayData data[37];
    char stringdata[381];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_Player_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_Player_t qt_meta_stringdata_Player = {
    {
QT_MOC_LITERAL(0, 0, 6),
QT_MOC_LITERAL(1, 7, 15),
QT_MOC_LITERAL(2, 23, 0),
QT_MOC_LITERAL(3, 24, 3),
QT_MOC_LITERAL(4, 28, 18),
QT_MOC_LITERAL(5, 47, 4),
QT_MOC_LITERAL(6, 52, 20),
QT_MOC_LITERAL(7, 73, 8),
QT_MOC_LITERAL(8, 82, 10),
QT_MOC_LITERAL(9, 93, 12),
QT_MOC_LITERAL(10, 106, 15),
QT_MOC_LITERAL(11, 122, 25),
QT_MOC_LITERAL(12, 148, 6),
QT_MOC_LITERAL(13, 155, 12),
QT_MOC_LITERAL(14, 168, 9),
QT_MOC_LITERAL(15, 178, 4),
QT_MOC_LITERAL(16, 183, 9),
QT_MOC_LITERAL(17, 193, 3),
QT_MOC_LITERAL(18, 197, 11),
QT_MOC_LITERAL(19, 209, 4),
QT_MOC_LITERAL(20, 214, 5),
QT_MOC_LITERAL(21, 220, 4),
QT_MOC_LITERAL(22, 225, 5),
QT_MOC_LITERAL(23, 231, 4),
QT_MOC_LITERAL(24, 236, 8),
QT_MOC_LITERAL(25, 245, 15),
QT_MOC_LITERAL(26, 261, 28),
QT_MOC_LITERAL(27, 290, 4),
QT_MOC_LITERAL(28, 295, 6),
QT_MOC_LITERAL(29, 302, 8),
QT_MOC_LITERAL(30, 311, 4),
QT_MOC_LITERAL(31, 316, 12),
QT_MOC_LITERAL(32, 329, 2),
QT_MOC_LITERAL(33, 332, 12),
QT_MOC_LITERAL(34, 345, 19),
QT_MOC_LITERAL(35, 365, 5),
QT_MOC_LITERAL(36, 371, 8)
    },
    "Player\0positionChanged\0\0pos\0"
    "currentSongChanged\0Song\0playbackStateChanged\0"
    "finished\0inPlaylist\0indexChanged\0"
    "showMediaStatus\0QMediaPlayer::MediaStatus\0"
    "status\0showMetaData\0playpause\0stop\0"
    "setVolume\0vol\0setPosition\0play\0pause\0"
    "song\0index\0next\0previous\0setPlayBackMode\0"
    "QMediaPlaylist::PlaybackMode\0mode\0"
    "update\0SongList\0list\0toggleSignal\0in\0"
    "stateChanged\0QMediaPlayer::State\0state\0"
    "sendSong\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Player[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  129,    2, 0x05,
       4,    1,  132,    2, 0x05,
       6,    1,  135,    2, 0x05,
       7,    0,  138,    2, 0x05,
       8,    1,  139,    2, 0x05,
       9,    2,  142,    2, 0x05,

 // slots: name, argc, parameters, tag, flags
      10,    1,  147,    2, 0x08,
      13,    0,  150,    2, 0x08,
      14,    0,  151,    2, 0x0a,
      15,    0,  152,    2, 0x0a,
      16,    1,  153,    2, 0x0a,
      18,    1,  156,    2, 0x0a,
      19,    0,  159,    2, 0x0a,
      20,    0,  160,    2, 0x0a,
      19,    1,  161,    2, 0x0a,
      19,    1,  164,    2, 0x0a,
      23,    0,  167,    2, 0x0a,
      24,    0,  168,    2, 0x0a,
      25,    1,  169,    2, 0x0a,
      28,    1,  172,    2, 0x0a,
      31,    1,  175,    2, 0x0a,
      33,    1,  178,    2, 0x0a,
      36,    1,  181,    2, 0x0a,

 // signals: parameters
    QMetaType::Void, QMetaType::LongLong,    3,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,   21,
    QMetaType::Void, QMetaType::Int,   22,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 26,   27,
    QMetaType::Void, 0x80000000 | 29,   30,
    QMetaType::Void, QMetaType::Bool,   32,
    QMetaType::Void, 0x80000000 | 34,   35,
    QMetaType::Void, QMetaType::Int,   22,

       0        // eod
};

void Player::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Player *_t = static_cast<Player *>(_o);
        switch (_id) {
        case 0: _t->positionChanged((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 1: _t->currentSongChanged((*reinterpret_cast< const Song(*)>(_a[1]))); break;
        case 2: _t->playbackStateChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->finished(); break;
        case 4: _t->inPlaylist((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->indexChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->showMediaStatus((*reinterpret_cast< QMediaPlayer::MediaStatus(*)>(_a[1]))); break;
        case 7: _t->showMetaData(); break;
        case 8: _t->playpause(); break;
        case 9: _t->stop(); break;
        case 10: _t->setVolume((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->setPosition((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->play(); break;
        case 13: _t->pause(); break;
        case 14: _t->play((*reinterpret_cast< const Song(*)>(_a[1]))); break;
        case 15: _t->play((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->next(); break;
        case 17: _t->previous(); break;
        case 18: _t->setPlayBackMode((*reinterpret_cast< QMediaPlaylist::PlaybackMode(*)>(_a[1]))); break;
        case 19: _t->update((*reinterpret_cast< const SongList(*)>(_a[1]))); break;
        case 20: _t->toggleSignal((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 21: _t->stateChanged((*reinterpret_cast< QMediaPlayer::State(*)>(_a[1]))); break;
        case 22: _t->sendSong((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMediaPlayer::MediaStatus >(); break;
            }
            break;
        case 18:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMediaPlaylist::PlaybackMode >(); break;
            }
            break;
        case 21:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMediaPlayer::State >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Player::*_t)(qint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Player::positionChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (Player::*_t)(const Song & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Player::currentSongChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (Player::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Player::playbackStateChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (Player::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Player::finished)) {
                *result = 3;
            }
        }
        {
            typedef void (Player::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Player::inPlaylist)) {
                *result = 4;
            }
        }
        {
            typedef void (Player::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Player::indexChanged)) {
                *result = 5;
            }
        }
    }
}

const QMetaObject Player::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Player.data,
      qt_meta_data_Player,  qt_static_metacall, 0, 0}
};


const QMetaObject *Player::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Player::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Player.stringdata))
        return static_cast<void*>(const_cast< Player*>(this));
    return QObject::qt_metacast(_clname);
}

int Player::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    }
    return _id;
}

// SIGNAL 0
void Player::positionChanged(qint64 _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Player::currentSongChanged(const Song & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Player::playbackStateChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Player::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void Player::inPlaylist(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Player::indexChanged(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
