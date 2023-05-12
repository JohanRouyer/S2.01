#include "lecteurvue.h"
#include "ui_lecteurvue.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->btnAuto,SIGNAL(clicked()),this,SLOT(indiquerModeBtnAuto()));
    connect(ui->btnManuel,SIGNAL(clicked()),this,SLOT(indiquerModeBtnManuel()));
    connect(ui->btnGauche,SIGNAL(clicked()),this,SLOT(indiquerModeBtnGauche()));
    connect(ui->btnDroite,SIGNAL(clicked()),this,SLOT(indiquerModeBtnDroite()));
    connect(ui->btnLancer,SIGNAL(clicked()),this,SLOT(lancerDiaporama()));
    connect(ui->btnArreter,SIGNAL(clicked()),this,SLOT(arreterDiaporama()));

    connect(ui->actionQuitter, SIGNAL(triggered()), this, SLOT(quitterDiaporama()));
    connect(ui->actionCharger_diaporama, SIGNAL(triggered()), this, SLOT(chargerDiaporama()));
    connect(ui->actionEnlever_diaporama, SIGNAL(triggered()), this, SLOT(enleverDiaporama()));
    connect(ui->actionVitesse_de_defilement, SIGNAL(triggered()), this, SLOT(vitesse()));
    connect(ui->actionA_propos_de, SIGNAL(triggered()), this, SLOT(aPropos()));
}
MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::indiquerModeBtnAuto()
{

    qDebug() << "Mode Auto activé";
    ui->btnAuto->setVisible(false);
    ui->btnDroite->setVisible(false);
    ui->btnGauche->setVisible(false);
    ui->btnManuel->setVisible(true);
}

void MainWindow::indiquerModeBtnManuel()
{
    qDebug() << "Mode Manuel activé";
    ui->btnManuel->setVisible(false);
    ui->btnAuto->setVisible(true);
    ui->btnDroite->setVisible(true);
    ui->btnGauche->setVisible(true);
}


void MainWindow::indiquerModeBtnGauche()
{
    qDebug() << "Passage à l'image précédente";
}


void MainWindow::indiquerModeBtnDroite()
{
    qDebug() << "Passage à l'image suivante";
}

void MainWindow::lancerDiaporama()
{
    qDebug() << "Lancement du diaporama";
}

void MainWindow::arreterDiaporama()
{
    qDebug() << "Arret du diaporama";
}

void MainWindow::quitterDiaporama()
{
    qDebug() << "Arret de l'application";
}

void MainWindow::chargerDiaporama()
{
    qDebug() << "Chargement du diaporama";
}

void MainWindow::enleverDiaporama()
{
    qDebug() << "diaporama enlevé";
}

void MainWindow::vitesse()
{
    qDebug() << "Vitesse";
}

void MainWindow::aPropos()
{
    qDebug() << "a propos";
}







