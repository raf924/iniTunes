/********************************************************************************
** Form generated from reading UI file 'infos.ui'
**
** Created by: Qt User Interface Compiler version 5.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFOS_H
#define UI_INFOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Infos
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *path;
    QLabel *label_2;
    QLineEdit *title;
    QLabel *label_3;
    QLineEdit *album;
    QLabel *label_4;
    QLineEdit *artist;
    QLabel *label_5;
    QLineEdit *genre;
    QLabel *label_6;
    QLabel *length;
    QLabel *art;
    QLabel *cover;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Infos)
    {
        if (Infos->objectName().isEmpty())
            Infos->setObjectName(QStringLiteral("Infos"));
        Infos->resize(657, 512);
        verticalLayoutWidget = new QWidget(Infos);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(140, 40, 361, 351));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        path = new QLabel(verticalLayoutWidget);
        path->setObjectName(QStringLiteral("path"));

        formLayout->setWidget(0, QFormLayout::FieldRole, path);

        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        title = new QLineEdit(verticalLayoutWidget);
        title->setObjectName(QStringLiteral("title"));

        formLayout->setWidget(1, QFormLayout::FieldRole, title);

        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        album = new QLineEdit(verticalLayoutWidget);
        album->setObjectName(QStringLiteral("album"));

        formLayout->setWidget(2, QFormLayout::FieldRole, album);

        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        artist = new QLineEdit(verticalLayoutWidget);
        artist->setObjectName(QStringLiteral("artist"));

        formLayout->setWidget(3, QFormLayout::FieldRole, artist);

        label_5 = new QLabel(verticalLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        genre = new QLineEdit(verticalLayoutWidget);
        genre->setObjectName(QStringLiteral("genre"));

        formLayout->setWidget(4, QFormLayout::FieldRole, genre);

        label_6 = new QLabel(verticalLayoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_6);

        length = new QLabel(verticalLayoutWidget);
        length->setObjectName(QStringLiteral("length"));

        formLayout->setWidget(5, QFormLayout::FieldRole, length);

        art = new QLabel(verticalLayoutWidget);
        art->setObjectName(QStringLiteral("art"));

        formLayout->setWidget(6, QFormLayout::LabelRole, art);


        verticalLayout->addLayout(formLayout);

        cover = new QLabel(verticalLayoutWidget);
        cover->setObjectName(QStringLiteral("cover"));

        verticalLayout->addWidget(cover);

        buttonBox = new QDialogButtonBox(verticalLayoutWidget);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Apply);
        buttonBox->setCenterButtons(false);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(Infos);
        QObject::connect(buttonBox, SIGNAL(accepted()), Infos, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Infos, SLOT(reject()));

        QMetaObject::connectSlotsByName(Infos);
    } // setupUi

    void retranslateUi(QDialog *Infos)
    {
        Infos->setWindowTitle(QApplication::translate("Infos", "Dialog", 0));
        label->setText(QApplication::translate("Infos", "Chemin:", 0));
        path->setText(QString());
        label_2->setText(QApplication::translate("Infos", "Nom:", 0));
        label_3->setText(QApplication::translate("Infos", "Album:", 0));
        label_4->setText(QApplication::translate("Infos", "Artiste:", 0));
        label_5->setText(QApplication::translate("Infos", "Genre:", 0));
        label_6->setText(QApplication::translate("Infos", "Dur\303\251e:", 0));
        length->setText(QString());
        art->setText(QString());
        cover->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Infos: public Ui_Infos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFOS_H
