#include "table.h"
#include <QListWidget>
#include <QDropEvent>
#include <QMessageBox>
#include <QMediaPlayer>
#include <QMenu>
#include "infos.h"
#include "multipleinfos.h"

Table::Table(QWidget *parent) :
    QTableWidget(parent)
{
    setAcceptDrops(true);
    setDropIndicatorShown(true);
    setDragDropMode(QListWidget::InternalMove);
    setDragEnabled(true);
    setAlternatingRowColors(true);
    connect(this,SIGNAL(cellDoubleClicked(int,int)),SLOT(mkSong(int)));
    setContextMenuPolicy(Qt::CustomContextMenu);
    connect(this,SIGNAL(customContextMenuRequested(QPoint)),SLOT(showContextMenu(QPoint)));
    connect(horizontalHeader(),SIGNAL(sortIndicatorChanged(int,Qt::SortOrder)),SLOT(sortByColumn(int)));
    connect(horizontalHeader(),SIGNAL(sortIndicatorChanged(int,Qt::SortOrder)),SLOT(sort()));
    setSortingEnabled(true);
}

void Table::setLibrary(Library *lib)
{
    setRowCount(0);
    library = lib;
    qDebug()<<"Library Set";
    songlist = lib->getSongs();
    setSongList(songlist);
}

void Table::addSong(const Song &song, int index)
{
    qDebug()<<song.title;
    setSortingEnabled(false);
    QString toolt = "Nom:"+song.title+"\nDurée:"+song.d_length+"\nAlbum:"+song.album+"\nArtist:"+song.artist+"\nGenre:"+song.genre;
    insertRow(rowCount());
    QTableWidgetItem *title =  new QTableWidgetItem(song.title);
    QTableWidgetItem *album = new QTableWidgetItem(song.album);
    QTableWidgetItem *artist = new QTableWidgetItem(song.artist);
    QTableWidgetItem *length = new QTableWidgetItem(song.d_length);
    QTableWidgetItem *genre = new QTableWidgetItem(song.genre);
    setItem(rowCount()-1,0,title);
    setItem(rowCount()-1,1,length);
    setItem(rowCount()-1,2,album);
    setItem(rowCount()-1,3,artist);
    setItem(rowCount()-1,4,genre);
    setItem(rowCount()-1,5,new QTableWidgetItem(""));

    for(int i = 0;i<columnCount();i++)
    {
        item(rowCount()-1,i)->setTextAlignment(Qt::AlignCenter);
        item(rowCount()-1,i)->setData(32,qVariantFromValue(song));
        item(rowCount()-1,i)->setData(33,index);
        item(rowCount()-1,i)->setToolTip(toolt);
        int textSize = fontMetrics().width(item(rowCount()-1,i)->text());
        if(columnWidth(i)<textSize)
        {
            setColumnWidth(i,textSize);
        }
    }
    setSortingEnabled(true);
    rows[index] = rowCount()-1;
}

void Table::setSongList(const SongList &songlist)
{
    clearContents();
    setRowCount(0);
    for(int i=0;i<songlist.count();i++)
    {
        addSong(songlist.at(i),i);
    }
    emit newSongList(songlist);
    qDebug()<<"Songs added";
}

void Table::dropEvent(QDropEvent *event)
{
    qDebug()<<"Drop";

    const QMimeData *md = event->mimeData();
    if(md->hasUrls())
    {
        QStringList files;
        foreach (QUrl url, md->urls())
        {
            files<<url.toLocalFile();
        }
        library->addFiles(files);
    }
    event->acceptProposedAction();
}

void Table::dragEnterEvent(QDragEnterEvent *event)
{
    qDebug()<<"Drag enter event"<<event->mimeData()->formats();
    if (event->mimeData()->hasFormat("text/uri-list"))
        event->acceptProposedAction();
}

void Table::dragMoveEvent(QDragMoveEvent *event)
{
    qDebug()<<"Drag move event";

}

void Table::prepareFirstOfPlaylist()
{
    emit newPlaylist(currentItem()->data(32).value<Song>());
}

void Table::mkSong(int row)
{
    emit songChosen(item(row,0)->data(33).toInt());
}

