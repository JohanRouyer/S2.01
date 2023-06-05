#include "lecteurvue.h"
#include "lecteur.h"
#include "ui_lecteurvue.h"
#include <QDebug>
#include <QMessageBox>

LecteurVue::LecteurVue(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LecteurVue)
{
    ui->setupUi(this);
    // Initialisation de l'interface utilisateur et configuration de la fenêtre principale


    mode = new QLabel();
    rang = new QLabel();
    majStatusBar(false);
    mode->setAlignment(Qt::AlignLeft);
    rang->setAlignment(Qt::AlignRight);
    ui->statusbar->addWidget(mode, 1);
    ui->statusbar->addWidget(rang, 0);
    // Création et configuration des étiquettes pour la barre de statut

    connect(ui->btnChargerDiapo, SIGNAL(triggered()), this, SLOT(chargerDiaporama()));
    connect(ui->btnArreter, SIGNAL(clicked()), this, SLOT(arreterDiapo()));
    connect(ui->btnLancer, SIGNAL(clicked()), this, SLOT(demarrerDiapo()));
    connect(ui->btnSuivant, SIGNAL(clicked()), this, SLOT(suivant()));
    connect(ui->btnPrecedent, SIGNAL(clicked()), this, SLOT(precedent()));
    connect(ui->apropos, SIGNAL(triggered()), this, SLOT(apropos()));
    connect(ui->btnQuitter, SIGNAL(triggered()), QCoreApplication::instance(), SLOT(quit()), Qt::QueuedConnection);
    // Établissement des connexions entre les signaux et les slots

}

LecteurVue::~LecteurVue() {
    delete ui;
    // Libération de la mémoire allouée pour l'interface utilisateur
}

void LecteurVue::demarrerDiapo() {
    qDebug() << "début du diaporama" << Qt::endl;
                                            ui->btnArreter->setEnabled(true);
    ui->btnLancer->setEnabled(false);
    ui->btnSuivant->setEnabled(false);
    ui->btnPrecedent->setEnabled(false);
    majStatusBar(true);
    // Démarre le diaporama en désactivant certains boutons et en mettant à jour la barre de statut
}

void LecteurVue::arreterDiapo() {
    qDebug() << "Arrêt du diaporama" << Qt::endl;
    ui->btnLancer->setEnabled(true);
    ui->btnArreter->setEnabled(false);
        // Arrête le diaporama en réactivant les boutons correspondants
}

void LecteurVue::chargerDiaporama() {
    _lecteur.changerDiaporama(1);
    afficherImageCourante();
    majStatusBar(true);
    ui->btnSuivant->setEnabled(true);
    ui->btnPrecedent->setEnabled(true);
    ui->btnLancer->setEnabled(true);
    // Charge le diaporama, affiche l'image courante, met à jour la barre de statut et active les boutons nécessaires
}

void LecteurVue::suivant() {
    _lecteur.avancer();
    afficherImageCourante();
    majStatusBar(true);
    // Passe à l'image suivante, l'affiche et met à jour la barre de statut
}

void LecteurVue::precedent() {
    _lecteur.reculer();
    afficherImageCourante();
    majStatusBar(true);
    // Passe à l'image précédente, l'affiche et met à jour la barre de statut
}

void LecteurVue::afficherImageCourante() {
    Image* img = _lecteur.imageCourante();
    QString lien = QString::fromStdString(img->getChemin());
    ui->image->setPixmap(QPixmap(lien));
    QString titre = QString::fromStdString(img->getTitre());
    ui->titreImage->setText(titre);
    QString categorie = QString::fromStdString(img->getCategorie());
    ui->categorie->setText(categorie);
    // Affiche les informations de l'image courante dans l'interface utilisateur
}

void LecteurVue::majStatusBar(bool estCharge) {
    if (!estCharge) {
        mode->setText("! chargé le diaporama !");
            rang->setText("");
    } else {
        mode->setText("Mode: Manuel");
        rang->setText("Rang: "  + QString::number(_lecteur.imageCourante()->getRang()) + "/" + QString::number(_lecteur.nbImages()));
    }
    // Met à jour la barre de statut en fonction de l'état du diaporama (chargé ou non chargé)
}

void LecteurVue::apropos() {
    QString message = "Les auteurs : "+ QString::fromUtf8(auteurs) +"\n" +"\n";
    message += "version : "+ QString::fromUtf8(version)+"\n" +"\n";
    message += "création projet : "+ QString::fromUtf8(date);
               QMessageBox::information(this, "à propos", message);
    // Affiche une boîte de dialogue avec des informations sur l'application
}
