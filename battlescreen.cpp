#include "battlescreen.h"
#include "ui_battlescreen.h"

BattleScreen::BattleScreen(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::BattleScreen)
{
    ui->setupUi(this);
}

BattleScreen::~BattleScreen()
{
    delete ui;
}
