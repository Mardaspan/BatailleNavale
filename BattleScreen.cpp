#include "BattleScreen.h"
#include "ui_BattleScreen.h"

BattleScreen:: BattleScreen(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui:: BattleScreen)
{
    ui->setupUi(this);
}

 BattleScreen::~ BattleScreen()
{
    delete ui;
}