void Table::showSongsBy(const QString &artist)
{
    songlist = artist.isEmpty()?library->getSongs():library->getSongsBy(artist);
    setSongList(songlist);
}

void Table::addSongInList(const Song &song)
{
    songlist<<song;
    if(songlist.count()==rowCount()+1)
    {
        addSong(song,songlist.count()-1);
    }
    emit newSongList(songlist);
}

void Table::showContextMenu(const QPoint &point)
{
    QMenu menu;

    if(selected = itemAt(point))
    {
        QList<Infos *> infosList;
        foreach (QTableWidgetSelectionRange range, selectedRanges())
        {
            Song song = item(range.topRow(),0)->data(32).value<Song>();
            qDebug()<<song.path;
            Infos * infos = new Infos(song);
            infosList << infos;
            connect(infos,SIGNAL(songModified(Song)),SIGNAL(songModified(Song)));
        }
        MultipleInfos mInfos(infosList);
        connect(menu.addAction("Informations"),SIGNAL(triggered()),&mInfos,SLOT(exec()));
        connect(menu.addAction("Supprimer"),SIGNAL(triggered()),SLOT(deleteCurrentItem()));
        QMenu *playlist = menu.addMenu("Ajouter à une playlist");
        connect(playlist->addAction("Nouvelle playlist"),SIGNAL(triggered()),SLOT(prepareFirstOfPlaylist()));
        foreach (QString string, library->playlists())
        {
            connect(playlist->addAction(string),SIGNAL(triggered()),SLOT(addToPlaylist()));
        }
    }
    else
    {
        connect(menu.addAction("Ajouter un fichier"),SIGNAL(triggered()),SIGNAL(addFileTriggered()));
        connect(menu.addAction("Ajouter un dossier"),SIGNAL(triggered()),SIGNAL(addFolderTriggered()));
    }
    menu.exec(QCursor::pos());


}

void Table::deleteCurrentItem()
{
    foreach (QTableWidgetSelectionRange range, selectedRanges())
    {
        Song song = item(range.topRow(),0)->data(32).value<Song>();
        removeRow(range.topRow());
        emit deleteSong(song,true);
    }

}

void Table::modifSong(const Song &song)
{
    removeRow(selected->row());
    emit songModified(song);
}

void Table::addToPlaylist()
{
    QAction * action = qobject_cast<QAction *>(sender());
    library->addSongInPlaylist(selected->data(32).value<Song>(),action->text());
}

void Table::sort()
{
    for(int i = 0;i<rowCount();i++)
    {
        rows[item(i,0)->data(33).toInt()] = i;
    }
}

void Table::setIconTo(int previous, int current)
{
    qDebug()<<"Setting icon";
    if(previous>-1)item(previous,0)->setIcon(QIcon());
    setIconSize(QSize(16,16));
    item(rows[current],0)->setIcon(QIcon(":/icons/MD-volume-3.png"));
}

void Table::keyPressEvent(QKeyEvent *event)
{
    if(event->key()==Qt::Key_Delete)
    {
        emit deleteCurrentItem();
    }
}

void Table::setQuery(const QString &tag, int criteria)
{
    clearContents();
    setSortingEnabled(false);
    setRowCount(0);
    for(int i = 0;i<songlist.count();i++)
    {
        Song song = songlist.at(i);
        bool condition;
        bool title = song.title.contains(tag,Qt::CaseInsensitive);
        bool artiste = song.artist.contains(tag,Qt::CaseInsensitive);
        bool album = song.album.contains(tag,Qt::CaseInsensitive);
        bool genre = song.genre.contains(tag,Qt::CaseInsensitive);
        switch(criteria)
        {
        case Tout:
            condition = title||artiste||album||genre;
            break;
        case Nom:
            condition = title;
            break;
        case Album:
            condition = album;
            break;
        case Artiste:
            condition = artiste;
            break;
        case Genre:
            condition = genre;
            break;
        }
        if(condition)
        {
            addSong(song,i);
        }
    }
}


void Table::showSongsFrom(const QString &album, const QString & artist)
{
    songlist = library->getSongsFrom(album,artist);
    setSongList(songlist);
}

void Table::showSongsIn(const QString &playlist)
{
    songlist = library->playlist(playlist);
    setSongList(songlist);
}
