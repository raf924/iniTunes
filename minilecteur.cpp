#include "minilecteur.h"
#include <QDebug>
#include <QDropEvent>

MiniLecteur::MiniLecteur(QWidget *parent) :
    MobileWidget(parent)
{
    setupUi(this);
    setWindowTitle("iniTunes");
    setLayout(horizontalLayout_2);
    normalPage->setLayout(verticalLayout_3);
    hoveredPage->setLayout(horizontalLayout_3);
    setAttribute(Qt::WA_Hover);
    setWindowFlags(Qt::FramelessWindowHint);
    seekBar->setMaximumWidth(300);
    setMaximumWidth(300);
    setMaximumHeight(50);
    connect(closeButton,SIGNAL(clicked()),this,SLOT(close()));
    connect(maximize,SIGNAL(clicked()),SLOT(hide()));
    connect(maximize,SIGNAL(clicked()),SIGNAL(windowedMode()));
    horizontalLayout_2->insertWidget(1,&cover);
    QPixmap p(":/icons/NoCover.png");
    cover.setPixmap(p.scaled(50,50));
    mkconnections();
    volumeBar->setValue(50);
}

bool MiniLecteur::event(QEvent *e)
{
    if(e->type()==QEvent::HoverEnter)
    {
        qDebug()<<"Un événement hover";
        /*normalPage->setVisible(false);
        hoveredPage->setVisible(true);*/
        stackedWidget->setCurrentIndex(1);
    }
    else if(e->type()==QEvent::HoverLeave)
    {
        qDebug()<<"Un événement leave";
        /*normalPage->setVisible(true);
        hoveredPage->setVisible(false);*/
        stackedWidget->setCurrentIndex(0);
    }
    else if(e->type()==QEvent::ToolTip)
    {
        qDebug()<<"Tooltip";
    }
    else
    {
        return QWidget::event(e);
    }
    return true;
}
void MiniLecteur::setPosition(qint64 seek)
{
        QTime time(0,0);
        time = time.addMSecs(seek);
        //QString stime = time.hour()>0?time.toString(" hh:mm:ss "):time.toString(" mm:ss ");
        seekBar->setValue(time.hour()*3600+time.minute()*60+time.second());

}

void MiniLecteur::setNewSong(const Song &song)
{
    seekBar->setMaximum(song.length);
    artist->setText(song.artist+" -- "+song.album);
    title->setText(song.title);
    QString coverPath;
    if(QString(coverPath = lib.artwork(song)).isEmpty())
    {
        coverPath = ":/icons/NoCover.png";
    }
    qDebug()<<coverPath;
    QImage image(coverPath);
    cover.setPixmap(QPixmap::fromImage(image.isNull()?QImage(":/icons/NoCover.png").scaled(50,50):image.scaled(50,50)));
}

void MiniLecteur::changeButton(bool playing)
{
    play->setIcon(QIcon(playing?":/icons/MD-pause.png":":/icons/MD-play.png"));
}


void MiniLecteur::mkconnections()
{
    connect(ffw,SIGNAL(clicked()),SIGNAL(nextClicked()));
    connect(rw,SIGNAL(clicked()),SIGNAL(previousClicked()));
    connect(play,SIGNAL(clicked()),SIGNAL(playClicked()));
    connect(seekBar,SIGNAL(sliderMoved(int)),SIGNAL(positionChanged(int)));
    connect(volumeBar,SIGNAL(valueChanged(int)),SIGNAL(volumeChanged(int)));
    connect(seekBar,SIGNAL(sliderPressed()),SIGNAL(seekBarPressed()));
    connect(seekBar,SIGNAL(sliderReleased()),SIGNAL(seekBarReleased()));
}
