#ifndef COVERPROVIDER_H
#define COVERPROVIDER_H

#include <QObject>
#include "library.h"
#include <QNetworkRequest>
#include <QNetworkAccessManager>
#include <QXmlStreamReader>

class CoverProvider : public QObject
{
    Q_OBJECT
public:
    explicit CoverProvider(QObject *parent = 0);
    static QString getCover(const QString &artist, const QString &album, const QString &path);
    static void downloadCover(const QString &mbid, const QString &path, const QString &asin = QString());
signals:
    
public slots:
    
};

#endif // COVERPROVIDER_H
