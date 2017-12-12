#include "battlescreen.h"
#include "ui_battlescreen.h"

BattleScreen::BattleScreen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::BattleScreen)
{
    ui->setupUi(this);
}

BattleScreen::~BattleScreen()
{
    delete ui;
}

void BattleScreen::on_BoutonQuitter_clicked()
{
    this->close();
}
