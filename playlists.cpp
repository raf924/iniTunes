#include "playlists.h"
#include <QDropEvent>
#include "table.h"

Playlists::Playlists(QWidget *parent) :
    QTableWidget(parent)
{
    connect(this,SIGNAL(itemClicked(QTableWidgetItem*)),SLOT(mkPlaylist(QTableWidgetItem*)));
}

void Playlists::addPlaylists(const QStringList & list)
{
    foreach (QString name, list)
    {
        addPlaylist(name);
    }
}

void Playlists::addPlaylist(const QString &name)
{
    insertRow(rowCount());
    setItem(rowCount()-1,0,new QTableWidgetItem(name));
}

void Playlists::mkPlaylist(QTableWidgetItem *item)
{
    emit playlistChosen(item->text());
}

void Playlists::dropEvent(QDropEvent *event)
{
    QTableWidgetItem * playlist;
    if(playlist = itemAt(event->pos()))
    {
        Table * table = qobject_cast<Table*>(event->source());
        foreach (QTableWidgetSelectionRange range, table->selectedRanges())
        {
            Song song = table->item(range.topRow(),0)->data(32).toMap();
            emit songAdded(QCryptographicHash::hash(QFile::encodeName(song["Path"].toString()),QCryptographicHash::Md5),playlist->text());
        }
    }
}
