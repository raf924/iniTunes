#ifndef MUSICBRAINZCLIENT_H
#define MUSICBRAINZCLIENT_H

#include <QObject>
#include <QXmlStreamReader>
#include <QNetworkReply>
#include <QNetworkRequest>
#include <QNetworkAccessManager>

class MusicBrainZClient : public QObject
{
    Q_OBJECT
public:
    explicit MusicBrainZClient(QObject *parent = 0);
    static QStringList findArtist(const QString &artist);
    static QStringList findAlbum(const QString & album, const QString & artist);
    static QStringList findArtists(const QString &artist);
    static QStringList findAlbums(const QString &album, const QString &artist);
    static QString encode(const QString &term);
signals:
    
public slots:
    
};

#endif // MUSICBRAINZCLIENT_H
