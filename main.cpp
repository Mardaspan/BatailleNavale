#include "BattleScreen.h"
#include "home.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Home y;
    y.show();

    return a.exec();
}
