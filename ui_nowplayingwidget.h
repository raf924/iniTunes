/********************************************************************************
** Form generated from reading UI file 'nowplayingwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOWPLAYINGWIDGET_H
#define UI_NOWPLAYINGWIDGET_H

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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NowPlayingWidget
{
public:
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_3;
    QLabel *cover;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QLabel *title;
    QLabel *artist;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *repeat;
    QLabel *cLength;
    QSlider *seekBar;
    QLabel *tLength;
    QPushButton *random;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *NowPlayingWidget)
    {
        if (NowPlayingWidget->objectName().isEmpty())
            NowPlayingWidget->setObjectName(QStringLiteral("NowPlayingWidget"));
        NowPlayingWidget->resize(1042, 606);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(NowPlayingWidget->sizePolicy().hasHeightForWidth());
        NowPlayingWidget->setSizePolicy(sizePolicy);
        QPalette palette;
        NowPlayingWidget->setPalette(palette);
        NowPlayingWidget->setStyleSheet(QLatin1String("QLabel#title\n"
"{\n"
"	font: 75 12pt \"Segoe UI\";\n"
"}\n"
"QLabel\n"
"{\n"
"	font: 75 8pt \"Segoe UI\";\n"
"\n"
"}"));
        verticalLayoutWidget_2 = new QWidget(NowPlayingWidget);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(50, 20, 981, 391));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(verticalLayoutWidget_2);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayoutWidget = new QWidget(widget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(40, 50, 911, 291));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        cover = new QLabel(horizontalLayoutWidget);
        cover->setObjectName(QStringLiteral("cover"));

        horizontalLayout->addWidget(cover);

        horizontalSpacer = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(7);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        title = new QLabel(horizontalLayoutWidget);
        title->setObjectName(QStringLiteral("title"));
        QFont font;
        font.setFamily(QStringLiteral("Segoe UI"));
        font.setPointSize(12);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(9);
        title->setFont(font);
        title->setAcceptDrops(true);
        title->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(title);

        artist = new QLabel(horizontalLayoutWidget);
        artist->setObjectName(QStringLiteral("artist"));
        QFont font1;
        font1.setFamily(QStringLiteral("Segoe UI"));
        font1.setPointSize(8);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(9);
        artist->setFont(font1);
        artist->setAcceptDrops(true);
        artist->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(artist);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        repeat = new QPushButton(horizontalLayoutWidget);
        repeat->setObjectName(QStringLiteral("repeat"));
        QFont font2;
        font2.setStyleStrategy(QFont::PreferAntialias);
        repeat->setFont(font2);
        repeat->setFocusPolicy(Qt::NoFocus);
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/MD-sequential.png"), QSize(), QIcon::Normal, QIcon::Off);
        repeat->setIcon(icon);
        repeat->setIconSize(QSize(20, 20));
        repeat->setCheckable(false);
        repeat->setAutoDefault(false);
        repeat->setDefault(false);
        repeat->setFlat(true);

        horizontalLayout_2->addWidget(repeat);

        cLength = new QLabel(horizontalLayoutWidget);
        cLength->setObjectName(QStringLiteral("cLength"));
        cLength->setFont(font1);
        cLength->setAcceptDrops(true);
        cLength->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(cLength);

        seekBar = new QSlider(horizontalLayoutWidget);
        seekBar->setObjectName(QStringLiteral("seekBar"));
        seekBar->setPageStep(1);
        seekBar->setOrientation(Qt::Horizontal);
        seekBar->setTickPosition(QSlider::TicksBelow);
        seekBar->setTickInterval(10);

        horizontalLayout_2->addWidget(seekBar);

        tLength = new QLabel(horizontalLayoutWidget);
        tLength->setObjectName(QStringLiteral("tLength"));
        tLength->setFont(font1);
        tLength->setAcceptDrops(true);
        tLength->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(tLength);

        random = new QPushButton(horizontalLayoutWidget);
        random->setObjectName(QStringLiteral("random"));
        random->setFont(font2);
        random->setFocusPolicy(Qt::NoFocus);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons/MD-shuffle.png"), QSize(), QIcon::Normal, QIcon::Off);
        random->setIcon(icon1);
        random->setIconSize(QSize(20, 20));
        random->setCheckable(false);
        random->setAutoDefault(false);
        random->setDefault(false);
        random->setFlat(true);

        horizontalLayout_2->addWidget(random);


        verticalLayout->addLayout(horizontalLayout_2);


        horizontalLayout->addLayout(verticalLayout);

        horizontalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_2->addWidget(widget);


        retranslateUi(NowPlayingWidget);

        QMetaObject::connectSlotsByName(NowPlayingWidget);
    } // setupUi

    void retranslateUi(QWidget *NowPlayingWidget)
    {
        NowPlayingWidget->setWindowTitle(QApplication::translate("NowPlayingWidget", "Form", 0));
        cover->setText(QString());
        title->setText(QApplication::translate("NowPlayingWidget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p></body></html>", 0));
        artist->setText(QApplication::translate("NowPlayingWidget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p></body></html>", 0));
#ifndef QT_NO_TOOLTIP
        repeat->setToolTip(QApplication::translate("NowPlayingWidget", "Activer r\303\251p\303\251tition du morceau", 0));
#endif // QT_NO_TOOLTIP
        repeat->setText(QString());
        cLength->setText(QApplication::translate("NowPlayingWidget", " 00:00 ", 0));
        tLength->setText(QApplication::translate("NowPlayingWidget", " 00:00 ", 0));
#ifndef QT_NO_TOOLTIP
        random->setToolTip(QApplication::translate("NowPlayingWidget", "Lecture al\303\251atoire", 0));
#endif // QT_NO_TOOLTIP
        random->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class NowPlayingWidget: public Ui_NowPlayingWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOWPLAYINGWIDGET_H
