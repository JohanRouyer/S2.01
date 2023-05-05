#include <iostream>
#include "lecteur.h"
#include "image.h"

using namespace std;

int main()
{
    Lecteur monLecteur;
    monLecteur.afficher();

    // On change de diaporama courant, ce qui a pour effet de le charge.
    // Le lecteur charge 4 images. L'image courante est la première, par défaut.
    monLecteur.changerDiaporama(1);
    monLecteur.afficher();

    cout << endl << "Test avancer() : 4 fois " << endl;
    // on avance 4 fois, pour vérifier que avancer() fonctionne correctement
    for (unsigned int i = 1 ; i <= 4; i++)
    {
        monLecteur.avancer();
        cout << "avancer() : " << endl;
        monLecteur.afficher();
    }

    cout << endl << "Test reculer() : 5 fois " << endl;
    // on recule 5 fois, pour vérifier que reculer() fonctionne correctement
    for (unsigned int i = 1 ; i <= 5; i++)
    {
        monLecteur.reculer();
        cout << "reculer() : " << endl;
        monLecteur.afficher();
    }

     // on enlève le diaporama du lecteur, et affichage du nouvel état du lecteur
      cout << endl << "Enlever le diaporama courant = Choisir diaporama 0" << endl;
        monLecteur.changerDiaporama(0);
        monLecteur.afficher();

        return 0;
    }
