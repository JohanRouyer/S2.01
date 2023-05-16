#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    connect(ui->btnDialogOk, SIGNAL(clicked()), this, SLOT(accept()));
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}
