/********************************************************************************
** Form generated from reading UI file 'multipleinfos.ui'
**
** Created by: Qt User Interface Compiler version 5.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MULTIPLEINFOS_H
#define UI_MULTIPLEINFOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MultipleInfos
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackedWidget;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *suivant;

    void setupUi(QDialog *MultipleInfos)
    {
        if (MultipleInfos->objectName().isEmpty())
            MultipleInfos->setObjectName(QStringLiteral("MultipleInfos"));
        MultipleInfos->resize(400, 300);
        horizontalLayoutWidget = new QWidget(MultipleInfos);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(30, 20, 231, 171));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        stackedWidget = new QStackedWidget(horizontalLayoutWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));

        verticalLayout->addWidget(stackedWidget);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        suivant = new QPushButton(horizontalLayoutWidget);
        suivant->setObjectName(QStringLiteral("suivant"));

        horizontalLayout_2->addWidget(suivant);


        verticalLayout->addLayout(horizontalLayout_2);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(MultipleInfos);

        QMetaObject::connectSlotsByName(MultipleInfos);
    } // setupUi

    void retranslateUi(QDialog *MultipleInfos)
    {
        MultipleInfos->setWindowTitle(QApplication::translate("MultipleInfos", "Modifier les Informations", 0));
        suivant->setText(QApplication::translate("MultipleInfos", "Suivant", 0));
    } // retranslateUi

};

namespace Ui {
    class MultipleInfos: public Ui_MultipleInfos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MULTIPLEINFOS_H
