#ifndef LECTEURVUE_H
#define LECTEURVUE_H

#include <QTimer>
#include <QMessageBox>
#include "lecteur.h"
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class LecteurVue; }
QT_END_NAMESPACE

class LecteurVue : public QMainWindow
{
    Q_OBJECT

public:
    LecteurVue(QWidget *parent = nullptr);
    ~LecteurVue();

public slots:
    void chargerDiaporama(); // Charge le diaporama
    void suivant(); // Affiche l'image suivante dans le diaporama
    void precedent(); // Affiche l'image précédente dans le diaporama
    void demarrerDiapo(); // Démarre le diaporama en mode automatique
    void arreterDiapo(); // Arrête le diaporama et le passe en mode manuel
    void apropos(); // Affiche une boîte de dialogue avec les informations sur le diaporama
    void afficherImageCourante(); // Affiche l'image courante sur l'interface utilisateur
    void majStatusBar(); // Met à jour la barre de statut de l'application
    void ClicSuivant(); // Clic sur le bouton "Suivant"
    void ClicPrecedent(); // Clic sur le bouton "Précédent"
    void enleverDiaporama(); // Enlève le diaporama
    void majBoutonsLabels(bool); // Met à jour les boutons et les labels de l'application
    void arreterTimer(); // Arrête le timer du diaporama
    void changerVitesse(); // Change la vitesse du diaporama en ouvrant une boîte de dialogue

private:
    Ui::LecteurVue *ui;
    const char* auteurs = "ROUYER, MUZICA, ETCHEGARAY"; // Noms des auteurs
    const char* date = "03/06/2023"; // Date de création de la version du logiciel
    const char* version = "V4"; // La version du logiciel
    Lecteur _lecteur;
    QLabel *mode;
    QLabel *rang;

    QTimer timer;
    enum EtatLecteur {manuel, automatique, nonCharger};
    EtatLecteur etat = nonCharger;
};

#endif // LECTEURVUE_H
