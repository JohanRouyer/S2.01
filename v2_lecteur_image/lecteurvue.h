#ifndef LECTEURVUE_H
#define LECTEURVUE_H

#include <QMainWindow>
#include <QWidget>
#include <QDebug>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

private slots:
    void indiquerModeBtnManuel();
    void indiquerModeBtnAuto();
    void indiquerModeBtnGauche();
    void indiquerModeBtnDroite();
    void lancerDiaporama();
    void arreterDiaporama();
    void quitterDiaporama();
    void chargerDiaporama();
    void enleverDiaporama();
    void vitesse();
    void aPropos();

};
#endif // LECTEURVUE_H
