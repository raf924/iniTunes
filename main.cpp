#include "mainwindow.h"
#include <QMediaPlayer>
#include <QMediaService>
#include <QMediaServiceProviderPlugin>
#include <QApplication>
#include <QDebug>
#include <QEventLoop>
#include <QLocalSocket>
#include "musicbrainzclient.h"
#include "minilecteur.h"
//#include <id3.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    QStringList args = a.arguments();
    QLocalSocket socket;
    socket.connectToServer("iniTunes");
    QTextStream stream(&socket);
    if(socket.waitForConnected(3000))
    {
        stream <<QString::number(PLAY)<<endl;
        stream << args.at(1) <<endl;
        socket.waitForBytesWritten();
        exit(0);
    }
    else
    {
        qDebug()<<"Launch";
        w.show();
        w.createRemote();
        if(args.count()==2)
        {
            qDebug()<<"Open";
            w.open(args.at(1));
        }
    }
    return a.exec();
}
