/********************************************************************************
** Form generated from reading UI file 'bar.ui'
**
** Created by: Qt User Interface Compiler version 5.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BAR_H
#define UI_BAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "nowplayingwidget.h"
#include "search.h"

QT_BEGIN_NAMESPACE

class Ui_Bar
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *addFile;
    QPushButton *addFolder;
    QPushButton *rw;
    QPushButton *play;
    QPushButton *ffw;
    QSlider *volumeBar;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_2;
    NowPlayingWidget *npWidget;
    QPushButton *list;
    QPushButton *grid;
    QPushButton *mLecteur;
    QSpacerItem *horizontalSpacer_4;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *hideButton;
    QPushButton *maximize;
    QPushButton *closeButton;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    Search *search;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *Bar)
    {
        if (Bar->objectName().isEmpty())
            Bar->setObjectName(QStringLiteral("Bar"));
        Bar->resize(1440, 765);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(21);
        sizePolicy.setHeightForWidth(Bar->sizePolicy().hasHeightForWidth());
        Bar->setSizePolicy(sizePolicy);
        Bar->setAcceptDrops(true);
        Bar->setStyleSheet(QLatin1String("QSlider::handle:horizontal {\n"
"	border: 1px solid #777;\n"
"	border-radius: 4px;\n"
"	margin-top:-10px;\n"
"	margin-bottom:-10px;\n"
"	background-color: rgb(200, 200, 200);\n"
"	width:5px;\n"
"}\n"
"QSlider#volumeBar::handle:horizontal{\n"
"	width:13px;\n"
"	margin-top: -5px;\n"
"	margin-bottom: -5px;\n"
"}\n"
"QSlider::sub-page::horizontal{\n"
"	\n"
"	background-color: rgb(153, 153, 153);\n"
"}\n"
"\n"
"QSlider::groove:horizontal {\n"
"border: 1px solid #bbb;\n"
"background-color: rgb(234, 234, 234);\n"
"height: 5px;\n"
"border-radius: 4px;\n"
"}\n"
"\n"
"#closeButton:hover\n"
"{\n"
"	\n"
"	background-color: rgb(200, 0, 0);\n"
"}\n"
"#hideButton:hover, #maximize:hover\n"
"{\n"
"	background-color: rgb(0, 0, 212);\n"
"}\n"
""));
        horizontalLayoutWidget = new QWidget(Bar);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(60, 50, 921, 191));
        QFont font;
        font.setStyleStrategy(QFont::PreferAntialias);
        horizontalLayoutWidget->setFont(font);
        horizontalLayoutWidget->setFocusPolicy(Qt::NoFocus);
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(10);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        addFile = new QPushButton(horizontalLayoutWidget);
        addFile->setObjectName(QStringLiteral("addFile"));
        addFile->setFont(font);
        addFile->setFocusPolicy(Qt::NoFocus);
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/file-add.png"), QSize(), QIcon::Normal, QIcon::Off);
        addFile->setIcon(icon);
        addFile->setIconSize(QSize(32, 32));
        addFile->setAutoDefault(false);
        addFile->setDefault(false);
        addFile->setFlat(true);

        horizontalLayout->addWidget(addFile);

        addFolder = new QPushButton(horizontalLayoutWidget);
        addFolder->setObjectName(QStringLiteral("addFolder"));
        addFolder->setFont(font);
        addFolder->setFocusPolicy(Qt::NoFocus);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons/folder.png"), QSize(), QIcon::Normal, QIcon::Off);
        addFolder->setIcon(icon1);
        addFolder->setIconSize(QSize(32, 32));
        addFolder->setAutoDefault(false);
        addFolder->setDefault(false);
        addFolder->setFlat(true);

        horizontalLayout->addWidget(addFolder);

        rw = new QPushButton(horizontalLayoutWidget);
        rw->setObjectName(QStringLiteral("rw"));
        rw->setFont(font);
        rw->setFocusPolicy(Qt::NoFocus);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icons/MD-previous.png"), QSize(), QIcon::Normal, QIcon::Off);
        rw->setIcon(icon2);
        rw->setIconSize(QSize(24, 24));
        rw->setAutoDefault(false);
        rw->setDefault(false);
        rw->setFlat(true);

        horizontalLayout->addWidget(rw);

        play = new QPushButton(horizontalLayoutWidget);
        play->setObjectName(QStringLiteral("play"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(play->sizePolicy().hasHeightForWidth());
        play->setSizePolicy(sizePolicy1);
        play->setFont(font);
        play->setFocusPolicy(Qt::NoFocus);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/icons/MD-play.png"), QSize(), QIcon::Normal, QIcon::Off);
        play->setIcon(icon3);
        play->setIconSize(QSize(48, 48));
        play->setCheckable(false);
        play->setChecked(false);
        play->setAutoDefault(true);
        play->setDefault(true);
        play->setFlat(true);

        horizontalLayout->addWidget(play);

        ffw = new QPushButton(horizontalLayoutWidget);
        ffw->setObjectName(QStringLiteral("ffw"));
        ffw->setFont(font);
        ffw->setFocusPolicy(Qt::NoFocus);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/icons/MD-next.png"), QSize(), QIcon::Normal, QIcon::Off);
        ffw->setIcon(icon4);
        ffw->setIconSize(QSize(24, 24));
        ffw->setAutoDefault(false);
        ffw->setDefault(false);
        ffw->setFlat(true);

        horizontalLayout->addWidget(ffw);

        volumeBar = new QSlider(horizontalLayoutWidget);
        volumeBar->setObjectName(QStringLiteral("volumeBar"));
        volumeBar->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(volumeBar);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalSpacer_2 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_2);

        npWidget = new NowPlayingWidget(horizontalLayoutWidget);
        npWidget->setObjectName(QStringLiteral("npWidget"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(npWidget->sizePolicy().hasHeightForWidth());
        npWidget->setSizePolicy(sizePolicy2);
        npWidget->setAcceptDrops(true);
        npWidget->setStyleSheet(QLatin1String(".QWidget\n"
"{\n"
"background-color: rgb(218, 229, 231);\n"
"border : 1px solid rgb(221, 227, 227);\n"
"border-radius:5px;\n"
"}"));

        verticalLayout_2->addWidget(npWidget);


        horizontalLayout->addLayout(verticalLayout_2);

        list = new QPushButton(horizontalLayoutWidget);
        list->setObjectName(QStringLiteral("list"));
        list->setEnabled(false);
        list->setFlat(true);

        horizontalLayout->addWidget(list);

        grid = new QPushButton(horizontalLayoutWidget);
        grid->setObjectName(QStringLiteral("grid"));
        grid->setEnabled(false);
        grid->setFlat(true);

        horizontalLayout->addWidget(grid);

        mLecteur = new QPushButton(horizontalLayoutWidget);
        mLecteur->setObjectName(QStringLiteral("mLecteur"));
        mLecteur->setFont(font);
        mLecteur->setFocusPolicy(Qt::NoFocus);
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/icons/mini-lecteur.png"), QSize(), QIcon::Normal, QIcon::Off);
        mLecteur->setIcon(icon5);
        mLecteur->setIconSize(QSize(32, 32));
        mLecteur->setAutoDefault(false);
        mLecteur->setDefault(false);
        mLecteur->setFlat(true);

        horizontalLayout->addWidget(mLecteur);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_5 = new QSpacerItem(50, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        hideButton = new QPushButton(horizontalLayoutWidget);
        hideButton->setObjectName(QStringLiteral("hideButton"));
        QFont font1;
        font1.setPointSize(1);
        hideButton->setFont(font1);
        hideButton->setFocusPolicy(Qt::NoFocus);
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/icons/power-on.png"), QSize(), QIcon::Normal, QIcon::Off);
        hideButton->setIcon(icon6);
        hideButton->setIconSize(QSize(25, 25));
        hideButton->setFlat(true);

        horizontalLayout_3->addWidget(hideButton);

        maximize = new QPushButton(horizontalLayoutWidget);
        maximize->setObjectName(QStringLiteral("maximize"));
        maximize->setFont(font1);
        maximize->setFocusPolicy(Qt::NoFocus);
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/icons/window.png"), QSize(), QIcon::Normal, QIcon::Off);
        maximize->setIcon(icon7);
        maximize->setIconSize(QSize(25, 25));
        maximize->setCheckable(true);
        maximize->setChecked(false);
        maximize->setAutoRepeat(false);
        maximize->setFlat(true);

        horizontalLayout_3->addWidget(maximize);

        closeButton = new QPushButton(horizontalLayoutWidget);
        closeButton->setObjectName(QStringLiteral("closeButton"));
        closeButton->setFont(font1);
        closeButton->setFocusPolicy(Qt::NoFocus);
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/icons/cancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        closeButton->setIcon(icon8);
        closeButton->setIconSize(QSize(50, 25));
        closeButton->setFlat(true);

        horizontalLayout_3->addWidget(closeButton);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setSizeConstraint(QLayout::SetNoConstraint);
        horizontalLayout_2->setContentsMargins(-1, 0, -1, 0);
        search = new Search(horizontalLayoutWidget);
        search->setObjectName(QStringLiteral("search"));

        horizontalLayout_2->addWidget(search);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(Bar);

        QMetaObject::connectSlotsByName(Bar);
    } // setupUi

    void retranslateUi(QWidget *Bar)
    {
        Bar->setWindowTitle(QApplication::translate("Bar", "Form", 0));
#ifndef QT_NO_TOOLTIP
        addFile->setToolTip(QApplication::translate("Bar", "Ajouter desfichiers", 0));
#endif // QT_NO_TOOLTIP
        addFile->setText(QString());
#ifndef QT_NO_TOOLTIP
        addFolder->setToolTip(QApplication::translate("Bar", "Ajouter un dossier", 0));
#endif // QT_NO_TOOLTIP
        addFolder->setText(QString());
#ifndef QT_NO_TOOLTIP
        rw->setToolTip(QApplication::translate("Bar", "Morceau pr\303\251c\303\251dent", 0));
#endif // QT_NO_TOOLTIP
        rw->setText(QString());
        rw->setShortcut(QApplication::translate("Bar", "PgUp", 0));
#ifndef QT_NO_TOOLTIP
        play->setToolTip(QApplication::translate("Bar", "Play", 0));
#endif // QT_NO_TOOLTIP
        play->setText(QString());
        play->setShortcut(QApplication::translate("Bar", "Media Play", 0));
#ifndef QT_NO_TOOLTIP
        ffw->setToolTip(QApplication::translate("Bar", "Morceau suivant", 0));
#endif // QT_NO_TOOLTIP
        ffw->setText(QString());
        ffw->setShortcut(QApplication::translate("Bar", "PgDown", 0));
        list->setText(QString());
        grid->setText(QString());
#ifndef QT_NO_TOOLTIP
        mLecteur->setToolTip(QApplication::translate("Bar", "Mini-Lecteur", 0));
#endif // QT_NO_TOOLTIP
        mLecteur->setText(QString());
        hideButton->setText(QString());
        maximize->setText(QString());
        closeButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Bar: public Ui_Bar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BAR_H
