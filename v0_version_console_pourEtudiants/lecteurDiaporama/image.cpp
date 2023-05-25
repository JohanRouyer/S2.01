#include "image.h"

Image::Image(unsigned int pRang, string pCategorie, string pTitre, string pChemin)
{
    _rang = pRang;              //rang de l'image
    _categorie = pCategorie;    //categorie de l'image
    _titre = pTitre;            //Titre de l'image
    _chemin = pChemin;          //chemin d'acces de l'image
}

unsigned int Image::getRang()
{
    return _rang;               // retourne le rang de l'image
}

string Image::getCategorie()
{
    return _categorie;          // retourne la categorie de l'image
}

string Image::getTitre()
{
    return _titre;              // retourne le titre de l'image
}

string Image::getChemin()
{
    return _chemin;             // retourne le chemin d'acces de l'image
}

void Image::afficher()
{
    cout << "image( rang:" << getRang() << ", titre:" << getTitre() << ", categorie:"
         << getCategorie() << ", chemin:"<< getChemin() << ")" << endl;
}
