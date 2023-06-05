#include <QMessageBox>
#include <QInputDialog>
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

    // Création des étiquettes pour la barre de statut
    mode = new QLabel();
    rang = new QLabel();
    majStatusBar();
    mode->setAlignment(Qt::AlignLeft);
    rang->setAlignment(Qt::AlignRight);
    ui->statusbar->addWidget(mode, 1);
    ui->statusbar->addWidget(rang, 0);

    // Établissement des connexions entre les signaux et les slots
    connect(ui->btnChargerDiapo, SIGNAL(triggered()), this, SLOT(chargerDiaporama()));
    connect(ui->btnEnleverDiaporama, SIGNAL(triggered()), this, SLOT(enleverDiaporama()));
    connect(ui->btnVitesse, SIGNAL(triggered()), this, SLOT(changerVitesse()));
    connect(ui->btnArreter, SIGNAL(clicked()), this, SLOT(arreterDiapo()));
    connect(ui->btnLancer, SIGNAL(clicked()), this, SLOT(demarrerDiapo()));
    connect(ui->btnSuivant, SIGNAL(clicked()), this, SLOT(ClicSuivant()));
    connect(ui->btnPrecedent, SIGNAL(clicked()), this, SLOT(ClicPrecedent()));
    connect(ui->apropos, SIGNAL(triggered()), this, SLOT(apropos()));
    connect(ui->btnQuitter, SIGNAL(triggered()), QCoreApplication::instance(), SLOT(quit()), Qt::QueuedConnection);

    // Configuration du timer
    timer.setInterval(2000);
    connect(&timer, SIGNAL(timeout()), this, SLOT(suivant()));
}

LecteurVue::~LecteurVue() {
    delete ui;
    // Libération de la mémoire allouée pour l'interface utilisateur
}

void LecteurVue::demarrerDiapo() {
    ui->btnArreter->setEnabled(true);
    while (_lecteur.imageCourante()->getRang() != 1)
    {
        suivant();
    }
    etat = automatique;
    timer.start();
    majStatusBar();
    // Démarre le diaporama en mode automatique et met à jour la barre de statut
}

void LecteurVue::arreterDiapo() {
    ui->btnArreter->setEnabled(false);
    etat = manuel;
    timer.stop();
    majStatusBar();
    // Arrête le diaporama automatique et le timer, et met à jour la barre de statut
}

void LecteurVue::chargerDiaporama() {
    ui->btnLancer->setEnabled(true);
    ui->btnSuivant->setEnabled(true);
    ui->btnPrecedent->setEnabled(true);
    _lecteur.changerDiaporama(1);
    afficherImageCourante();
    etat = manuel;
    majStatusBar();
    majBoutonsLabels(true);
    // Charge le diaporama, affiche l'image courante, met à jour la barre de statut et active les boutons nécessaires
}

void LecteurVue::enleverDiaporama() {
    _lecteur.changerDiaporama(0);
    etat = nonCharger;
    majStatusBar();
    timer.start();
    majBoutonsLabels(false);
    // Enlève le diaporama, met à jour la barre de statut, démarre le timer et désactive les boutons
}

void LecteurVue::ClicSuivant() {
    if (etat == manuel) {
        _lecteur.avancer();
        afficherImageCourante();
        majStatusBar();
    } else {
        arreterDiapo();
    }
}

void LecteurVue::suivant() {
    _lecteur.avancer();
    afficherImageCourante();
    majStatusBar();
    // Passe à l'image suivante, l'affiche et met à jour la barre de statut
}

void LecteurVue::ClicPrecedent() {
    if (etat == manuel) {
        _lecteur.reculer();
        afficherImageCourante();
        majStatusBar();
    } else {
        arreterDiapo();
    }
}

void LecteurVue::precedent() {
    _lecteur.reculer();
    afficherImageCourante();
    majStatusBar();
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

void LecteurVue::majStatusBar() {
    if (etat == nonCharger) {
        mode->setText("Mode: Non chargé");
            rang->setText("");
    } else if (etat == manuel) {
        mode->setText("Mode: Manuel");
        rang->setText("Rang: " + QString::number(_lecteur.imageCourante()->getRang()) + "/" + QString::number(_lecteur.nbImages()));
    } else {
        mode->setText("Mode : Automatique");
        rang->setText("Rang: " + QString::number(_lecteur.imageCourante()->getRang()) + "/" + QString::number(_lecteur.nbImages()));
    }
    // Met à jour la barre de statut en fonction de l'état du diaporama (chargé ou non chargé)
}

void LecteurVue::apropos() {
    QString message = "Les auteurs : " + QString::fromUtf8(auteurs) + "\n" + "\n";
    message += "version : " + QString::fromUtf8(version) + "\n" + "\n";
    message += "création projet : " + QString::fromUtf8(date);
               QMessageBox::information(this, "à propos", message);
    // Affiche une boîte de dialogue avec des informations sur l'application
}

void LecteurVue::changerVitesse() {
    bool ok;
    int vitesse = QInputDialog::getInt(this, QString("Changer de vitesse"), "Vitesse en ms: ", timer.interval(), 0, 60000, 1, &ok);
    if (ok) {
        timer.setInterval(vitesse);
    }
    // Demande à l'utilisateur de spécifier une nouvelle vitesse pour le diaporama
}

void LecteurVue::arreterTimer() {
    if (timer.isActive()) {
        ui->btnEnleverDiaporama->setEnabled(false);
        timer.stop();
    }
    // Arrête le timer du diaporama
}

void LecteurVue::majBoutonsLabels(bool actif) {
    ui->btnEnleverDiaporama->setEnabled(actif);
    ui->btnVitesse->setEnabled(actif);
    ui->btnLancer->setEnabled(actif);
    ui->btnSuivant->setEnabled(actif);
    ui->btnPrecedent->setEnabled(actif);

    // Met à jour l'état des boutons et des labels dans l'interface utilisateur
}
