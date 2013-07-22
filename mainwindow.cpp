#include "mainwindow.h"
#include <QtConcurrent>
#include <QFileDialog>
#include <QProgressDialog>
#include <QInputDialog>
#include <QDesktopWidget>
#include <QScreen>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
{
    setupUi(this);
    firstGeometry = normalGeometry();
    firstGeometry.setTopLeft(firstGeometry.center());
    setWindowFlags(Qt::FramelessWindowHint);
    Ui_MainWindow::menuBar->setVisible(false);
    setWindowTitle("iniTunes");
    setCentralWidget(frame);
    frame->setLayout(verticalLayout);
    mkconnections();
    table->setLibrary(&library);
    tree->updateTree(&library);
    playlists->addPlaylists(library.playlists());
    qDebug()<<"End of constructor";
    qApp->setStyleSheet("QPushButton{   border-radius:1px;   font : bold 10px;   min-width: 1em;   }");
}

void MainWindow::mkconnections()
{
    connect(bar,SIGNAL(closeClicked()),SLOT(close()));
    connect(bar,SIGNAL(maximizeClicked(bool)),SLOT(showWind(bool)));
    connect(bar,SIGNAL(hideClicked()),SLOT(showMinimized()));
    connect(playlists,SIGNAL(songAdded(QString,QString)),&library,SLOT(addSongInPlaylist(QString,QString)));
    connect(bar,SIGNAL(addFilePressed()),SLOT(addFiles()));
    connect(bar,SIGNAL(addFolderPressed()),SLOT(addFolder()));
    connect(&player,SIGNAL(inPlaylist(bool)),SLOT(changePlayerConnections(bool)));
    connect(&library,SIGNAL(newSong(Song)),table,SLOT(addSongInList(Song)));
    connect(&player,SIGNAL(positionChanged(qint64)),bar,SIGNAL(seekChanged(qint64)));
    connect(&player,SIGNAL(currentSongChanged(Song)),bar,SIGNAL(songChanged(Song)));
    connect(bar,SIGNAL(playClicked()),&player,SLOT(playpause()));
    connect(addFile,SIGNAL(triggered()),SLOT(addFiles()));
    connect(actionAddFolder,SIGNAL(triggered()),SLOT(addFolder()));
    connect(actionOuvrir,SIGNAL(triggered()),SLOT(openFile()));
    connect(bar,SIGNAL(volumeChanged(int)),&player,SLOT(setVolume(int)));
    connect(bar,SIGNAL(positionChanged(int)),&player,SLOT(setPosition(int)));
    connect(bar,SIGNAL(seekBarPressed()),&player,SLOT(pause()));
    connect(bar,SIGNAL(seekBarReleased()),&player,SLOT(play()));
    connect(&player,SIGNAL(playbackStateChanged(bool)),bar,SLOT(changeButton(bool)));
    connect(tree,SIGNAL(albumChosen(QString,QString)),table,SLOT(showSongsFrom(QString,QString)));
    connect(tree,SIGNAL(artistChosen(QString)),table,SLOT(showSongsBy(QString)));
    connect(&library,SIGNAL(libraryChanged(Library*)),tree,SLOT(updateTree(Library*)));
    connect(table,SIGNAL(newPlaylist(Song)),this,SLOT(mkPlaylist(Song)));
    connect(playlists,SIGNAL(playlistChosen(QString)),table,SLOT(showSongsIn(QString)));
    connect(table,SIGNAL(deleteSong(Song,bool)),&library,SLOT(deleteSong(Song,bool)));
    connect(bar,SIGNAL(newQuery(QString,int)),table,SLOT(setQuery(QString,int)));
    connect(bar,SIGNAL(newPlaybackMode(QMediaPlaylist::PlaybackMode)),&player,SLOT(setPlayBackMode(QMediaPlaylist::PlaybackMode)));
    connect(table,SIGNAL(songChosen(int)),&player,SLOT(play(int)));
    connect(table,SIGNAL(newSongList(SongList)),&player,SLOT(update(SongList)));
    connect(&player,SIGNAL(inPlaylist(bool)),bar,SLOT(enableNavigation(bool)));
    connect(bar,SIGNAL(miniLecteur()),&mLecteur,SLOT(show()));
    connect(bar,SIGNAL(miniLecteur()),SLOT(hide()));
    connect(&mLecteur,SIGNAL(windowedMode()),SLOT(show()));
    connect(&mLecteur,SIGNAL(positionChanged(int)),bar,SIGNAL(positionChanged(int)));
    connect(&mLecteur,SIGNAL(seekBarPressed()),bar,SIGNAL(seekBarPressed()));
    connect(&mLecteur,SIGNAL(seekBarReleased()),bar,SIGNAL(seekBarReleased()));
    connect(&mLecteur,SIGNAL(positionChanged(int)),bar,SIGNAL(positionChanged(int)));
    connect(&mLecteur,SIGNAL(playClicked()),bar,SIGNAL(playClicked()));
    connect(&mLecteur,SIGNAL(nextClicked()),bar,SIGNAL(nextClicked()));
    connect(&mLecteur,SIGNAL(previousClicked()),bar,SIGNAL(previousClicked()));
    connect(&mLecteur,SIGNAL(volumeChanged(int)),bar,SIGNAL(volumeChanged(int)));
    connect(&player,SIGNAL(currentSongChanged(Song)),&mLecteur,SLOT(setNewSong(Song)));
    connect(&player,SIGNAL(positionChanged(qint64)),&mLecteur,SLOT(setPosition(qint64)));
    connect(&player,SIGNAL(playbackStateChanged(bool)),&mLecteur,SLOT(changeButton(bool)));
    connect(&player,SIGNAL(indexChanged(int,int)),table,SLOT(setIconTo(int,int)));
    connect(table,SIGNAL(addFileTriggered()),SLOT(addFiles()));
    connect(table,SIGNAL(addFolderTriggered()),SLOT(addFolder()));

}

