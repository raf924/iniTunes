#include "musicbrainzclient.h"
#include <QEventLoop>
#include <QDebug>
#include <QStringList>

MusicBrainZClient::MusicBrainZClient(QObject *parent) :
    QObject(parent)
{
}

QStringList MusicBrainZClient::findArtist(const QString &artist)
{
    QNetworkRequest req(QUrl::fromEncoded(QUrl("http://musicbrainz.org/ws/2/artist/?query=artist:"+encode(artist)+"&limit=1").toEncoded()));
    QNetworkAccessManager man;
    QXmlStreamReader reader(man.get(req));
    QEventLoop loop;
    QObject::connect(&man,SIGNAL(finished(QNetworkReply*)),&loop,SLOT(quit()));
    loop.exec();
    QStringList resultat;
    while(reader.readNextStartElement()&&resultat.isEmpty())
    {
        if(reader.name()=="artist")
        {
            resultat<< reader.attributes().value("id").toString();
            reader.readNext();
            resultat<<reader.readElementText();

        }
    }
    return resultat.isEmpty()?QStringList()<<""<<artist:resultat;
}

QStringList MusicBrainZClient::findAlbum(const QString &album, const QString &artist)
{
    QNetworkRequest req(QUrl::fromEncoded(QUrl("http://musicbrainz.org/ws/2/release/?query=arid:"+artist+"AND("+encode(album)+")&limit=1").toEncoded()));
    QNetworkAccessManager man;
    QXmlStreamReader reader(man.get(req));
    QEventLoop loop;
    QObject::connect(&man,SIGNAL(finished(QNetworkReply*)),&loop,SLOT(quit()));
    loop.exec();
    QStringList resultat;
    while(reader.readNextStartElement()&&resultat.isEmpty())
    {
        if(reader.name()=="release")
        {
            resultat<< reader.attributes().value("id").toString();
            reader.readNext();
            resultat<<reader.readElementText();
        }
    }
    return resultat.isEmpty()?QStringList()<<""<<album:resultat;
}

QStringList MusicBrainZClient::findArtists(const QString &artist)
{
    return QStringList();
}

QStringList MusicBrainZClient::findAlbums(const QString &album, const QString &artist)
{
    return QStringList();
}


QString MusicBrainZClient::encode(const QString &term)
{
    QStringList terms = term.split(" ");
    QString encoded = "";
    foreach (QString t, terms)
    {
        encoded.append("\""+t+"\"OR");
    }
    encoded = encoded.remove(encoded.length()-2,2);
    qDebug()<<encoded;
    return encoded;
}
