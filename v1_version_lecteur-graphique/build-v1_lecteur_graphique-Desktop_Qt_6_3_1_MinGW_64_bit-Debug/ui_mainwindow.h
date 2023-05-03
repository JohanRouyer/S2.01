/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionQuitter;
    QAction *actionCharger_diaporama;
    QAction *actionEnlever_diaporama;
    QAction *actionVitesse_de_d_filement;
    QAction *actionA_propos_de;
    QWidget *centralwidget;
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
        actionVitesse_de_d_filement = new QAction(MainWindow);
        actionVitesse_de_d_filement->setObjectName(QString::fromUtf8("actionVitesse_de_d_filement"));
        actionA_propos_de = new QAction(MainWindow);
        actionA_propos_de->setObjectName(QString::fromUtf8("actionA_propos_de"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
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
        menuParam_tres->addAction(actionVitesse_de_d_filement);
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
        actionVitesse_de_d_filement->setText(QCoreApplication::translate("MainWindow", "Vitesse de d\303\251filement", nullptr));
        actionA_propos_de->setText(QCoreApplication::translate("MainWindow", "A propos de ", nullptr));
        menuFichier->setTitle(QCoreApplication::translate("MainWindow", "Fichier", nullptr));
        menuParam_tres->setTitle(QCoreApplication::translate("MainWindow", "Param\303\250tres", nullptr));
        menuAide->setTitle(QCoreApplication::translate("MainWindow", "Aide", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
