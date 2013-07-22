#ifndef MINILECTEUR_H
#define MINILECTEUR_H

#include "ui_minilecteur.h"
#include "library.h"
#include "mobilewidget.h"

class MiniLecteur : public MobileWidget, private Ui::MiniLecteur
{
    Q_OBJECT
private:
    QLabel cover;
    Library lib;
    void mkconnections();
public:
    explicit MiniLecteur(QWidget *parent = 0);
signals:
    void seekBarPressed();
    void seekBarReleased();
    void playClicked();
    void nextClicked();
    void previousClicked();
    void positionChanged(int);
    void volumeChanged(int);
    void windowedMode();
public slots:
    void setPosition(qint64 seek);
    void setNewSong(const Song & song);
    void changeButton(bool playing);
protected:
    bool event(QEvent *e);
};

#endif // MINILECTEUR_H
