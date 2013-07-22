#ifndef PLAYLISTS_H
#define PLAYLISTS_H

#include <QTableWidget>
#include "library.h"

class Playlists : public QTableWidget
{
    Q_OBJECT
public:
    explicit Playlists(QWidget *parent = 0);
    void addPlaylists(const QStringList &list);
signals:
    void playlistChosen(const QString &);
    void songAdded(const QString&, const QString&);
public slots:
    void addPlaylist(const QString & name);
    void mkPlaylist(QTableWidgetItem * item);
protected:
    void dropEvent(QDropEvent *event);
    
};

#endif // PLAYLISTS_H
