#include "coverprovider.h"
#include <QtGui>
#include <QtNetwork>
#include <QFileDialog>
#include <QtConcurrent>

CoverProvider::CoverProvider(QObject *parent) :
    QObject(parent)
{
}

QString CoverProvider::getCover(const QString &artist, const QString & album, const QString & path)
{
    QNetworkRequest req(QUrl::fromEncoded(QUrl("http://musicbrainz.org/ws/2/release/?query=artist:\""+artist+"\"AND release:\""+album+"\"&limit=1").toEncoded()));
    QNetworkAccessManager man;
    QXmlStreamReader reader(man.get(req));
    QEventLoop loop;
    QObject::connect(&man,SIGNAL(finished(QNetworkReply*)),&loop,SLOT(quit()));
    loop.exec();
    QString mbid;
    QString asin;
    while(reader.readNextStartElement()&&mbid.isEmpty())
    {
        if(reader.name()=="release")
        {
            mbid = reader.attributes().value("id").toString();
            while(reader.readNext()!=QXmlStreamReader::EndElement&&asin.isEmpty())
            {
                if(reader.name()=="asin")
                {
                    asin = reader.readElementText();
                }
            }
        }
    }
    if(mbid.isEmpty())
    {
        QString file = QFileDialog::getOpenFileName(0,"Il n'existe pas de cover art sur coverartarchive.org ni sur Amazon, choisissez un fichier depuis votre ordinateur",QStandardPaths::writableLocation(QStandardPaths::PicturesLocation),"JPEG (*.jpg *.jpeg)");
        QFile::copy(file,path+"/"+QFileInfo(QFile(file)).baseName()+".jpg");
        mbid = QFileInfo(QFile(file)).baseName();
    }
    else
    {
        QFuture<void> f = QtConcurrent::run(&CoverProvider::downloadCover,mbid,path,asin);
    }
    return mbid;
}

void CoverProvider::downloadCover(const QString &mbid, const QString & path, const QString & asin)
{
    qDebug()<<"Donwloading";
    QNetworkRequest req(QUrl("http://coverartarchive.org/release/"+mbid+"/front"));
    QNetworkAccessManager man;
    QNetworkReply *rep = man.get(req);
    QEventLoop loop;
    QObject::connect(&man,SIGNAL(finished(QNetworkReply*)),&loop,SLOT(quit()));
    loop.exec();
    QUrl url(QString(rep->readAll()));
    if(!url.isEmpty())
    {
        url = url.fromEncoded(url.toEncoded());
        url.setUrl(QUrl::fromPercentEncoding(url.toString().section("http",1,-1,QString::SectionIncludeLeadingSep).toUtf8()).trimmed());

    }
    else if(!asin.isEmpty())
    {
        url.setUrl("http://images.amazon.com/P/"+asin+".01.LZZZZZZZ.jpg");
    }
    qDebug()<<"Url of cover"<<url.toString();
    bool stopRedirect = false;
    do
    {
        req.setUrl(url);
        rep = man.get(req);
        QObject::connect(&man,SIGNAL(finished(QNetworkReply*)),&loop,SLOT(quit()));
        loop.exec();
        stopRedirect = rep->attribute(QNetworkRequest::RedirectionTargetAttribute).toUrl().isEmpty();
        url = stopRedirect?url:rep->attribute(QNetworkRequest::RedirectionTargetAttribute).toUrl();
        qDebug()<<url;
    }
    while(!stopRedirect);
    QImage image;
    image.load(rep,"jpg");
    if(!image.save(path+"/"+mbid+".jpg"))
    {
        QString file = QFileDialog::getOpenFileName(0,"Téléchargement raté Il n'existe pas de cover art sur coverartarchive.org ni sur Amazon, choisissez un fichier depuis votre ordinateur");
        QFile f(file);
        f.copy(path+"/"+mbid+".jpg");
    }
    qDebug()<<"Cover downloaded";
}
