#include "lecteurvue.h"
#include "ui_lecteurvue.h"
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    connect(ui->actionVitesse_de_defilement, SIGNAL(triggered()), this, SLOT(vitesse()));
    connect(ui->actionQuitter, SIGNAL(triggered()), QCoreApplication::instance(),SLOT(quit()));
    connect(ui->actionEnlever_diaporama, SIGNAL(triggered()), this, SLOT(enleverDiaporama()));
    connect(ui->actionCharger_diaporama, SIGNAL(triggered()), this, SLOT(chargerDiaporama()));
    connect(ui->actionA_propos_de, SIGNAL(triggered()), this, SLOT(aPropos()));




    connect(ui->btnAuto,SIGNAL(clicked()),this,SLOT(indiquerModeBtnAuto()));
    connect(ui->btnManuel,SIGNAL(clicked()),this,SLOT(indiquerModeBtnManuel()));
    connect(ui->btnLancer,SIGNAL(clicked()),this,SLOT(lancerDiaporama()));
    connect(ui->btnGauche,SIGNAL(clicked()),this,SLOT(reculer()));
    connect(ui->btnDroite,SIGNAL(clicked()),this,SLOT(avancer()));
    connect(ui->btnArreter,SIGNAL(clicked()),this,SLOT(arreterDiaporama()));

    ui->btnArreter->setEnabled(false);
    ui->btnLancer->setEnabled(false);
    ui->btnAuto->setEnabled(false);
    ui->btnManuel->setEnabled(false);
    ui->btnDroite->setEnabled(false);
    ui->btnGauche->setEnabled(false);

    ui->labelValeurImage->setPixmap(QPixmap("./cartesDisney/Disney_tapis.png"));


}
MainWindow::~MainWindow()
{
    delete ui;
}

unsigned int MainWindow::nbImages()
{
    return _diaporama.size();
}

Image *MainWindow::imageCourante()
{
    if (numDiaporamaCourant() == 0 || nbImages() == 0) {
    return nullptr; // retourne un pointeur nul s'il n'y a pas d'image ou que le lecteur est vide
    }
    else {
    return _diaporama[_posImageCourante]; // retourne un pointeur vers l'image courante
    }
}

unsigned int MainWindow::numDiaporamaCourant()
{
    return _numDiaporamaCourant;
}

void MainWindow::indiquerModeBtnAuto()
{

    qDebug() << "Mode Auto activé";
    ui->btnAuto->setVisible(false);
    ui->btnDroite->setEnabled(false);
    ui->btnGauche->setEnabled(false);
    ui->btnManuel->setVisible(true);
}

void MainWindow::indiquerModeBtnManuel()
{
    qDebug() << "Mode Manuel activé";
    ui->btnManuel->setVisible(false);
    ui->btnAuto->setVisible(true);
    ui->btnDroite->setEnabled(true);
    ui->btnGauche->setEnabled(true);
}

void MainWindow::lancerDiaporama()
{
    qDebug() << "Lancement du diaporama";
    ui->btnArreter->setEnabled(true);
    ui->btnLancer->setEnabled(false);

    ui->btnDroite->setEnabled(true);
    ui->btnGauche->setEnabled(true);
}

void MainWindow::arreterDiaporama()
{
    qDebug() << "Arret du diaporama";
    ui->btnArreter->setEnabled(false);
    ui->btnLancer->setEnabled(true);

    ui->btnDroite->setEnabled(false);
    ui->btnGauche->setEnabled(false);


}

void MainWindow::chargerDiaporama()
{
    qDebug() << "Chargement du diaporama";
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
         ui->labelNbImages->setText(QString::number(nbImages()));
         ui->labelNumeroPage->setText((QString::number(_posImageCourante+1)));

         ui->btnLancer->setEnabled(true);
         ui->btnAuto->setEnabled(true);
         ui->btnManuel->setEnabled(true);

}

void MainWindow::viderDiaporama()
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

void MainWindow::enleverDiaporama()
{
    qDebug() << "diaporama enlevé";
    viderDiaporama();
    ui->labelNbImages->setText(QString::number(nbImages()));
    ui->labelNumeroPage->setText((QString::number(_posImageCourante)));
    ui->btnArreter->setEnabled(false);
    ui->btnLancer->setEnabled(false);
    ui->btnAuto->setEnabled(false);
    ui->btnManuel->setEnabled(false);
    ui->btnDroite->setEnabled(false);
    ui->btnGauche->setEnabled(false);
}

void MainWindow::vitesse()
{
    qDebug() << "Vitesse";
}

void MainWindow::aPropos()
{
    qDebug() << "a propos";
    int reponse = maDlg.exec();
    if(reponse == QDialog::Accepted)
    {
        qDebug() << "fermetrure"<< Qt::endl;
    }
}

void MainWindow::avancer()
{
    qDebug() << "Passage à l'image suivante";
    if (nbImages() > 0)
        {
            _posImageCourante++;
            _posImageCourante = _posImageCourante % nbImages(); // incrémente la position, modulo le nombre d'images
            ui->labelNumeroPage->setText(QString::number(_posImageCourante+1));
        }

}

void MainWindow::reculer()
{
    qDebug() << "Passage à l'image précédente";
    if (nbImages() > 0)
        {
            _posImageCourante--;
            _posImageCourante = _posImageCourante % nbImages(); // décrémente la position, modulo le nombre d'images
            ui->labelNumeroPage->setText(QString::number(_posImageCourante+1));
        }

}

void MainWindow::changerDiaporama(unsigned int pNumDiaporama)
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

void MainWindow::afficher()
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







