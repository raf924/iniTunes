#include "library.h"
#include <QDebug>
#include <Qtime>
#include <QFileInfo>
#include <QMediaObject>
#include <QStringList>
#include <QDir>
#include <QStandardPaths>
#include <QtConcurrent>
#include <QThread>
#include <QProcess>
#include <QtConcurrentMap>
#include <QMessageBox>
#include <QVBoxLayout>
#include <QListWidget>
#include <QMediaPlayer>
#include <QLabel>
#include "coverprovider.h"

Library::Library(QObject *parent) :
    QObject(parent)
{
    settings = new QSettings(QStandardPaths::writableLocation(QStandardPaths::DataLocation)+"/iniTunes.inilib",QSettings::IniFormat);
    if(settings->value("Path").toString().isEmpty())
    {
        QString path = QStandardPaths::writableLocation(QStandardPaths::MusicLocation);
        settings->setValue("Path",path+"/iniTunes");
        QDir dir;
        dir.setPath(rmPath());
        if(!dir.exists())
        {
            dir.mkpath(rmPath());
        }
    }
}

QStringList Library::playlists()
{
    settings->beginGroup("Playlists");
    QStringList list = settings->childGroups();
    settings->endGroup();
    return list;
}

void Library::addSongInPlaylist(const Song &song, const QString &playlist)
{
    addSongInPlaylist(QCryptographicHash::hash(QFile::encodeName(song.path),QCryptographicHash::Md5),playlist);
}

void Library::addFiles(const QStringList & files)
{
    QStringList notSupportedFiles;
    foreach (QString filename, files)
    {
        QMediaPlayer p;
        p.setMedia(QUrl::fromLocalFile(filename));
        p.setMuted(true);
        p.play();
        QEventLoop loop;
        connect(&p,SIGNAL(mediaStatusChanged(QMediaPlayer::MediaStatus)),&loop,SLOT(quit()));
        loop.exec();
        if(p.mediaStatus()!=QMediaPlayer::InvalidMedia)
        {

            qDebug()<<"Adding file"<<p.availableMetaData()<<p.duration();
            Song song = getTags(filename);
            QStringList mbArtist = MusicBrainZClient::findArtist(song.artist);
            song.artist = mbArtist.last();
            QStringList mbAlbum = MusicBrainZClient::findAlbum(song.album,mbArtist.first());
            song.album = mbAlbum.last();
            QString file = rmPath()+"/"+song.artist+"/"+song.album+"/"+song.title+"."+filename.split(".").last();
            qDebug()<<"New filename devised";
            if(!QFile(file).exists())
            {
                QDir dir;
                dir.mkpath(rmPath()+"/"+song.artist+"/"+song.album);
                QFile::copy(filename,file);

            }
            song.path = file;
            addFileR(song);
        }
        else
        {
            notSupportedFiles<<filename;
        }
    }
    if(notSupportedFiles.count()>0)
    {
        qDebug()<<notSupportedFiles;
    }
}

Song Library::getTags(const QString &fi)
{
    QMediaPlayer m;
    m.setMedia(QMediaContent(QUrl::fromLocalFile(fi)));
    QEventLoop loop;
    connect(&m,SIGNAL(mediaStatusChanged(QMediaPlayer::MediaStatus)),&loop,SLOT(quit()));
    loop.exec();
    QTime time(0,0);
    QString length = m.duration();
    time = time.addMSecs(length);
    Song metaData;
    foreach (QString metakey, m.availableMetaData()) {
        metaData[metakey] = m.metaData(metakey);
    }
    metaData["Length"] = time.toString(time.hour()>0?"hh:mm:ss":"mm:ss");
    metaData["Path"] = fi;
    return metaData;
}

SongList Library::getSongs()
{
    SongList slist;
    settings->beginGroup("Songs");
    slist = songs(settings->childKeys());
    settings->endGroup();
    return slist;
}

QString Library::artwork(const Song &song)
{
    enter(song.value("AlbumArtist"),song.value("AlbumTitle"));
    settings->beginGroup("Artwork");
    QString art = settings->value("Path").toString();
    leave();
    return QStandardPaths::writableLocation(QStandardPaths::DataLocation)+"/"+art+".jpg";
}

void Library::convert(const QString & filename)
{
    QProcess *cmd = new QProcess();
    QStringList list;
    list <<"-f"<<"mp3"<< "-i"<<filename<<"-ab"<<"320k"<<"-y"<<filename;
    cmd->execute("ffmpeg",list);
    cmd->waitForFinished();
    addFileR(getTags(filename));
}

QStringList Library::getAlbums(const QString & artist)
{
    enter(artist);
    settings->beginGroup("Albums");
    QStringList s = settings->childGroups();
    leave();
    return s;
}

SongList Library::getSongsFrom(const QString & album, const QString & artist)
{
    SongList slist;
    enter(artist,album);
    QStringList keys = values(settings->childKeys());
    leave();
    settings->beginGroup("Songs");
    slist = songs(keys);
    settings->endGroup();
    return slist;

}

