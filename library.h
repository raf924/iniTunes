#ifndef LIBRARY_H
#define LIBRARY_H

#include <QObject>
#include <QSettings>
#include <QMetaType>
#include <QtCore>
#include "musicbrainzclient.h"
struct Song{
    QString path;
    QString title;
    QString album;
    QString artist;
    int length;
    QString genre;
    QString d_length;
};
Q_DECLARE_METATYPE(Song)
typedef QList<Song> SongList;
class Library : public QObject
{
    Q_OBJECT
private:
    QSettings *settings;
    QStringList values(const QStringList & keys);
    SongList songs(const QStringList &file_refs);
public:
    explicit Library(QObject *parent = 0);
    QStringList playlists();
    void addSongInPlaylist(const Song &song, const QString &playlist);
    static QStringList getTags(const QString & fi);
    static Song getSong(const QString & filename);
    SongList getSongs();
    QString artwork(const Song & song);
    void convert(const QString & filename);
    QStringList getAlbums(const QString & artist);
    SongList getSongsFrom(const QString & album, const QString &artist);
    SongList getSongsBy(const QString & artist);
    void removePlaylist(const QString & name);
    QString rmPath();
    SongList playlist(const QString & name);
    QStringList artists();
    void setArtwork(const QString & album, const QString & artwork);
    void addFileR(const Song &song);
    void modifSong(const Song &song);
    void leave();
    void enter(const QString & artist, const QString & album = QString());

signals:
    void criticalCopy(const QString & f);
    void newSong(const Song & song);
    void libraryChanged(Library *);

public slots:
    void addSongInPlaylist(const QString & file_rep, const QString & playlist);
    void addFiles(const QStringList & files);
    void reset();
    void moveFiles();
    void newPlaylist(const QString & name);
    void deleteSong(const Song &song, bool deleteFile);


};
QDataStream &operator<<(QDataStream & out, const Song & song);
QDataStream &operator>>(QDataStream & in, Song & song);

#endif // LIBRARY_H
