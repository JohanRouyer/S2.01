/********************************************************************************
** Form generated from reading UI file 'lecteurvue.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LECTEURVUE_H
#define UI_LECTEURVUE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
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
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *labelChangementMode;
    QPushButton *btnManuel;
    QPushButton *btnAuto;
    QLabel *labelTitreImage;
    QLabel *labelTitreCategorie;
    QLabel *labelValeurCategorie;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *btnLancer;
    QPushButton *btnArreter;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btnGauche;
    QPushButton *btnDroite;
    QLabel *labelNumeroPage;
    QLabel *labelValeurImage;
    QMenuBar *menubar;
    QMenu *menuFichier;
    QMenu *menuParam_tres;
    QMenu *menuAide;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(793, 572);
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
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 490, 343, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        labelChangementMode = new QLabel(horizontalLayoutWidget);
        labelChangementMode->setObjectName(QString::fromUtf8("labelChangementMode"));
        QFont font;
        font.setPointSize(12);
        labelChangementMode->setFont(font);

        horizontalLayout->addWidget(labelChangementMode);

        btnManuel = new QPushButton(horizontalLayoutWidget);
        btnManuel->setObjectName(QString::fromUtf8("btnManuel"));
        QFont font1;
        font1.setPointSize(14);
        btnManuel->setFont(font1);

        horizontalLayout->addWidget(btnManuel);

        btnAuto = new QPushButton(horizontalLayoutWidget);
        btnAuto->setObjectName(QString::fromUtf8("btnAuto"));
        btnAuto->setFont(font1);

        horizontalLayout->addWidget(btnAuto);

        labelTitreImage = new QLabel(centralwidget);
        labelTitreImage->setObjectName(QString::fromUtf8("labelTitreImage"));
        labelTitreImage->setGeometry(QRect(220, 40, 221, 81));
        QFont font2;
        font2.setPointSize(22);
        labelTitreImage->setFont(font2);
        labelTitreCategorie = new QLabel(centralwidget);
        labelTitreCategorie->setObjectName(QString::fromUtf8("labelTitreCategorie"));
        labelTitreCategorie->setGeometry(QRect(590, 120, 121, 31));
        QFont font3;
        font3.setPointSize(17);
        labelTitreCategorie->setFont(font3);
        labelValeurCategorie = new QLabel(centralwidget);
        labelValeurCategorie->setObjectName(QString::fromUtf8("labelValeurCategorie"));
        labelValeurCategorie->setGeometry(QRect(590, 160, 141, 51));
        labelValeurCategorie->setFont(font);
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(560, 340, 221, 127));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        btnLancer = new QPushButton(verticalLayoutWidget);
        btnLancer->setObjectName(QString::fromUtf8("btnLancer"));
        QFont font4;
        font4.setPointSize(15);
        btnLancer->setFont(font4);

        verticalLayout->addWidget(btnLancer);

        btnArreter = new QPushButton(verticalLayoutWidget);
        btnArreter->setObjectName(QString::fromUtf8("btnArreter"));
        btnArreter->setFont(font4);

        verticalLayout->addWidget(btnArreter);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        btnGauche = new QPushButton(verticalLayoutWidget);
        btnGauche->setObjectName(QString::fromUtf8("btnGauche"));
        btnGauche->setFont(font4);

        horizontalLayout_2->addWidget(btnGauche);

        btnDroite = new QPushButton(verticalLayoutWidget);
        btnDroite->setObjectName(QString::fromUtf8("btnDroite"));
        btnDroite->setFont(font4);

        horizontalLayout_2->addWidget(btnDroite);


        verticalLayout->addLayout(horizontalLayout_2);

        labelNumeroPage = new QLabel(centralwidget);
        labelNumeroPage->setObjectName(QString::fromUtf8("labelNumeroPage"));
        labelNumeroPage->setGeometry(QRect(520, 450, 49, 16));
        labelNumeroPage->setFont(font1);
        labelValeurImage = new QLabel(centralwidget);
        labelValeurImage->setObjectName(QString::fromUtf8("labelValeurImage"));
        labelValeurImage->setGeometry(QRect(20, 120, 481, 351));
        QFont font5;
        font5.setPointSize(9);
        labelValeurImage->setFont(font5);
        labelValeurImage->setPixmap(QPixmap(QString::fromUtf8("cartesDisney/Disney_0.png")));
        labelValeurImage->setScaledContents(true);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 793, 22));
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
        labelTitreImage->setText(QCoreApplication::translate("MainWindow", "Titre de l'image", nullptr));
        labelTitreCategorie->setText(QCoreApplication::translate("MainWindow", "Categorie", nullptr));
        labelValeurCategorie->setText(QCoreApplication::translate("MainWindow", "Nom de la cat\303\251gorie", nullptr));
        btnLancer->setText(QCoreApplication::translate("MainWindow", "Lancer Diaporama", nullptr));
        btnArreter->setText(QCoreApplication::translate("MainWindow", "Arreter Diaporama", nullptr));
        btnGauche->setText(QCoreApplication::translate("MainWindow", "Pr\303\251c\303\251dent", nullptr));
        btnDroite->setText(QCoreApplication::translate("MainWindow", "Suivant", nullptr));
        labelNumeroPage->setText(QCoreApplication::translate("MainWindow", "1/3", nullptr));
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
