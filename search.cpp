#include "search.h"
#include <QMenu>

Search::Search(QWidget *parent) :
    QWidget(parent)
{
    setupUi(this);
    setLayout(horizontalLayout);
    QMenu * menu = new QMenu;
    group = new QActionGroup(this);
    group->addAction(menu->addAction("Tous"))->setCheckable(true);
    group->addAction(menu->addAction("Morceau"))->setCheckable(true);
    group->addAction(menu->addAction("Album"))->setCheckable(true);
    group->addAction(menu->addAction("Artiste"))->setCheckable(true);
    toolButton->setMenu(menu);
    group->actions().first()->setChecked(true);
    connect(search,SIGNAL(textChanged(QString)),SLOT(mkQuery(QString)));
    connect(menu,SIGNAL(triggered(QAction*)),SLOT(changePlaceHolder(QAction*)));
}

void Search::mkQuery(const QString &query)
{
    emit newQuery(query,group->actions().indexOf(group->checkedAction()));
}

void Search::changePlaceHolder(QAction *action)
{
    search->setPlaceholderText(action->text());
}
