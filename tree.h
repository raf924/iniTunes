#ifndef TREE_H
#define TREE_H

#include <QTreeWidget>
#include "library.h"

class Tree : public QTreeWidget
{
    Q_OBJECT
public:
    explicit Tree(QWidget *parent = 0);
    
signals:
    void artistChosen(const QString &);
    void albumChosen(const QString &,const QString &);
    
public slots:
    void updateTree(Library *library);
    void onItemClicked(QTreeWidgetItem * item,int col);
};

#endif // TREE_H
