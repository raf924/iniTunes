#include "tree.h"

Tree::Tree(QWidget *parent) :
    QTreeWidget(parent)
{
    connect(this,SIGNAL(itemClicked(QTreeWidgetItem*,int)),SLOT(onItemClicked(QTreeWidgetItem*,int)));
}

void Tree::updateTree(Library * library)
{
    clear();
    int taille = 0;
    QTreeWidgetItem * tous = new QTreeWidgetItem(this);
    tous->setText(0,"Tous les morceaux");
    tous->setData(0,32,"");
    int textSize = tous->text(0).size()*9;
    if(columnWidth(0)<textSize)
    {
        setColumnWidth(0,textSize);
    }
    foreach (QString artist, library->artists())
    {
        QTreeWidgetItem * item = new QTreeWidgetItem(this);
        item->setText(0,artist);
        item->setData(0,32,artist);
        int textSize = item->text(0).size()*9;
        if(columnWidth(0)<textSize)
        {
            setColumnWidth(0,textSize);
        }
        foreach (QString album, library->getAlbums(artist))
        {
            QTreeWidgetItem * child = new QTreeWidgetItem(item,item);
            item->insertChild(0,child);
            child->setData(0,32,item->text(0));
            child->setText(0,album);
            int textSize = child->text(1).size()*9;
            if(columnWidth(0)<textSize)
            {
                setColumnWidth(0,textSize);
            }
        }
    }
    setMinimumWidth(taille*3<=window()->width()?taille:minimumWidth());
}

void Tree::onItemClicked(QTreeWidgetItem *item, int col)
{
    if(item->parent()==NULL)
        emit artistChosen(item->data(0,32).toString());
    else
        emit albumChosen(item->text(0),item->data(0,32).toString());
}
