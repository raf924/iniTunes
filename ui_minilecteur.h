/********************************************************************************
** Form generated from reading UI file 'minilecteur.ui'
**
** Created by: Qt User Interface Compiler version 5.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MINILECTEUR_H
#define UI_MINILECTEUR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MiniLecteur
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QPushButton *closeButton;
    QPushButton *maximize;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_2;
    QStackedWidget *stackedWidget;
    QWidget *normalPage;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *title;
    QLabel *artist;
    QWidget *hoveredPage;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *rw;
    QPushButton *play;
    QPushButton *ffw;
    QSpacerItem *horizontalSpacer;
    QSlider *volumeBar;
    QSlider *seekBar;

    void setupUi(QWidget *MiniLecteur)
    {
        if (MiniLecteur->objectName().isEmpty())
            MiniLecteur->setObjectName(QStringLiteral("MiniLecteur"));
        MiniLecteur->resize(765, 595);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MiniLecteur->sizePolicy().hasHeightForWidth());
        MiniLecteur->setSizePolicy(sizePolicy);
        MiniLecteur->setStyleSheet(QLatin1String("QSlider::handle:vertical{\n"
"	height:13px;\n"
"	margin-left: -5px;\n"
"	margin-right: -5px;\n"
"border: 1px solid #777;\n"
"	border-radius: 4px;\n"
"	background-color: rgb(190, 190, 190);\n"
"}\n"
"QSlider::groove:vertical\n"
"{\n"
"	width:8px;\n"
"	border:6px;\n"
"}\n"
"QSlider::add-page:vertical\n"
"{\n"
"	width:1px;	\n"
"	background-color: rgb(118, 118, 118);\n"
"}\n"
"QWidget#MiniLecteur\n"
"{\n"
"border:5px solid black;\n"
"	border-radius:10px;\n"
"}\n"
"QPushButton\n"
" {   \n"
"border-radius:1px;\n"
"font : bold 10px;\n"
"min-width: 1em;\n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"	border: 1px solid #777;\n"
"	border-radius: 4px;\n"
"	margin-top:-10px;\n"
"	margin-bottom:-10px;\n"
"	background-color: rgb(200, 200, 200);\n"
"	width:5px;\n"
"}\n"
"\n"
"QSlider::sub-page:horizontal{\n"
"	\n"
"	background-color: rgb(153, 153, 153);\n"
"}\n"
"\n"
"QSlider::groove:horizontal {\n"
"border: 1px solid #bbb;\n"
"background-color: rgb(234, 234, 234);\n"
"height: 5px;\n"
"border-radius: 4px;\n"
"}"));
        horizontalLayoutWidget = new QWidget(MiniLecteur);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(70, 30, 681, 502));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        closeButton = new QPushButton(horizontalLayoutWidget);
        closeButton->setObjectName(QStringLiteral("closeButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/cancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        closeButton->setIcon(icon);
        closeButton->setIconSize(QSize(12, 12));
        closeButton->setAutoDefault(true);
        closeButton->setDefault(true);
        closeButton->setFlat(true);

        verticalLayout->addWidget(closeButton);

        maximize = new QPushButton(horizontalLayoutWidget);
        maximize->setObjectName(QStringLiteral("maximize"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons/window.png"), QSize(), QIcon::Normal, QIcon::Off);
        maximize->setIcon(icon1);
        maximize->setIconSize(QSize(12, 12));
        maximize->setAutoDefault(true);
        maximize->setDefault(true);
        maximize->setFlat(true);

        verticalLayout->addWidget(maximize);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        stackedWidget = new QStackedWidget(horizontalLayoutWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        normalPage = new QWidget();
        normalPage->setObjectName(QStringLiteral("normalPage"));
        normalPage->setStyleSheet(QLatin1String("border:5px;\n"
"background-color: rgb(241, 241, 241);\n"
"border-radius : 10px;"));
        verticalLayoutWidget_3 = new QWidget(normalPage);
        verticalLayoutWidget_3->setObjectName(QStringLiteral("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(10, 20, 387, 80));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setSizeConstraint(QLayout::SetMinimumSize);
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        title = new QLabel(verticalLayoutWidget_3);
        title->setObjectName(QStringLiteral("title"));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        title->setFont(font);
        title->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(title);

        artist = new QLabel(verticalLayoutWidget_3);
        artist->setObjectName(QStringLiteral("artist"));
        artist->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(artist);

        stackedWidget->addWidget(normalPage);
        hoveredPage = new QWidget();
        hoveredPage->setObjectName(QStringLiteral("hoveredPage"));
        horizontalLayoutWidget_2 = new QWidget(hoveredPage);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(20, 40, 622, 80));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setSizeConstraint(QLayout::SetMinimumSize);
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_2 = new QSpacerItem(50, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        rw = new QPushButton(horizontalLayoutWidget_2);
        rw->setObjectName(QStringLiteral("rw"));
        rw->setMinimumSize(QSize(12, 0));
        rw->setFocusPolicy(Qt::NoFocus);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icons/MD-previous.png"), QSize(), QIcon::Normal, QIcon::Off);
        rw->setIcon(icon2);
        rw->setIconSize(QSize(32, 32));
        rw->setAutoDefault(false);
        rw->setDefault(false);
        rw->setFlat(true);

        horizontalLayout_3->addWidget(rw);

        play = new QPushButton(horizontalLayoutWidget_2);
        play->setObjectName(QStringLiteral("play"));
        play->setFocusPolicy(Qt::NoFocus);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/icons/MD-play.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon3.addFile(QStringLiteral(":/icons/MD-play.png"), QSize(), QIcon::Normal, QIcon::On);
        icon3.addFile(QStringLiteral(":/icons/MD-play.png"), QSize(), QIcon::Disabled, QIcon::Off);
        icon3.addFile(QStringLiteral(":/icons/MD-play.png"), QSize(), QIcon::Disabled, QIcon::On);
        icon3.addFile(QStringLiteral(":/icons/MD-play.png"), QSize(), QIcon::Active, QIcon::Off);
        icon3.addFile(QStringLiteral(":/icons/MD-play.png"), QSize(), QIcon::Active, QIcon::On);
        icon3.addFile(QStringLiteral(":/icons/MD-play.png"), QSize(), QIcon::Selected, QIcon::Off);
        icon3.addFile(QStringLiteral(":/icons/MD-play.png"), QSize(), QIcon::Selected, QIcon::On);
        play->setIcon(icon3);
        play->setIconSize(QSize(64, 64));
        play->setAutoDefault(false);
        play->setDefault(false);
        play->setFlat(true);

        horizontalLayout_3->addWidget(play);

        ffw = new QPushButton(horizontalLayoutWidget_2);
        ffw->setObjectName(QStringLiteral("ffw"));
        ffw->setFocusPolicy(Qt::NoFocus);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/icons/MD-next.png"), QSize(), QIcon::Normal, QIcon::Off);
        ffw->setIcon(icon4);
        ffw->setIconSize(QSize(32, 32));
        ffw->setAutoDefault(false);
        ffw->setDefault(false);
        ffw->setFlat(true);

        horizontalLayout_3->addWidget(ffw);

        horizontalSpacer = new QSpacerItem(50, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        volumeBar = new QSlider(horizontalLayoutWidget_2);
        volumeBar->setObjectName(QStringLiteral("volumeBar"));
        volumeBar->setOrientation(Qt::Vertical);

        horizontalLayout_3->addWidget(volumeBar);

        stackedWidget->addWidget(hoveredPage);

        verticalLayout_2->addWidget(stackedWidget);

        seekBar = new QSlider(horizontalLayoutWidget);
        seekBar->setObjectName(QStringLiteral("seekBar"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(seekBar->sizePolicy().hasHeightForWidth());
        seekBar->setSizePolicy(sizePolicy1);
        seekBar->setOrientation(Qt::Horizontal);

        verticalLayout_2->addWidget(seekBar);


        horizontalLayout_2->addLayout(verticalLayout_2);


        retranslateUi(MiniLecteur);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MiniLecteur);
    } // setupUi

    void retranslateUi(QWidget *MiniLecteur)
    {
        MiniLecteur->setWindowTitle(QApplication::translate("MiniLecteur", "Form", 0));
        closeButton->setText(QString());
        maximize->setText(QString());
        title->setText(QString());
        artist->setText(QString());
        rw->setText(QString());
        play->setText(QString());
        ffw->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MiniLecteur: public Ui_MiniLecteur {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MINILECTEUR_H
