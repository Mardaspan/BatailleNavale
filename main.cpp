#include "battlescreen.h"
#include "home.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    BattleScreen y;
    y.show();

    return a.exec();
}
