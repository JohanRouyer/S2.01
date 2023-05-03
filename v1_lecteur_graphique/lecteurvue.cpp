#include "lecteurvue.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->btnAuto,SIGNAL(clicked()),this,SLOT(indiquerMode()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::indiquerMode()
{
    if(ui->btnAuto->isChecked())
    {
        qDebug() << "Mode Auto activé";
    }
}






