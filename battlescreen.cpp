#include "battlescreen.h"
#include "ui_battlescreen.h"

BattleScreen::BattleScreen(QWidget *parent) :
    Game(parent),
    ui(new Ui::BattleScreen)
{
    ui->setupUi(this);
}

void BattleScreen::on_BoutonQuitter_clicked()
{
    this->close();
}

BattleScreen::~BattleScreen()
{
    delete ui;
}