void MainWindow::open(const QString &filename)
{
    player.play(Library::getTags(filename));
}

void MainWindow::createRemote()
{
    Remote * remote = new Remote;
    connect(remote,SIGNAL(open(Song)),&player,SLOT(play(Song)));
    connect(remote,SIGNAL(open(int)),&player,SLOT(play(int)));

}

void MainWindow::openFile()
{
    QString file = QFileDialog::getOpenFileName(this,"Ouvrir un fichier",QStandardPaths::writableLocation(QStandardPaths::HomeLocation),"Tous les fichiers (*)");
    player.play(file);
}

void MainWindow::addFiles()
{

    QStringList files = QFileDialog::getOpenFileNames(this,"Ajouter un ou plusieurs fichiers",QStandardPaths::writableLocation(QStandardPaths::MusicLocation),"Tous les fichiers (*)");
    if(!files.isEmpty())
    {
        QFuture<void> f = QtConcurrent::run(&library,&Library::addFiles,files);
    }
}

void MainWindow::addFolder()
{
    QStringList files;
    QDirIterator it(QFileDialog::getExistingDirectory(this,"Choisissez un dossier",QStandardPaths::writableLocation(QStandardPaths::MusicLocation)),QDirIterator::Subdirectories);
    if(!it.path().isEmpty())
    {
        while(it.hasNext())
        {
            QString nextit = it.next();
            if(!nextit.endsWith(".")&&!nextit.endsWith(".."))
            {
                    files << nextit;
            }
        }
        QFuture<void> f = QtConcurrent::run(&library,&Library::addFiles,files);
    }

}

void MainWindow::mkPlaylist(const Song & song)
{
    QInputDialog di(this);
    di.setLabelText("Nommer votre nouvelle playlist");
    if(QDialog::Accepted==di.exec()&&!library.playlists().contains(di.textValue()))
    {
        qDebug()<<"Accepted";
        playlists->addPlaylist(di.textValue());
        library.addSongInPlaylist(QCryptographicHash::hash(QFile::encodeName(song.value("Path").toString()),QCryptographicHash::Md5),di.textValue());
    }
    else if(library.playlists().contains(di.textValue()))
    {
        mkPlaylist(song);
    }
}

void MainWindow::changePlayerConnections(bool connected)
{
    if(connected)
    {
        nextConnection = connect(bar,SIGNAL(nextClicked()),&player,SLOT(next()));
        previousConnection =  connect(bar,SIGNAL(previousClicked()),&player,SLOT(previous()));
    }
    else
    {
        disconnect(nextConnection);
        disconnect(previousConnection);
    }
}

void MainWindow::showWind(bool max)
{
    setGeometry(max?qApp->screens().first()->availableGeometry():firstGeometry);
}

void MainWindow::resizeEvent(QResizeEvent *e)
{
    bar->changeMaximize(rect()==qApp->screens().first()->availableGeometry());
}
