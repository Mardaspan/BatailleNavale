#include "battlescreen.h"
#include "ui_battlescreen.h"

BattleScreen::BattleScreen(QWidget *parent) :
    Game(parent),
    ui(new Ui::BattleScreen)
{
    ui->setupUi(this);
}

BattleScreen::~BattleScreen()
{
    delete ui;
}

void BattleScreen::initialisation(Board player)
{
    // Get the player board from ShipChoice Window
    this->setPlayer(player);

    // Added static space to the position of every ship
    int added_width = Square::WIDTH + this->player.getX() + Square::WIDTH/8;
    int added_height = Square::HEIGHT + this->player.getY() + 4;

    // Put the player's ships on the player's board
    ui->pdestroyer->move(this->player.getDestroyer()->getSquare(0)->getX()*Square::WIDTH+added_width, this->player.getDestroyer()->getSquare(0)->getY()*Square::HEIGHT+added_height);
    ui->psubmarine->move(this->player.getSubmarine()->getSquare(0)->getX()*Square::WIDTH+added_width, this->player.getSubmarine()->getSquare(0)->getY()*Square::HEIGHT+added_height);
    ui->pcruiser->move(this->player.getCruiser()->getSquare(0)->getX()*Square::WIDTH+added_width, this->player.getCruiser()->getSquare(0)->getY()*Square::HEIGHT+added_height);
    ui->pbattleship->move(this->player.getBattleship()->getSquare(0)->getX()*Square::WIDTH+added_width, this->player.getBattleship()->getSquare(0)->getY()*Square::HEIGHT+added_height);
    ui->pcarrier->move(this->player.getCarrier()->getSquare(0)->getX()*Square::WIDTH+added_width, this->player.getCarrier()->getSquare(0)->getY()*Square::HEIGHT+added_height);
}

void BattleScreen::on_BoutonQuitter_clicked()
{
    this->close();
}


