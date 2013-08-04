#include "nowplayingwidget.h"
#include <QMessageBox>
#include <QtGui>

NowPlayingWidget::NowPlayingWidget(QWidget *parent) :
    QWidget(parent)
{
    setupUi(this);
    title->setText("");
    artist->setText("");
    widget->setLayout(horizontalLayout);
    setLayout(verticalLayout_2);
    seekBar->setMouseTracking(true);
    repeatMode = QMediaPlaylist::Sequential;
    randomMode = repeatMode;
    seekBar->installEventFilter(this);
    mkConnections();
    cover->setPixmap(QPixmap(":/icons/NoCover.png").scaled(50,50));
    QTimer *t = new QTimer;
    t->setInterval(75);
    artist->setMaximumWidth(title->width());
    connect(t,SIGNAL(timeout()),SLOT(updateLabel()));
    t->start();
}

void NowPlayingWidget::setPlaybackModeEnabled(bool enabled)
{
    random->setVisible(enabled);
    repeat->setVisible(enabled);
}

bool NowPlayingWidget::eventFilter(QObject *sender, QEvent *event)
{
    if(event->type()==QEvent::MouseButtonPress)
    {
        QMouseEvent *e = static_cast<QMouseEvent*>(event);
        int handlePos = QStyle::sliderPositionFromValue(seekBar->minimum(),seekBar->maximum(),seekBar->sliderPosition(),seekBar->width());
        if(handlePos<e->pos().x()-5||handlePos>e->pos().x()+5)
        {
            int position = QStyle::sliderValueFromPosition(seekBar->minimum(),seekBar->maximum(),e->pos().x(),seekBar->width());
            seekBar->setSliderPosition(position);
            emit positionChanged(seekBar->sliderPosition());
            return true;
        }
        return false;
    }
    return QObject::eventFilter(sender,event);
}


void NowPlayingWidget::mkConnections()
{
    connect(random,SIGNAL(clicked()),SLOT(changeRandomMode()));
    connect(repeat,SIGNAL(clicked()),SLOT(changeRepeatMode()));
    connect(seekBar,SIGNAL(sliderPressed()),SIGNAL(seekBarPressed()));
    connect(seekBar,SIGNAL(sliderReleased()),SIGNAL(seekBarReleased()));
    connect(seekBar,SIGNAL(sliderMoved(int)),SIGNAL(positionChanged(int)));
    connect(seekBar,SIGNAL(actionTriggered(int)),SLOT(seekBarActionTriggered(int)));

}


void NowPlayingWidget::setPosition(qint64 value)
{
    QTime elapsed(0,0);
    elapsed = elapsed.addMSecs(value);
    cLength->setText(elapsed.toString(elapsed.hour()>0?"hh:mm:ss":"mm:ss"));
    seekBar->setValue(value);

}

void NowPlayingWidget::setSong(const Song &song)
{
    tLength->setText(" "+song.d_length+" ");
    artist->setText("  "+song.artist+" -- "+song.album+"  ");
    title->setText(song.title);
    tLength->setText(song.d_length);
    seekBar->setMaximum(song.length);
    QString coverPath;
    if(QString(coverPath = lib.artwork(song)).isEmpty())
    {
        coverPath = ":/icons/NoCover.png";
    }
    QImage image(coverPath);
    cover->setPixmap(QPixmap::fromImage(image.scaled(50,50)));
}

void NowPlayingWidget::changeRandomMode()
{
    switch(randomMode)
    {
    case QMediaPlaylist::Sequential:
        randomMode=QMediaPlaylist::Random;
        random->setIcon(QIcon(":/icons/MD-shuffle-on.png"));
        break;
    case QMediaPlaylist::Random:
        randomMode=QMediaPlaylist::Sequential;
        random->setIcon(QIcon(":/icons/MD-shuffle.png"));
        break;
    }
    emit playBackModeChanged(currentMode());
}

void NowPlayingWidget::changeRepeatMode()
{
    switch (repeatMode) {
    case QMediaPlaylist::Sequential:
        repeatMode = QMediaPlaylist::Loop;
        repeat->setIcon(QIcon(":/icons/MD-repeat-alt.png"));
        break;
    case QMediaPlaylist::Loop:
        repeatMode = QMediaPlaylist::CurrentItemInLoop;
        repeat->setIcon(QIcon(":/icons/MD-repeat-once.png"));
        break;
    case QMediaPlaylist::CurrentItemInLoop:
        repeatMode = QMediaPlaylist::Sequential;
        repeat->setIcon(QIcon(":/icons/MD-sequential.png"));
        break;
    }
    emit playBackModeChanged(currentMode());
}

void NowPlayingWidget::seekBarActionTriggered(int action)
{
    qDebug()<<action<<seekBar->sliderPosition()<<seekBar->value();
}

void NowPlayingWidget::updateLabel()
{
    artist->setMaximumWidth(title->width());
    if(title->text().length()>0)
    {
    QString text = artist->text();
    text.append(text.at(0));
    text.remove(0,1);
    artist->setText(text);
    }
}


QMediaPlaylist::PlaybackMode NowPlayingWidget::currentMode()
{
    QMediaPlaylist::PlaybackMode mode;
    if(repeatMode!=QMediaPlaylist::CurrentItemInLoop&&randomMode!=QMediaPlaylist::Sequential)
    {
        mode = randomMode;
    }
    else
    {
        mode = repeatMode;
    }
    return mode;
}
