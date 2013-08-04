#include "player.h"

Player::Player(QObject *parent) :
    QObject(parent)
{
    playing = false;
    currentIndex = -1;
    player.setVolume(50);
    connect(&player,SIGNAL(positionChanged(qint64)),SIGNAL(positionChanged(qint64)));
    connect(&player,SIGNAL(mediaStatusChanged(QMediaPlayer::MediaStatus)),SLOT(showMediaStatus(QMediaPlayer::MediaStatus)));
    connect(this,SIGNAL(inPlaylist(bool)),SLOT(toggleSignal(bool)));
    connect(&player,SIGNAL(metaDataAvailableChanged(bool)),SLOT(showMetaData()));
    connect(&player,SIGNAL(metaDataChanged()),SLOT(showMetaData()));
    connect(&player,SIGNAL(stateChanged(QMediaPlayer::State)),SLOT(stateChanged(QMediaPlayer::State)));
}

void Player::play(const QString &filename)
{
    play(Library::getSong(filename));
}

void Player::play(const Song &song)
{
    emit inPlaylist(false);
    player.setMedia(QMediaContent(QUrl::fromLocalFile(song.path)));
    player.play();
    playing = true;
    emit currentSongChanged(song);
    emit playbackStateChanged(playing);
}

void Player::play(int index)
{
    qDebug()<<songList.at(index).path<<"playing";
    emit inPlaylist(true);
    playing = true;
    update(songList);
    player.playlist()->setCurrentIndex(index);
    player.play();
    emit playbackStateChanged(playing);
    sendSong(index);

}

void Player::setPlayBackMode(QMediaPlaylist::PlaybackMode mode)
{   
        player.playlist()->setPlaybackMode(mode);
}

void Player::update(const SongList & list)
{
    songList = list;
    QMediaPlaylist *plist = new QMediaPlaylist;
    foreach (Song song, songList)
    {
        plist->addMedia(QMediaContent(QUrl::fromLocalFile(song.path)));
    }
    player.setPlaylist(plist);
    connect(player.playlist(),SIGNAL(currentIndexChanged(int)),SLOT(sendSong(int)));

}

void Player::toggleSignal(bool in)
{
    /*
    if(in)
        connect(player.playlist(),SIGNAL(currentIndexChanged(int)),SLOT(sendSong(int)));
    else
        disconnect(player.playlist(),SIGNAL(currentIndexChanged(int)));
        */



}

void Player::stateChanged(QMediaPlayer::State state)
{
    qDebug()<<"State change : "<<state;
    emit playbackStateChanged(state==QMediaPlayer::PlayingState);
}

void Player::sendSong(int index)
{
    emit playbackStateChanged(true);
    qDebug()<<"Emitting signals";
    emit currentSongChanged(songList.at(index));
    emit indexChanged(currentIndex,index);
    currentIndex = index;
    qDebug()<<"Signals emitted";
}

void Player::next()
{
    if(player.playlist()->nextIndex()>-1)
        player.playlist()->next();
    else
        player.playlist()->setCurrentIndex(player.playlist()->currentIndex());
    emit currentSongChanged(songList.at(player.playlist()->currentIndex()));
}

void Player::previous()
{
    if(player.playlist()->previousIndex()>-1)
        player.playlist()->previous();
    else
        player.playlist()->setCurrentIndex(player.playlist()->currentIndex());
    emit currentSongChanged(songList.at(player.playlist()->currentIndex()));
}

Song Player::currentSong()
{
    return songList.at(player.playlist()->currentIndex());
}

void Player::showMediaStatus(QMediaPlayer::MediaStatus status)
{
    if(status == QMediaPlayer::EndOfMedia)
    {
        playing = false;
        emit playbackStateChanged(playing);
        emit finished();
    }
}

void Player::showMetaData()
{
    //qDebug()<<player.availableMetaData();
}

void Player::playpause()
{
    playing = !playing;
    emit playbackStateChanged(playing);
    if(player.state()==QMediaPlayer::PlayingState)
        player.pause();
    else if(!player.currentMedia().isNull())
        player.play();
}


void Player::stop()
{
    player.stop();
}

void Player::setVolume(int vol)
{
    player.setVolume(vol);
}

void Player::setPosition(int pos)
{
    blockSignals(true);
    player.setPosition(pos);
    blockSignals(false);
}

void Player::play()
{
    qDebug()<<"Play";
    if(playing)
        player.play();
}

void Player::pause()
{
    qDebug()<<"Pause";
    player.pause();
}
