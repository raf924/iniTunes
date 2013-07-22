#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "ui_mainwindow.h"
#include "player.h"
#include "library.h"
#include "remote.h"
#include "minilecteur.h"
#include <QtGui>

class MainWindow : public QMainWindow, private Ui::MainWindow
{
    Q_OBJECT
private:
    Player player;
    Library library;
    QMetaObject::Connection nextConnection;
    QMetaObject::Connection previousConnection;
    MiniLecteur mLecteur;
    QRect firstGeometry;
public:
    explicit MainWindow(QWidget *parent = 0);
    void mkconnections();
    void open(const QString & filename);
    void createRemote();
public slots:
    void openFile();
    void addFiles();
    void addFolder();
    void mkPlaylist(const Song &song);
    void changePlayerConnections(bool connected);
    void showWind(bool max);
protected:
    void resizeEvent(QResizeEvent *e);
};

#endif // MAINWINDOW_H
