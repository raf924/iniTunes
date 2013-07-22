#ifndef REMOTE_H
#define REMOTE_H

#include <QTcpServer>
#include <QtNetwork>
#include "library.h"
#include <QMediaPlaylist>
enum ACTION {PLAY=0,NEXT=1,PREVIOUS=2,REWIND=3,FORWARD=4,VOLUMEDOWN=5,VOLUMEUP=6,RANDOMON=7,RANDOMOFF=8,REPEATON=9,REPEATOFF=10,QUIT=11,UP=12,DOWN=13,OK=14,LIBRARY=15,SONG=16,SEARCH=17};
class Remote : public QTcpServer
{
    Q_OBJECT
public:
    explicit Remote(QObject *parent = 0);
private:
    QList<QTcpSocket *>sockets;
    QLocalServer *local;
    SongList songlist;
signals:
    void play_pause();
    void next();
    void previous();
    void rewin();
    void forward();
    void seek(qint64 mills);
    void volume(bool up);
    void random(bool random);
    void repeat(bool repeat);
    void up();
    void down();
    void ok();
    void quit();
    void open(const Song &);
    void open(int);
    void songChosen(int);
    void newQuery(const QString &);
    
public slots:
    void localreceive();
    void seekReceive();
    void localcon();
    void con();
    void receive();
    void seekCon();
    void sendSeek(qint64 time);
    void newTrack(const Song &song);
    void removeSocket();
    void repeatChanged(QMediaPlaylist::PlaybackMode mode);
    void randomChanged(bool ch);    
};

#endif // REMOTE_H
