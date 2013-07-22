#-------------------------------------------------
#
# Project created by QtCreator 2013-06-13T18:36:01
#
#-------------------------------------------------

QT       += core gui multimedia network concurrent

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = iniTunes
TEMPLATE = app
RESOURCES += res.qrc

SOURCES += main.cpp\
        mainwindow.cpp \
    player.cpp \
    library.cpp \
    infos.cpp \
    table.cpp \
    bar.cpp \
    tree.cpp \
    playlists.cpp \
    remote.cpp \
    coverprovider.cpp \
    musicbrainzclient.cpp \
    multipleinfos.cpp \
    minilecteur.cpp \
    nowplayingwidget.cpp \
    slider.cpp \
    mobilewidget.cpp \
    search.cpp

HEADERS  += mainwindow.h \
    player.h \
    library.h \
    infos.h \
    table.h \
    bar.h \
    tree.h \
    playlists.h \
    remote.h \
    coverprovider.h \
    musicbrainzclient.h \
    multipleinfos.h \
    minilecteur.h \
    nowplayingwidget.h \
    slider.h \
    mobilewidget.h \
    search.h

FORMS    += mainwindow.ui \
    infos.ui \
    bar.ui \
    multipleinfos.ui \
    minilecteur.ui \
    nowplayingwidget.ui \
    search.ui
RC_FILE = res.rc
