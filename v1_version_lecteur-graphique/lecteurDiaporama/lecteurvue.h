#ifndef LECTEURVUE_H
#define LECTEURVUE_H

#include <QDialog>

namespace Ui {
class LecteurVue;
}

class LecteurVue : public QDialog
{
    Q_OBJECT

public:
    explicit LecteurVue(QWidget *parent = nullptr);
    ~LecteurVue();

private:
    Ui::LecteurVue *ui;
};

#endif // LECTEURVUE_H
