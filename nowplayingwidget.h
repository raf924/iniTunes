#ifndef NOWPLAYINGWIDGET_H
#define NOWPLAYINGWIDGET_H

#include "ui_nowplayingwidget.h"
#include "library.h"
#include <QMediaPlaylist>

class NowPlayingWidget : public QWidget, private Ui::NowPlayingWidget
{
    Q_OBJECT
private:
    QMediaPlaylist::PlaybackMode currentMode();
    Library lib;
    void mkConnections();
    QMediaPlaylist::PlaybackMode randomMode;
    QMediaPlaylist::PlaybackMode repeatMode;
public:
    explicit NowPlayingWidget(QWidget *parent = 0);
    void setPlaybackModeEnabled(bool enabled);
    bool eventFilter(QObject *sender, QEvent *event);
signals:
    void seekBarPressed();
    void seekBarReleased();
    void randomClicked();
    void repeatClicked();
    void positionChanged(int);
    void playBackModeChanged(QMediaPlaylist::PlaybackMode);
public slots:
    void setPosition(qint64 value);
    void setSong(const Song &song);
    void changeRandomMode();
    void changeRepeatMode();
    void seekBarActionTriggered(int action);
    void updateLabel();

};

#endif // NOWPLAYINGWIDGET_H
