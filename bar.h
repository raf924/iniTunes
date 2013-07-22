#ifndef BAR_H
#define BAR_H

#include "ui_bar.h"
#include "library.h"
#include <QMediaPlaylist>
#include "mobilewidget.h"
class Bar : public MobileWidget, private Ui::Bar
{
    Q_OBJECT
private:
    void mkconnections();
    void configureUi();
    Library lib;
public:
    explicit Bar(QWidget *parent = 0);
public slots:
    void changeButton(bool playing);
    void enableNavigation(bool enabled);
    void changeMaximize(bool max);
    void restoreOnMove();
signals:
    void seekBarPressed();
    void seekBarReleased();
    void playClicked();
    void nextClicked();
    void previousClicked();
    void positionChanged(int);
    void volumeChanged(int);
    void newPlaybackMode(QMediaPlaylist::PlaybackMode);
    void newQuery(const QString &,int);
    void addFilePressed();
    void addFolderPressed();
    void miniLecteur();
    void songChanged(const Song &);
    void seekChanged(qint64);
    void closeClicked();
    void hideClicked();
    void maximizeClicked(bool);
protected:
    void resizeEvent(QResizeEvent *);
};

#endif // BAR_H
