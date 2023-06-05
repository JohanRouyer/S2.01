#ifndef LECTEURVUE_H
#define LECTEURVUE_H

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
    void chargerDiaporama(); // Slot pour charger le diaporama
    void suivant(); // Slot pour afficher l'image suivante dans le diaporama
    void precedent(); // Slot pour afficher l'image précédente dans le diaporama
    void demarrerDiapo(); // Slot pour passer le diaporama en mode automatique
    void arreterDiapo(); // Slot pour passer le diaporama en mode manuel
    void apropos(); // Slot pour ouvrir une boîte de dialogue contenant les informations sur le diaporama
    void afficherImageCourante(); // Slot pour afficher l'image courante du lecteur sur l'interface graphique
    void majStatusBar(bool); // Slot pour mettre à jour la barre de statut de l'application

private:
    Ui::LecteurVue *ui;
    const char* auteurs = "ROUYER, MUZICA, ETCHEGARAY"; // noms des auteurs
    const char* date = "15/05/2023"; //date de création de la version du logiciel
    const char* version = "V2"; // la version du logiciel
    Lecteur _lecteur;
    QLabel *mode;
    QLabel *rang;
};
#endif // LECTEURVUE_H
