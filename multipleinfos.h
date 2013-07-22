#ifndef MUTLIPLEINFOS_H
#define MUTLIPLEINFOS_H

#include "ui_multipleinfos.h"
#include "infos.h"

class MultipleInfos : public QDialog, private Ui::MultipleInfos
{
    Q_OBJECT
    
public:
    explicit MultipleInfos(QList<Infos*> infos,QWidget *parent = 0);
public slots:
    void goToNext();
};

#endif // MUTLIPLEINFOS_H
