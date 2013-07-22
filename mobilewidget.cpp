#include "mobilewidget.h"
#include <QDropEvent>

MobileWidget::MobileWidget(QWidget *parent) :
    QWidget(parent)
{
    onTop = false;
}

void MobileWidget::mousePressEvent(QMouseEvent *e)
{
    m_Diff = e->pos();
}

void MobileWidget::mouseMoveEvent(QMouseEvent *e)
{
    emit moving();
    window()->move(e->globalPos()-m_Diff);
    onTop = e->globalPos().y() == 0;
}

void MobileWidget::mouseReleaseEvent(QMouseEvent *e)
{
    if(onTop)
    {
        emit onTopEdge();
    }
    Q_UNUSED(e);
}
