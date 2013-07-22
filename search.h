#ifndef SEARCH_H
#define SEARCH_H

#include "ui_search.h"

class Search : public QWidget, private Ui::Search
{
    Q_OBJECT
    QActionGroup *group;
public:
    explicit Search(QWidget *parent = 0);
public slots:
    void mkQuery(const QString & query);
    void changePlaceHolder(QAction*action);
signals:
    void newQuery(const QString &,int);

};

#endif // SEARCH_H
