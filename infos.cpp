#include "infos.h"
#include <QDebug>

Infos::Infos(const Song &song, QWidget *parent) :
    QDialog(parent)
{
    setupUi(this);
    qDebug()<<buttonBox->isEnabled();
    setLayout(verticalLayout);
    this->song = song;
    path->setText(song.value("Path").toString());
    title->setText(song.value("Title").toString());
    artist->setText(song.value("AlbumArtist").toString());
    album->setText(song.value("AlbumTitle").toString());
    genre->setText(song.value("Genre").toString());
    length->setText(song.value("Length").toString());
    Library lib;
    QImage image;
    image.load(lib.artwork(song));
    if(image.isNull())
    {
        image.load(":/icons/NoCover.png");
    }
    art->setPixmap(QPixmap::fromImage(image.scaled(300,300,Qt::KeepAspectRatio)));
    connect(buttonBox,SIGNAL(accepted()),SLOT(modify()));
}
void Infos::modify()
{

    bool newTitle = song["Title"].toString()!=title->text();
    bool newAlbum = song["AlbumTitle"].toString()!=album->text();
    bool newArtist =song["AlbumArtist"].toString()!=artist->text();
    bool newGenre = song["Genre"].toString()!=genre->text();
    if(newGenre||newTitle||newAlbum||newArtist)
    {
        qDebug()<<"New tags";
        QStringList options;
        if(newTitle)
        {
            options << "-t"<<title->text();
        }
        if(newAlbum)
        {
            options << "-al"<<album->text();
        }
        if(newArtist)
        {
            options << "-ar"<<artist->text();
        }
        if(newGenre)
        {
            options << "-ge"<<genre->text();
        }
        QProcess cmd;
        QStringList args;
        args << "-jar" << "SetTag.jar"<<song["Path"].toString()<<options;
        cmd.start("java",args);
        cmd.waitForFinished();
        emit songModified(song);
    }

}
