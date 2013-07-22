#ifndef MOBILEWIDGET_H
#define MOBILEWIDGET_H

#include <QWidget>

class MobileWidget : public QWidget
{
    Q_OBJECT
    QPoint m_Diff;
    bool onTop;
public:
    explicit MobileWidget(QWidget *parent = 0);
    
signals:
    void onTopEdge();
    void moving();
    
public slots:
protected:
    void mousePressEvent(QMouseEvent *e);
    void mouseMoveEvent(QMouseEvent *e);
    void mouseReleaseEvent(QMouseEvent *e);
    
};

#endif // MOBILEWIDGET_H
