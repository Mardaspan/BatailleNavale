#include "battlescreen.h"
#include "ui_battlescreen.h"

BattleScreen::BattleScreen(QWidget *parent) :
    Game(parent),
    ui(new Ui::BattleScreen)
{
    int added_width = Square::WIDTH + this->player.getX() + Square::WIDTH/8;
    int added_height = Square::HEIGHT + this->player.getY() + 4;
    ui->setupUi(this);
    std::cout<< " test " <<this->player.getDestroyer().getSquare(0).getX()<<std::endl;
    ui->pdestroyer->move(this->player.getDestroyer().getSquare(0).getX()*Square::WIDTH+added_width, this->player.getDestroyer().getSquare(0).getY()*Square::HEIGHT+added_height);

}



void BattleScreen::on_BoutonQuitter_clicked()
{
    this->close();
}

BattleScreen::~BattleScreen()
{
    delete ui;
}


