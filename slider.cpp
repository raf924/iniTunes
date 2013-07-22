#include "slider.h"
#include <QStyle>
#include <QDropEvent>

Slider::Slider(QWidget *parent) :
    QSlider(parent)
{
}

void Slider::mousePressEvent(QMouseEvent *e)
{
    int handlePos = QStyle::sliderPositionFromValue(minimum(),maximum(),sliderPosition(),width());
    if(handlePos<e->pos().x()-5||handlePos>e->pos().x()+5)
    {
        int position = QStyle::sliderValueFromPosition(minimum(),maximum(),e->pos().x(),width());
        setSliderPosition(position);
        emit sliderMoved(sliderPosition());
    }
}

void Slider::mouseMoveEvent(QMouseEvent *e)
{
    int handlePos = QStyle::sliderPositionFromValue(minimum(),maximum(),sliderPosition(),width());
    if(handlePos<e->pos().x()-5||handlePos>e->pos().x()+5)
    {
        int position = QStyle::sliderValueFromPosition(minimum(),maximum(),e->pos().x(),width());
        setSliderPosition(position);
        //emit sliderMoved(sliderPosition());
    }
}

void Slider::mouseReleaseEvent(QMouseEvent *e)
{
    int handlePos = QStyle::sliderPositionFromValue(minimum(),maximum(),sliderPosition(),width());
    if(handlePos<e->pos().x()-5||handlePos>e->pos().x()+5)
    {
        int position = QStyle::sliderValueFromPosition(minimum(),maximum(),e->pos().x(),width());
        setSliderPosition(position);
        emit sliderMoved(sliderPosition());
    }
}
