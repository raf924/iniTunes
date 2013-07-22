#include "multipleinfos.h"
#include "infos.h"

MultipleInfos::MultipleInfos(QList<Infos *> infos, QWidget *parent) :
    QDialog(parent)
{
    setupUi(this);
    setLayout(horizontalLayout);
    connect(suivant,SIGNAL(clicked()),SLOT(goToNext()));
    if(infos.count()==1)
    {
        suivant->setText("Quitter");
        disconnect(suivant);
        connect(suivant,SIGNAL(clicked()),this,SLOT(close()));
    }
    foreach (Infos * info, infos)
    {
        stackedWidget->addWidget(info);
        connect(info,SIGNAL(finished(int)),SLOT(goToNext()));
    }
}

void MultipleInfos::goToNext()
{
    stackedWidget->setCurrentIndex(stackedWidget->currentIndex()+1);
    if(stackedWidget->currentIndex()==stackedWidget->count()-1)
    {
        suivant->setText("Quitter");
        disconnect(suivant);
        connect(suivant,SIGNAL(clicked()),this,SLOT(close()));
    }
}
