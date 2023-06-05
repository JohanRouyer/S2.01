#include "lecteurvue.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LecteurVue w;
    w.show();
    return a.exec();
}
