#ifndef TABLE_H
#define TABLE_H

#include <QTableWidget>
#include "library.h"
enum Criteria{Tout=0,Nom,Album,Artiste,Genre};
class Table : public QTableWidget
{
    Q_OBJECT
private:
    QMap<int,int> rows;
    Library * library;
    SongList songlist;
    QTableWidgetItem * selected;
public:
    explicit Table(QWidget *parent = 0);
    void setLibrary(Library * lib);
    void addSong(const Song & song, int index);
    void setSongList(const SongList & songlist);
signals:
    void addSongs(const QStringList & );
    void songChosen(const Song &);
    void songChosen(int);
    void newPlaylist(const Song & );
    void deleteSong(const Song & ,bool);
    void playAgain();
    void newSongList(const SongList &);
    void songModified(const Song&);
    void addFileTriggered();
    void addFolderTriggered();
protected:
    void dropEvent(QDropEvent *event);
    void dragEnterEvent(QDragEnterEvent *event);
    void dragMoveEvent(QDragMoveEvent *event);
public slots:
    void setQuery(const QString & tag, int criteria = 0);
    void prepareFirstOfPlaylist();
    void mkSong(int row);
    void showSongsBy(const QString & artist);
    void showSongsFrom(const QString & album, const QString &artist);
    void showSongsIn(const QString & playlist);
    void addSongInList(const Song & song);
    void showContextMenu(const QPoint & point);
    void deleteCurrentItem();
    void modifSong(const Song &song);
    void addToPlaylist();
    void sort();
    void setIconTo(int previous, int current);
protected:
    void keyPressEvent(QKeyEvent *event);
};

#endif // TABLE_H
