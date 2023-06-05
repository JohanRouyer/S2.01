#include "lecteur.h"

Lecteur::Lecteur()
{
    _numDiaporamaCourant = 0;   // Initialise le numéro du diaporama courant à 0, indiquant que le lecteur est vide
}

void Lecteur::avancer()
{
    if (numDiaporamaCourant() > 0) {
        _posImageCourante = (_posImageCourante+1) % nbImages(); // Avance à l'image suivante en bouclant à la première image après la dernière
    }
}

void Lecteur::reculer()
{
    if (numDiaporamaCourant() > 0) {
        _posImageCourante = (_posImageCourante-1) % nbImages(); // Recule à l'image précédente en bouclant à la dernière image après la première
    }
}

void Lecteur::changerDiaporama(unsigned int pNumDiaporama)
{
    // S'il y a un diaporama courant, le vider, puis charger le nouveau diaporama
    if (numDiaporamaCourant() > 0)
    {
        viderDiaporama();
    }
    _numDiaporamaCourant = pNumDiaporama; // Met à jour le numéro du diaporama courant avec la nouvelle valeur
    if (numDiaporamaCourant() > 0)
    {
        chargerDiaporama(); // Charge le diaporama courant
    }
}

void Lecteur::chargerDiaporama()
{
    // Chargement des images associées au diaporama courant
    // Dans une version ultérieure, ces données proviendront d'une base de données et correspondront au diaporama choisi
    Image* imageACharger;
    imageACharger = new Image(1, "chateau", "Chateau Disney", "://cartesDisney/Disney_0.gif");
    _diaporama.push_back(imageACharger);
    imageACharger = new Image(2, "animaux", "Les 101 Dalmatiens", "://cartesDisney/Disney_1.gif");
    _diaporama.push_back(imageACharger);
    imageACharger = new Image(3, "personne", "Cendrillon", "://cartesDisney/Disney_2.gif");
    _diaporama.push_back(imageACharger);

    // Trier le contenu du diaporama par ordre croissant selon le rang de l'image dans le diaporama
    int n = _diaporama.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (_diaporama[j]->getRang() > _diaporama[j + 1]->getRang()) {
                // Échange v[j] et v[j+1]
                Image* temp = _diaporama[j];
                _diaporama[j] = _diaporama[j + 1];
                _diaporama[j + 1] = temp;
            }
        }
    }

    _posImageCourante = 0;

    cout << "Diaporama num. " << numDiaporamaCourant() << " sélectionné." << endl;
            cout << nbImages() << " images chargées dans le diaporama." << endl;
}

void Lecteur::viderDiaporama()
{
    if (nbImages () > 0)
    {
        unsigned int taille = nbImages();
        for (unsigned int i = 0; i < taille ; i++)
        {
            _diaporama.pop_back(); // Supprime le dernier élément du vecteur, réduisant ainsi sa taille de un. De plus, l'élément supprimé est supprimé de la mémoire.
        }
        _posImageCourante = 0;
    }
    cout << nbImages() << " images restantes dans le diaporama." << endl;
}

void Lecteur::afficher()
{
    /* Affiche les informations sur le lecteur :
     * 1) Vide (si le numéro de diaporama est 0) OU BIEN le numéro de diaporama affiché
     * 2) Si un diaporama courant est chargé (numéro de diaporama > 0), affiche l'image courante OU BIEN 'diaporama vide'
     *    si ce diaporama n'a aucune image */

    if (_numDiaporamaCourant == 0) {
        cout << "Lecteur vide !" << endl;
    }
    else {
        cout << "Diaporama num. " << numDiaporamaCourant() << " sélectionné." << endl;
            if (nbImages() > 0) {
            Image* img = imageCourante();
            cout << "Image courante: ";
            img->afficher();
            cout << endl;
        } else {
            cout << "Diaporama vide !" << endl;
        }
    }
}

unsigned int Lecteur::nbImages()
{
    return _diaporama.size(); // Retourne le nombre d'images dans le diaporama (taille du vecteur _diaporama)
}

Image *Lecteur::imageCourante()
{
    if (nbImages() == 0 || numDiaporamaCourant() == 0) {
        return nullptr; // Retourne un pointeur nul si le diaporama est vide ou si aucun diaporama n'est sélectionné
    } else {
        return _diaporama[_posImageCourante]; // Retourne un pointeur vers l'image courante dans le diaporama
    }
}

unsigned int Lecteur::numDiaporamaCourant()
{
    return _numDiaporamaCourant; // Retourne le numéro du diaporama courant
}
