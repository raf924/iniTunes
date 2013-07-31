/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "bar.h"
#include "playlists.h"
#include "table.h"
#include "tree.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOuvrir;
    QAction *addFile;
    QAction *actionAddFolder;
    QAction *actionQuitter;
    QAction *actionPr_f_rences;
    QAction *a_FS;
    QAction *a_MP;
    QAction *aboutQt;
    QAction *aboutRM;
    QAction *newList;
    QWidget *centralWidget;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_3;
    QFrame *frame;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    Bar *bar;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    Tree *tree;
    Playlists *playlists;
    Table *table;
    QMenuBar *menuBar;
    QMenu *menuFichier;
    QMenu *menuEdition;
    QMenu *menuAffichage;
    QMenu *menuA_propos;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1088, 773);
        MainWindow->setSizeIncrement(QSize(0, 15));
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QLatin1String("QHeaderView::section\n"
"{\n"
"	\n"
"	background-color: rgb(255, 255, 255);\n"
"	border : 0px;\n"
"	border-left:1px solid gray;\n"
"	\n"
"	font: 9pt \"Segoe UI\";\n"
"}\n"
"\n"
""));
        actionOuvrir = new QAction(MainWindow);
        actionOuvrir->setObjectName(QStringLiteral("actionOuvrir"));
        addFile = new QAction(MainWindow);
        addFile->setObjectName(QStringLiteral("addFile"));
        actionAddFolder = new QAction(MainWindow);
        actionAddFolder->setObjectName(QStringLiteral("actionAddFolder"));
        actionQuitter = new QAction(MainWindow);
        actionQuitter->setObjectName(QStringLiteral("actionQuitter"));
        actionPr_f_rences = new QAction(MainWindow);
        actionPr_f_rences->setObjectName(QStringLiteral("actionPr_f_rences"));
        a_FS = new QAction(MainWindow);
        a_FS->setObjectName(QStringLiteral("a_FS"));
        a_MP = new QAction(MainWindow);
        a_MP->setObjectName(QStringLiteral("a_MP"));
        aboutQt = new QAction(MainWindow);
        aboutQt->setObjectName(QStringLiteral("aboutQt"));
        aboutRM = new QAction(MainWindow);
        aboutRM->setObjectName(QStringLiteral("aboutRM"));
        newList = new QAction(MainWindow);
        newList->setObjectName(QStringLiteral("newList"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayoutWidget_2 = new QWidget(centralWidget);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(40, -60, 1031, 681));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(verticalLayoutWidget_2);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Sunken);
        frame->setLineWidth(2);
        frame->setMidLineWidth(0);
        verticalLayoutWidget = new QWidget(frame);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(80, 60, 861, 441));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        bar = new Bar(verticalLayoutWidget);
        bar->setObjectName(QStringLiteral("bar"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(bar->sizePolicy().hasHeightForWidth());
        bar->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(bar);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        tree = new Tree(verticalLayoutWidget);
        tree->setObjectName(QStringLiteral("tree"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tree->sizePolicy().hasHeightForWidth());
        tree->setSizePolicy(sizePolicy1);
        tree->setFocusPolicy(Qt::NoFocus);
        tree->setContextMenuPolicy(Qt::CustomContextMenu);
        tree->setStyleSheet(QStringLiteral("background-color: rgb(245, 245, 245);"));
        tree->setFrameShape(QFrame::Panel);

        verticalLayout_2->addWidget(tree);

        playlists = new Playlists(verticalLayoutWidget);
        if (playlists->columnCount() < 1)
            playlists->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        playlists->setHorizontalHeaderItem(0, __qtablewidgetitem);
        playlists->setObjectName(QStringLiteral("playlists"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(playlists->sizePolicy().hasHeightForWidth());
        playlists->setSizePolicy(sizePolicy2);
        playlists->setAcceptDrops(true);
        playlists->setStyleSheet(QStringLiteral("background-color: rgb(245, 245, 245);"));
        playlists->setFrameShape(QFrame::Panel);
        playlists->setEditTriggers(QAbstractItemView::NoEditTriggers);
        playlists->setDragEnabled(true);
        playlists->setDragDropMode(QAbstractItemView::DropOnly);
        playlists->setDefaultDropAction(Qt::IgnoreAction);
        playlists->setSelectionMode(QAbstractItemView::SingleSelection);
        playlists->setSelectionBehavior(QAbstractItemView::SelectItems);
        playlists->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        playlists->horizontalHeader()->setStretchLastSection(true);
        playlists->verticalHeader()->setVisible(false);

        verticalLayout_2->addWidget(playlists);


        horizontalLayout->addLayout(verticalLayout_2);

        table = new Table(verticalLayoutWidget);
        if (table->columnCount() < 6)
            table->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        table->setHorizontalHeaderItem(0, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        table->setHorizontalHeaderItem(1, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        table->setHorizontalHeaderItem(2, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        table->setHorizontalHeaderItem(3, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        table->setHorizontalHeaderItem(4, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        table->setHorizontalHeaderItem(5, __qtablewidgetitem6);
        table->setObjectName(QStringLiteral("table"));
        QPalette palette;
        QBrush brush(QColor(245, 245, 245, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        QBrush brush1(QColor(176, 193, 212, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Highlight, brush1);
        QBrush brush2(QColor(236, 243, 243, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Highlight, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        QBrush brush3(QColor(51, 153, 255, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Highlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush2);
        table->setPalette(palette);
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(9);
        font.setBold(false);
        font.setWeight(50);
        font.setKerning(true);
        table->setFont(font);
        table->setFocusPolicy(Qt::NoFocus);
        table->setStyleSheet(QStringLiteral("alternate-background-color: rgb(236, 243, 243);"));
        table->setFrameShape(QFrame::Panel);
        table->setEditTriggers(QAbstractItemView::NoEditTriggers);
        table->setTabKeyNavigation(false);
        table->setDragEnabled(true);
        table->setAlternatingRowColors(true);
        table->setSelectionMode(QAbstractItemView::ExtendedSelection);
        table->setSelectionBehavior(QAbstractItemView::SelectRows);
        table->setIconSize(QSize(16, 16));
        table->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        table->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        table->setShowGrid(false);
        table->horizontalHeader()->setHighlightSections(false);
        table->horizontalHeader()->setStretchLastSection(true);
        table->verticalHeader()->setVisible(false);

        horizontalLayout->addWidget(table);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_3->addWidget(frame);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setEnabled(true);
        menuBar->setGeometry(QRect(0, 0, 1088, 26));
        QPalette palette1;
        QBrush brush4(QColor(98, 98, 98, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush4);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush4);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        menuBar->setPalette(palette1);
        menuBar->setAutoFillBackground(true);
        menuBar->setStyleSheet(QStringLiteral("color: rgb(98, 98, 98);"));
        menuBar->setDefaultUp(false);
        menuBar->setNativeMenuBar(true);
        menuFichier = new QMenu(menuBar);
        menuFichier->setObjectName(QStringLiteral("menuFichier"));
        menuEdition = new QMenu(menuBar);
        menuEdition->setObjectName(QStringLiteral("menuEdition"));
        menuAffichage = new QMenu(menuBar);
        menuAffichage->setObjectName(QStringLiteral("menuAffichage"));
        menuA_propos = new QMenu(menuBar);
        menuA_propos->setObjectName(QStringLiteral("menuA_propos"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFichier->menuAction());
        menuBar->addAction(menuEdition->menuAction());
        menuBar->addAction(menuAffichage->menuAction());
        menuBar->addAction(menuA_propos->menuAction());
        menuFichier->addAction(actionOuvrir);
        menuFichier->addSeparator();
        menuFichier->addAction(newList);
        menuFichier->addSeparator();
        menuFichier->addAction(addFile);
        menuFichier->addAction(actionAddFolder);
        menuFichier->addSeparator();
        menuFichier->addAction(actionQuitter);
        menuEdition->addAction(actionPr_f_rences);
        menuAffichage->addAction(a_FS);
        menuAffichage->addAction(a_MP);
        menuA_propos->addAction(aboutQt);
        menuA_propos->addAction(aboutRM);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionOuvrir->setText(QApplication::translate("MainWindow", "Ouvrir...", 0));
        actionOuvrir->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", 0));
        addFile->setText(QApplication::translate("MainWindow", "Ajouter un fichier \303\240 la biblioth\303\250que", 0));
        actionAddFolder->setText(QApplication::translate("MainWindow", "Ajouter un dossier \303\240 la biblioth\303\250que", 0));
        actionQuitter->setText(QApplication::translate("MainWindow", "Quitter", 0));
        actionPr_f_rences->setText(QApplication::translate("MainWindow", "Pr\303\251f\303\251rences", 0));
        a_FS->setText(QApplication::translate("MainWindow", "Plein Ecran", 0));
        a_MP->setText(QApplication::translate("MainWindow", "Mini-Lecteur", 0));
        aboutQt->setText(QApplication::translate("MainWindow", "de Qt", 0));
        aboutRM->setText(QApplication::translate("MainWindow", "de RMusic", 0));
        newList->setText(QApplication::translate("MainWindow", "Nouvelle liste de lecture", 0));
        QTreeWidgetItem *___qtreewidgetitem = tree->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("MainWindow", "Artistes / Albums", 0));
        QTableWidgetItem *___qtablewidgetitem = playlists->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "Listes de lecture", 0));
        QTableWidgetItem *___qtablewidgetitem1 = table->horizontalHeaderItem(0);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "Nom", 0));
        QTableWidgetItem *___qtablewidgetitem2 = table->horizontalHeaderItem(1);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "Dur\303\251e", 0));
        QTableWidgetItem *___qtablewidgetitem3 = table->horizontalHeaderItem(2);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "Album", 0));
        QTableWidgetItem *___qtablewidgetitem4 = table->horizontalHeaderItem(3);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "Artiste", 0));
        QTableWidgetItem *___qtablewidgetitem5 = table->horizontalHeaderItem(4);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "Genre", 0));
        menuFichier->setTitle(QApplication::translate("MainWindow", "Fichier", 0));
        menuEdition->setTitle(QApplication::translate("MainWindow", "Edition", 0));
        menuAffichage->setTitle(QApplication::translate("MainWindow", "Affichage", 0));
        menuA_propos->setTitle(QApplication::translate("MainWindow", "A propos", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
