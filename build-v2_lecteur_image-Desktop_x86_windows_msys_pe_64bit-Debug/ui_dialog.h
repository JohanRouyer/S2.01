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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QPushButton *btnDialogOk;
    QWidget *verticalLayoutWidget;
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

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(400, 300);
        btnDialogOk = new QPushButton(Dialog);
        btnDialogOk->setObjectName(QString::fromUtf8("btnDialogOk"));
        btnDialogOk->setGeometry(QRect(160, 250, 75, 24));
        verticalLayoutWidget = new QWidget(Dialog);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 20, 160, 211));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        labelVersionApp = new QLabel(verticalLayoutWidget);
        labelVersionApp->setObjectName(QString::fromUtf8("labelVersionApp"));

        verticalLayout->addWidget(labelVersionApp);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        labelValeurVersionApp = new QLabel(verticalLayoutWidget);
        labelValeurVersionApp->setObjectName(QString::fromUtf8("labelValeurVersionApp"));

        horizontalLayout->addWidget(labelValeurVersionApp);


        verticalLayout->addLayout(horizontalLayout);

        labelDateCreation = new QLabel(verticalLayoutWidget);
        labelDateCreation->setObjectName(QString::fromUtf8("labelDateCreation"));

        verticalLayout->addWidget(labelDateCreation);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        labelValeurDateCreation = new QLabel(verticalLayoutWidget);
        labelValeurDateCreation->setObjectName(QString::fromUtf8("labelValeurDateCreation"));

        horizontalLayout_2->addWidget(labelValeurDateCreation);


        verticalLayout->addLayout(horizontalLayout_2);

        labelAuteurs = new QLabel(verticalLayoutWidget);
        labelAuteurs->setObjectName(QString::fromUtf8("labelAuteurs"));

        verticalLayout->addWidget(labelAuteurs);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        labelValeurAuteurs = new QLabel(verticalLayoutWidget);
        labelValeurAuteurs->setObjectName(QString::fromUtf8("labelValeurAuteurs"));

        horizontalLayout_3->addWidget(labelValeurAuteurs);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        btnDialogOk->setText(QCoreApplication::translate("Dialog", "Ok", nullptr));
        labelVersionApp->setText(QCoreApplication::translate("Dialog", "Version de l'application", nullptr));
        labelValeurVersionApp->setText(QCoreApplication::translate("Dialog", "TextLabel", nullptr));
        labelDateCreation->setText(QCoreApplication::translate("Dialog", "Date de cr\303\251ation", nullptr));
        labelValeurDateCreation->setText(QCoreApplication::translate("Dialog", "TextLabel", nullptr));
        labelAuteurs->setText(QCoreApplication::translate("Dialog", "Auteurs", nullptr));
        labelValeurAuteurs->setText(QCoreApplication::translate("Dialog", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
