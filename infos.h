#ifndef INFOS_H
#define INFOS_H

#include "ui_infos.h"
#include "library.h"

class Infos : public QDialog, private Ui::Infos
{
    Q_OBJECT
    Song song;
public:
    explicit Infos(const Song & song,QWidget *parent = 0);
signals:
    void songModified(const Song &);
public slots:
    void modify();

};

#endif // INFOS_H
