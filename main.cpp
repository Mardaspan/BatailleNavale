#include "game.h"
#include "home.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Home home;
    home.show();
    return a.exec();
}
