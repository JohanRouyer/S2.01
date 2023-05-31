/********************************************************************************
** Form generated from reading UI file 'lecteurvue.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LECTEURVUE_H
#define UI_LECTEURVUE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionQuitter;
    QAction *actionCharger_diaporama;
    QAction *actionEnlever_diaporama;
    QAction *actionVitesse_de_defilement;
    QAction *actionA_propos_de;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelChangementMode;
    QPushButton *btnManuel;
    QPushButton *btnAuto;
    QSpacerItem *horizontalSpacer_4;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btnGauche;
    QPushButton *btnDroite;
    QPushButton *btnArreter;
    QPushButton *btnLancer;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_3;
    QLabel *labelNumeroPage;
    QLabel *labelSlash;
    QLabel *labelNbImages;
    QHBoxLayout *horizontalLayout_6;
    QGridLayout *gridLayout_2;
    QLabel *labelTitreImage;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *labelTitreCategorie;
    QLabel *labelValeurCategorie;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_6;
    QLabel *labelValeurImage;
    QSpacerItem *horizontalSpacer_7;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QMenuBar *menubar;
    QMenu *menuFichier;
    QMenu *menuParam_tres;
    QMenu *menuAide;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(759, 473);
        actionQuitter = new QAction(MainWindow);
        actionQuitter->setObjectName(QString::fromUtf8("actionQuitter"));
        actionCharger_diaporama = new QAction(MainWindow);
        actionCharger_diaporama->setObjectName(QString::fromUtf8("actionCharger_diaporama"));
        actionEnlever_diaporama = new QAction(MainWindow);
        actionEnlever_diaporama->setObjectName(QString::fromUtf8("actionEnlever_diaporama"));
        actionVitesse_de_defilement = new QAction(MainWindow);
        actionVitesse_de_defilement->setObjectName(QString::fromUtf8("actionVitesse_de_defilement"));
        actionA_propos_de = new QAction(MainWindow);
        actionA_propos_de->setObjectName(QString::fromUtf8("actionA_propos_de"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, -1, -1, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 0, -1, -1);
        labelChangementMode = new QLabel(centralwidget);
        labelChangementMode->setObjectName(QString::fromUtf8("labelChangementMode"));
        QFont font;
        font.setPointSize(12);
        labelChangementMode->setFont(font);

        horizontalLayout_3->addWidget(labelChangementMode);

        btnManuel = new QPushButton(centralwidget);
        btnManuel->setObjectName(QString::fromUtf8("btnManuel"));
        QFont font1;
        font1.setPointSize(14);
        btnManuel->setFont(font1);

        horizontalLayout_3->addWidget(btnManuel);

        btnAuto = new QPushButton(centralwidget);
        btnAuto->setObjectName(QString::fromUtf8("btnAuto"));
        btnAuto->setFont(font1);

        horizontalLayout_3->addWidget(btnAuto);


        horizontalLayout->addLayout(horizontalLayout_3);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        btnGauche = new QPushButton(centralwidget);
        btnGauche->setObjectName(QString::fromUtf8("btnGauche"));
        QFont font2;
        font2.setPointSize(15);
        btnGauche->setFont(font2);

        horizontalLayout_2->addWidget(btnGauche);

        btnDroite = new QPushButton(centralwidget);
        btnDroite->setObjectName(QString::fromUtf8("btnDroite"));
        btnDroite->setFont(font2);

        horizontalLayout_2->addWidget(btnDroite);


        verticalLayout_6->addLayout(horizontalLayout_2);

        btnArreter = new QPushButton(centralwidget);
        btnArreter->setObjectName(QString::fromUtf8("btnArreter"));
        btnArreter->setFont(font2);

        verticalLayout_6->addWidget(btnArreter);

        btnLancer = new QPushButton(centralwidget);
        btnLancer->setObjectName(QString::fromUtf8("btnLancer"));
        btnLancer->setFont(font2);

        verticalLayout_6->addWidget(btnLancer);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        labelNumeroPage = new QLabel(centralwidget);
        labelNumeroPage->setObjectName(QString::fromUtf8("labelNumeroPage"));
        labelNumeroPage->setFont(font1);

        horizontalLayout_5->addWidget(labelNumeroPage);

        labelSlash = new QLabel(centralwidget);
        labelSlash->setObjectName(QString::fromUtf8("labelSlash"));
        labelSlash->setFont(font1);

        horizontalLayout_5->addWidget(labelSlash);

        labelNbImages = new QLabel(centralwidget);
        labelNbImages->setObjectName(QString::fromUtf8("labelNbImages"));
        labelNbImages->setFont(font1);

        horizontalLayout_5->addWidget(labelNbImages);


        verticalLayout_6->addLayout(horizontalLayout_5);


        horizontalLayout->addLayout(verticalLayout_6);


        gridLayout->addLayout(horizontalLayout, 3, 0, 1, 2);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, -1, -1, -1);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        labelTitreImage = new QLabel(centralwidget);
        labelTitreImage->setObjectName(QString::fromUtf8("labelTitreImage"));
        QFont font3;
        font3.setPointSize(22);
        labelTitreImage->setFont(font3);

        gridLayout_2->addWidget(labelTitreImage, 0, 0, 1, 1);


        horizontalLayout_6->addLayout(gridLayout_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        labelTitreCategorie = new QLabel(centralwidget);
        labelTitreCategorie->setObjectName(QString::fromUtf8("labelTitreCategorie"));
        QFont font4;
        font4.setPointSize(17);
        labelTitreCategorie->setFont(font4);

        verticalLayout_2->addWidget(labelTitreCategorie);

        labelValeurCategorie = new QLabel(centralwidget);
        labelValeurCategorie->setObjectName(QString::fromUtf8("labelValeurCategorie"));
        labelValeurCategorie->setFont(font);

        verticalLayout_2->addWidget(labelValeurCategorie);


        horizontalLayout_6->addLayout(verticalLayout_2);


        gridLayout->addLayout(horizontalLayout_6, 0, 0, 1, 2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout_4, 1, 1, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_6);

        labelValeurImage = new QLabel(centralwidget);
        labelValeurImage->setObjectName(QString::fromUtf8("labelValeurImage"));
        QFont font5;
        font5.setPointSize(9);
        labelValeurImage->setFont(font5);
        labelValeurImage->setTextFormat(Qt::AutoText);
        labelValeurImage->setPixmap(QPixmap(QString::fromUtf8(":/diapo/cartesDisney/Disney_51.gif")));
        labelValeurImage->setScaledContents(true);

        horizontalLayout_7->addWidget(labelValeurImage);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_7);


        gridLayout->addLayout(horizontalLayout_7, 1, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);


        gridLayout->addLayout(verticalLayout, 2, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 759, 21));
        menuFichier = new QMenu(menubar);
        menuFichier->setObjectName(QString::fromUtf8("menuFichier"));
        menuParam_tres = new QMenu(menubar);
        menuParam_tres->setObjectName(QString::fromUtf8("menuParam_tres"));
        menuAide = new QMenu(menubar);
        menuAide->setObjectName(QString::fromUtf8("menuAide"));
        MainWindow->setMenuBar(menubar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menubar->addAction(menuFichier->menuAction());
        menubar->addAction(menuParam_tres->menuAction());
        menubar->addAction(menuAide->menuAction());
        menuFichier->addAction(actionQuitter);
        menuParam_tres->addAction(actionCharger_diaporama);
        menuParam_tres->addAction(actionEnlever_diaporama);
        menuParam_tres->addAction(actionVitesse_de_defilement);
        menuAide->addAction(actionA_propos_de);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionQuitter->setText(QCoreApplication::translate("MainWindow", "Quitter", nullptr));
        actionCharger_diaporama->setText(QCoreApplication::translate("MainWindow", "Charger diaporama", nullptr));
        actionEnlever_diaporama->setText(QCoreApplication::translate("MainWindow", "Enlever diaporama", nullptr));
        actionVitesse_de_defilement->setText(QCoreApplication::translate("MainWindow", "Vitesse de d\303\251filement", nullptr));
        actionA_propos_de->setText(QCoreApplication::translate("MainWindow", "A propos de ", nullptr));
        labelChangementMode->setText(QCoreApplication::translate("MainWindow", "Changer de mode :", nullptr));
        btnManuel->setText(QCoreApplication::translate("MainWindow", "Manuel", nullptr));
        btnAuto->setText(QCoreApplication::translate("MainWindow", "Auto", nullptr));
        btnGauche->setText(QCoreApplication::translate("MainWindow", "Pr\303\251c\303\251dent", nullptr));
        btnDroite->setText(QCoreApplication::translate("MainWindow", "Suivant", nullptr));
        btnArreter->setText(QCoreApplication::translate("MainWindow", "Arreter Diaporama", nullptr));
        btnLancer->setText(QCoreApplication::translate("MainWindow", "Lancer Diaporama", nullptr));
        labelNumeroPage->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        labelSlash->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        labelNbImages->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        labelTitreImage->setText(QCoreApplication::translate("MainWindow", "Titre de l'image", nullptr));
        labelTitreCategorie->setText(QCoreApplication::translate("MainWindow", "Categorie", nullptr));
        labelValeurCategorie->setText(QCoreApplication::translate("MainWindow", "Nom de la cat\303\251gorie", nullptr));
        labelValeurImage->setText(QString());
        menuFichier->setTitle(QCoreApplication::translate("MainWindow", "Fichier", nullptr));
        menuParam_tres->setTitle(QCoreApplication::translate("MainWindow", "Param\303\250tres", nullptr));
        menuAide->setTitle(QCoreApplication::translate("MainWindow", "Aide", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LECTEURVUE_H