SongList Library::getSongsBy(const QString & artist)
{
    SongList slist;
    enter(artist);
    settings->beginGroup("Albums");
    QStringList albums = settings->childGroups();
    QStringList file_reps;
    foreach (QString album, albums)
    {
        settings->beginGroup(album);
        file_reps = values(settings->childKeys());
        settings->endGroup();
    }
    leave();
    settings->beginGroup("Songs");
    slist = songs(file_reps);
    settings->endGroup();
    return slist;
}

void Library::removePlaylist(const QString & name)
{
    settings->remove(name);
    QStringList list = playlists();
    list.removeOne(name);
    settings->setValue("playlists",list);
}

QString Library::rmPath()
{
    return settings->value("Path").toString();
}

SongList Library::playlist(const QString & name)
{
    SongList slist;
    settings->beginGroup("Playlists");
    settings->beginGroup(name);
    QStringList file_reps = values(settings->childKeys());
    settings->endGroup();
    settings->endGroup();
    settings->beginGroup("Songs");
    slist = songs(file_reps);
    settings->endGroup();
    return slist;
}

QStringList Library::artists()
{
    settings->beginGroup("Artistes");
    QStringList s = settings->childGroups();
    settings->endGroup();
    return s;
}

void Library::addSongInPlaylist(const QString & file_rep,const QString & playlist)
{
    settings->beginGroup("Playlists");
    settings->beginGroup(playlist);
    settings->setValue(QString::number(settings->childKeys().count()>0?settings->childKeys().last().toInt()+1:0),file_rep);
    settings->endGroup();
    settings->endGroup();
}

void Library::deleteSong(const Song &song, bool deleteFile)
{
    QString file_rep = QCryptographicHash::hash(QFile::encodeName(song.value("Path")),QCryptographicHash::Md5);
    enter(song.value("AlbumArtist"),song.value("AlbumTitle"));
    foreach (QString key, settings->childKeys())
    {
        if(settings->value(key).toString()==file_rep)
        {
            settings->remove(key);
            break;
        }
    }
    if(settings->childKeys().count()==0)
    {
        settings->remove("");
        settings->endGroup();
        if(settings->childGroups().count()==0)
        {
            settings->endGroup();
            settings->remove("");
        }
    }
    leave();
    settings->beginGroup("Songs");
    settings->remove(file_rep);
    settings->endGroup();
    if(deleteFile)
    {
        QFile::remove(song.value("Path"));
    }
    emit libraryChanged(this);
}

void Library::newPlaylist(const QString & name)
{
    settings->beginGroup("Playlists");
    settings->beginGroup(name);
    settings->endGroup();
    qDebug()<<settings->allKeys();
    settings->endGroup();
}

void Library::addFileR(const Song & song)
{

    QString file_rep(QCryptographicHash::hash(QFile::encodeName(song.value("Path").toString()),QCryptographicHash::Md5));
    settings->beginGroup("Songs");
    if(!settings->contains(file_rep))
    {
        settings->setValue(file_rep,song);
        qDebug()<<"Song In LIb";
        settings->endGroup();
        enter(song.value("AlbumArtist").toString(),song.value("AlbumTitle").toString());
        if(settings->childGroups().count()==0)
        {
            settings->beginGroup("Artwork");
            settings->setValue("Path",CoverProvider::getCover(song.value("AlbumArtist").toString(),song.value("AlbumTitle").toString(),QStandardPaths::writableLocation(QStandardPaths::DataLocation)));
            settings->endGroup();
        }
        settings->setValue(QString::number(settings->childKeys().count()>0?settings->childKeys().last().toInt()+1:0),file_rep);
        leave();
        //Fin
        //checkDouble();
        //checkCover();
        //emit finished();
        emit newSong(song);
        emit libraryChanged(this);
    }
    else
        settings->endGroup();


}

void Library::modifSong(const Song &song)
{
    deleteSong(song,false);
    addFiles(song.value("Path").toString().split(" "));
    QFile::remove(song.value("Path").toString());
}

void Library::leave()
{
    while(!settings->group().isEmpty())
    {
        settings->endGroup();
    }
}

void Library::enter(const QString &artist, const QString &album)
{
    settings->beginGroup("Artistes");
    settings->beginGroup(artist);
    if(!album.isEmpty())
    {
        settings->beginGroup("Albums");
        settings->beginGroup(album);
    }
}

void Library::reset()
{
    settings->clear();
}

void Library::moveFiles()
{
    QStringList files;
    files = settings->value("Titles").toStringList();
    foreach (QString file, files)
    {
        QFileInfo i;
        i.setFile(file);
        QString newFile = rmPath()+"/"+i.completeBaseName();
        if(!QFile(newFile).exists())
        {
            if(QFile::copy(file,newFile))
                {
                QFile::remove(file);
                QStringList list;
                list << newFile;
                addFiles(list);
                }
            else
                {
                emit criticalCopy(file);
                }
        }
    }
}

QStringList Library::values(const QStringList &keys)
{
    QStringList vals;
    foreach (QString key, keys)
    {
        vals<<settings->value(key).toString();
    }
    return vals;
}

SongList Library::songs(const QStringList &file_refs)
{
    SongList slist;
    foreach (QString key, file_refs)
    {
        if(settings->contains(key))
        {
            Song song =settings->value(key).toMap();
            qDebug()<<song.path;
            slist<<song;
        }
    }
    return slist;
}
