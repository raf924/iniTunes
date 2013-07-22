#include "bar.h"
#include <QTime>
#include <QDebug>
#include <QtGui>

Bar::Bar(QWidget *parent) :
    MobileWidget(parent)
{
    setupUi(this);
    configureUi();
    mkconnections();
    volumeBar->setValue(50);

}

void Bar::mkconnections()
{
    connect(this,SIGNAL(moving()),SLOT(restoreOnMove()));
    connect(this,SIGNAL(onTopEdge()),maximize,SLOT(click()));
    connect(search,SIGNAL(newQuery(QString,int)),SIGNAL(newQuery(QString,int)));
    connect(maximize,SIGNAL(clicked(bool)),SLOT(changeMaximize(bool)));
    connect(closeButton,SIGNAL(clicked()),SIGNAL(closeClicked()));
    connect(hideButton,SIGNAL(clicked()),SIGNAL(hideClicked()));
    connect(maximize,SIGNAL(clicked(bool)),SIGNAL(maximizeClicked(bool)));
    connect(ffw,SIGNAL(clicked()),SIGNAL(nextClicked()));
    connect(rw,SIGNAL(clicked()),SIGNAL(previousClicked()));
    connect(play,SIGNAL(clicked()),SIGNAL(playClicked()));
    connect(volumeBar,SIGNAL(valueChanged(int)),SIGNAL(volumeChanged(int)));
    connect(addFile,SIGNAL(clicked()),SIGNAL(addFilePressed()));
    connect(addFolder,SIGNAL(clicked()),SIGNAL(addFolderPressed()));
    connect(mLecteur,SIGNAL(clicked()),SIGNAL(miniLecteur()));
    connect(npWidget,SIGNAL(seekBarReleased()),SIGNAL(seekBarReleased()));
    connect(this,SIGNAL(seekChanged(qint64)),npWidget,SLOT(setPosition(qint64)));
    connect(this,SIGNAL(songChanged(Song)),npWidget,SLOT(setSong(Song)));
    connect(npWidget,SIGNAL(positionChanged(int)),SIGNAL(positionChanged(int)));
    connect(npWidget,SIGNAL(seekBarPressed()),SIGNAL(seekBarPressed()));
    connect(npWidget,SIGNAL(playBackModeChanged(QMediaPlaylist::PlaybackMode)),SIGNAL(newPlaybackMode(QMediaPlaylist::PlaybackMode)));
}

void Bar::configureUi()
{
    grid->setVisible(false);
    list->setVisible(false);
    mLecteur->setVisible(false);
    setLayout(horizontalLayout);
    volumeBar->setMinimumWidth(50);
    addFile->setVisible(false);
    addFolder->setVisible(false);
    volumeBar->setMaximumWidth(100);
}
void Bar::resizeEvent(QResizeEvent *)
{

}


void Bar::changeButton(bool playing)
{
    play->setIcon(QIcon(playing?":/icons/MD-pause.png":":/icons/MD-play.png"));
}

void Bar::enableNavigation(bool enabled)
{
    ffw->setEnabled(enabled);
    rw->setEnabled(enabled);
    npWidget->setPlaybackModeEnabled(enabled);
}

void Bar::changeMaximize(bool max)
{
    maximize->setIcon(QIcon(max?":/icons/window-stack.png":":/icons/window.png"));
}

void Bar::restoreOnMove()
{
    if(maximize->isChecked())
    {
        maximize->click();
    }
}
