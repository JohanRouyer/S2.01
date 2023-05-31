/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *labelVersionApp;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *labelValeurVersionApp;
    QLabel *labelDateCreation;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QLabel *labelValeurDateCreation;
    QLabel *labelAuteurs;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QLabel *labelValeurAuteurs;
    QPushButton *btnDialogOk;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(400, 300);
        verticalLayout_2 = new QVBoxLayout(Dialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        labelVersionApp = new QLabel(Dialog);
        labelVersionApp->setObjectName(QString::fromUtf8("labelVersionApp"));

        verticalLayout->addWidget(labelVersionApp);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        labelValeurVersionApp = new QLabel(Dialog);
        labelValeurVersionApp->setObjectName(QString::fromUtf8("labelValeurVersionApp"));

        horizontalLayout->addWidget(labelValeurVersionApp);


        verticalLayout->addLayout(horizontalLayout);

        labelDateCreation = new QLabel(Dialog);
        labelDateCreation->setObjectName(QString::fromUtf8("labelDateCreation"));

        verticalLayout->addWidget(labelDateCreation);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        labelValeurDateCreation = new QLabel(Dialog);
        labelValeurDateCreation->setObjectName(QString::fromUtf8("labelValeurDateCreation"));

        horizontalLayout_2->addWidget(labelValeurDateCreation);


        verticalLayout->addLayout(horizontalLayout_2);

        labelAuteurs = new QLabel(Dialog);
        labelAuteurs->setObjectName(QString::fromUtf8("labelAuteurs"));

        verticalLayout->addWidget(labelAuteurs);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        labelValeurAuteurs = new QLabel(Dialog);
        labelValeurAuteurs->setObjectName(QString::fromUtf8("labelValeurAuteurs"));

        horizontalLayout_3->addWidget(labelValeurAuteurs);


        verticalLayout->addLayout(horizontalLayout_3);


        verticalLayout_2->addLayout(verticalLayout);

        btnDialogOk = new QPushButton(Dialog);
        btnDialogOk->setObjectName(QString::fromUtf8("btnDialogOk"));

        verticalLayout_2->addWidget(btnDialogOk);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        labelVersionApp->setText(QCoreApplication::translate("Dialog", "Version de l'application", nullptr));
        labelValeurVersionApp->setText(QCoreApplication::translate("Dialog", "V2.0", nullptr));
        labelDateCreation->setText(QCoreApplication::translate("Dialog", "Date de cr\303\251ation", nullptr));
        labelValeurDateCreation->setText(QCoreApplication::translate("Dialog", "15/05/2023", nullptr));
        labelAuteurs->setText(QCoreApplication::translate("Dialog", "Auteurs", nullptr));
        labelValeurAuteurs->setText(QCoreApplication::translate("Dialog", "ROUYER, ETCHEGARRAY, MUSICA", nullptr));
        btnDialogOk->setText(QCoreApplication::translate("Dialog", "Ok", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
