#include "lecteurvue.h"
#include "ui_lecteurvue.h"

LecteurVue::LecteurVue(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LecteurVue)
{
    ui->setupUi(this);
}

LecteurVue::~LecteurVue()
{
    delete ui;
}
