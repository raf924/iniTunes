#ifndef PLAYER_H
#define PLAYER_H

#include <QObject>
#include <QMediaPlayer>
#include <QMediaPlaylist>
#include "library.h"

class Player : public QObject
{
    Q_OBJECT
public:
    explicit Player(QObject *parent = 0);
    void play(const QString & filename);
    Song currentSong();
private:
    SongList songList;
    QMediaPlayer player;
    bool playing;
    int currentIndex;
private slots:
    void showMediaStatus(QMediaPlayer::MediaStatus status);
    void showMetaData();
signals:
    void positionChanged(qint64 pos);
    void currentSongChanged(const Song &);
    void playbackStateChanged(bool);
    void finished();
    void inPlaylist(bool);
    void indexChanged(int,int);
public slots:
    void playpause();
    void stop();
    void setVolume(int vol);
    void setPosition(int pos);
    void play();
    void pause();
    void play(const Song & song);
    void play(int index);
    void next();
    void previous();
    void setPlayBackMode(QMediaPlaylist::PlaybackMode mode);
    void update(const SongList &list);
    void toggleSignal(bool in);
    void stateChanged(QMediaPlayer::State state);
    void sendSong(int index);

};

#endif // PLAYER_H
