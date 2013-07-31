#include "remote.h"

Remote::Remote(QObject *parent) :
    QTcpServer(parent)
{
    local = new QLocalServer();
    connect(this,SIGNAL(newConnection()),SLOT(con()));
    connect(local,SIGNAL(newConnection()),SLOT(localcon()));
    local->listen("iniTunes");
    listen(QHostAddress::Any,8080);
    QTcpServer *server = new QTcpServer();
    connect(server,SIGNAL(newConnection()),SLOT(con()));
    server->listen(QHostAddress::Any,serverPort()+1);
}

void Remote::con()
{
        QTcpServer *server = qobject_cast<QTcpServer*>(sender());
        //server->disconnect(SIGNAL(newConnection()));
        QTcpSocket *socket = server->nextPendingConnection();
        QTextStream text(socket);
        //text << "RMusic"<<endl;
        sockets<<socket;
        int sport = serverPort();
        int port = socket->localPort();
        if(port == sport)
        {

            qDebug()<<"Connected to 5000:"<<connect(socket,SIGNAL(readyRead()),SLOT(receive()));
        }
        else//if(port == sport +1)
        {
            qDebug()<<"Connected to 5001:"<<connect(socket,SIGNAL(readyRead()),SLOT(seekReceive()));

        }
        connect(socket,SIGNAL(disconnected()),SLOT(removeSocket()));

}

void Remote::receive()
{
    QTcpSocket *socket = qobject_cast<QTcpSocket *>(sender());
    int action = socket->readAll().toInt();//socket->readAll().toInt();
    qDebug()<<"Action received:"<<action;
    QTextStream text(socket);
    QString read;
    switch(action)
    {
    case PLAY:
        emit play_pause();
        break;
    case NEXT:
        emit next();
        break;
    case PREVIOUS:
        emit previous();
        break;
    case REWIND:
        emit rewin();
        break;
    case FORWARD:
        emit forward();
        break;
    case VOLUMEDOWN:
        emit volume(false);
        break;
    case VOLUMEUP:
        emit volume(true);
        break;
    case RANDOMON:
        qDebug()<<"Random";
        emit random(true);
        break;
    case RANDOMOFF:
        qDebug()<<"Random";
        emit random(false);
        break;
    case REPEATON:
        emit repeat(true);
        break;
    case REPEATOFF:
        emit repeat(false);
        break;
    case QUIT:
        qDebug()<<"Quit";
        emit quit();
        break;
    case UP:
        qDebug()<<"Up";
        emit up();
        break;
    case DOWN:
        qDebug()<<"Down";
        emit down();
        break;
    case OK:
        emit ok();
        break;
    case LIBRARY:
        qDebug()<<"Library";
        text << "li\n"<<endl;
        text << songlist.count()+"\n"<<endl;
        foreach(Song song, songlist)
        {
            qDebug()<<"Sending a song";
            text << song.value("Title").toString()+"///"
                    +song.value("Duration").toString()+"///"
                    +song.value("AlbumTitle").toString()+"///"
                    +song.value("AlbumArtist").toString()+"///"
                    +song.value("Genre").toString()
                 <<endl;
            Sleep(100);
        }
        text << "il"<<endl;
        qDebug()<<"Songs sent";
        break;
    case SEARCH:
        read = socket->readLine();
        emit newQuery(read);
        break;
    case SONG:
        socket->waitForReadyRead();
        QString song = socket->readLine();
        emit songChosen(song.toInt());
        break;

    }
}

void Remote::seekCon()
{
    //QTcpSocket *socket = qobject_cast<QTcpServer*>(sender());

}

void Remote::sendSeek(qint64 time)
{
    foreach (QTcpSocket *socket, sockets)
    {
        if(socket->localPort()==serverPort()+1)
        {
            QTextStream text(socket);
            text << QString::number(time)<<endl;
        }
    }
}

void Remote::newTrack(const Song & song)
{
    foreach (QTcpSocket *socket, sockets)
    {
        if(socket->localPort()!=serverPort()+1)
        {
            QTextStream text(socket);
            text <<"New Song"<<endl
                <<song.value("Title").toString()
               <<endl
              <<song.value("AlbumTitle").toString()
             <<endl
            <<song.value("AlbumArtist").toString()
            <<endl
            <<song.value("Genre").toString()
            <<endl
            <<song.value("Duration").toString()
            <<endl;
        }
    }
}

void Remote::removeSocket()
{
    QTcpSocket *socket = qobject_cast<QTcpSocket*>(sender());
    sockets.removeOne(socket);
}

void Remote::repeatChanged(QMediaPlaylist::PlaybackMode mode)
{
    foreach (QTcpSocket *socket, sockets)
    {
        if(socket->localPort()!=serverPort()+1)
        {
            QTextStream text(socket);
            text << "rep"<<endl<<mode<<endl;
        }
    }
}

void Remote::localcon()
{
    QLocalSocket *socket = local->nextPendingConnection();
    connect(socket,SIGNAL(readyRead()),SLOT(localreceive()));
}

void Remote::localreceive()
{
    qDebug()<<"Action received";
    QLocalSocket *socket = qobject_cast<QLocalSocket *>(sender());
    QTextStream stream(socket);
    int action = stream.readLine().toInt();
    switch(action)
    {
    case PLAY:
        qDebug()<<PLAY;
        QString filename = stream.readLine();
        emit open(Library::getTags(filename));
        break;
    }

}

void Remote::seekReceive()
{
    QTcpSocket *socket = qobject_cast<QTcpSocket *>(sender());
    QTextStream text(socket);
    QString stime;
    text >> stime;
    emit seek(stime.toInt());
}

void Remote::randomChanged(bool ch)
{
    qDebug()<<"Random changed";
    foreach (QTcpSocket *socket, sockets)
    {
        if(socket->localPort()!=serverPort()+1)
        {
            QTextStream text(socket);
            QString rep = ch?"true":"false";
            text << "ran"<<endl<<rep<<endl;
        }
    }
}
