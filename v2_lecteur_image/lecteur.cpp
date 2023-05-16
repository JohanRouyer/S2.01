#include "lecteur.h"
#include <algorithm>

Lecteur::Lecteur()
{
    _numDiaporamaCourant = 0;   // =  le lecteur est vide
}

void Lecteur::avancer()
{
    if (nbImages() > 0)
    {
        _posImageCourante++;
        _posImageCourante = _posImageCourante % nbImages(); // incrémente la position, modulo le nombre d'images
    }
}

void Lecteur::reculer()
{
    if (nbImages() > 0)
    {
        _posImageCourante--;
        _posImageCourante = _posImageCourante % nbImages(); // décrémente la position, modulo le nombre d'images
    }
}

void Lecteur::changerDiaporama(unsigned int pNumDiaporama)
{
    // s'il y a un diaporama courant, le vider, puis charger le nouveau Diaporama
    if (numDiaporamaCourant() > 0)
    {
        viderDiaporama();
    }
    _numDiaporamaCourant = pNumDiaporama;
    if (numDiaporamaCourant() > 0)
    {
        chargerDiaporama(); // charge le diaporama courant
    }

}

void Lecteur::chargerDiaporama()
{
    /* Chargement des images associées au diaporama courant
       Dans une version ultérieure, ces données proviendront d'une base de données,
       et correspondront au diaporama choisi */
    Image* imageACharger;
    imageACharger = new Image(3, "personne", "Blanche Neige", "C:\\cartesDisney\\carteDisney2.gif");
    _diaporama.push_back(imageACharger);
    imageACharger = new Image(2, "personne", "Cendrillon", "C:\\cartesDisney\\carteDisney4.gif");
    _diaporama.push_back(imageACharger);
    imageACharger = new Image(4, "animal", "Mickey", "C:\\cartesDisney\\carteDisney1.gif");
    _diaporama.push_back(imageACharger);
    imageACharger = new Image(1, "personne", "Grincheux", "C:\\cartesDisney\\carteDisney1.gif");
    _diaporama.push_back(imageACharger);


     // trier le contenu du diaporama par ordre croissant selon le rang de l'image dans le diaporama
     // A FAIRE

    int tailleDiapo = _diaporama.size();
    for (int i = 0; i < tailleDiapo-1; i++) {
        for (int j = 0; j < tailleDiapo-i-1; j++) {
            if (_diaporama[j]->getRang() > _diaporama[j+1]->getRang()) {
                Image* ImageTemp = _diaporama[j];
                _diaporama[j] = _diaporama[j+1];
                _diaporama[j+1] = ImageTemp;
            }
        }
    }

     _posImageCourante = 0;

     cout << "Diaporama num. " << numDiaporamaCourant() << " selectionne. " << endl;
     cout << nbImages() << " images chargees dans le diaporama" << endl;

}

void Lecteur::viderDiaporama()
{
    if (nbImages () > 0)
    {
        unsigned int taille = nbImages();
        for (unsigned int i = 0; i < taille ; i++)
        {
            _diaporama.pop_back(); /* Removes the last element in the vector,
                                      effectively reducing the container size by one.
                                      AND deletes the removed element */
        }
     _posImageCourante = 0;
    }
    cout << nbImages() << " images restantes dans le diaporama." << endl;

}

void Lecteur::afficher()
{
    /* affiche les information sur le lecteur :
     * 1) vide (si num. de diaporama = 0) OU BIEN numéro de diaporama affiché
     * 2) Si un diaporama courant est chargé (num. de diaporama > 0), affiche l'image courante OU BIEN 'diaporama vide'
     *     si ce diaporama n'a aucun image */
    if (numDiaporamaCourant() == 0){
        cout << "Lecteur vide" << endl;
    }
    else
    {
        if (nbImages() > 0)
        {
            cout << "Image courante : " << endl;
            _diaporama[_posImageCourante]->afficher();
        }
        else
        {
            cout << "Diaporama vide" << endl;

        }
    }

}

unsigned int Lecteur::nbImages()
{
    return _diaporama.size();
}

Image *Lecteur::imageCourante()
{

if (numDiaporamaCourant() == 0 || nbImages() == 0) {
return nullptr; // retourne un pointeur nul s'il n'y a pas d'image ou que le lecteur est vide
}
else {
return _diaporama[_posImageCourante]; // retourne un pointeur vers l'image courante
}

}

unsigned int Lecteur::numDiaporamaCourant() // retourne le numéro du diaporama en cours
{
    return _numDiaporamaCourant;
}
