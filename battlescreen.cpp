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

bool BattleScreen::isShipPositionOK(Square *first, Ship *ship)
{
    bool ok = true;

    for (int i=0; i < ship->getSize(); ++i) {
        if(this->ennemy.getSquare(first->getX()+i, first->getY())->isOccupied())
        {
            ok = false;
        }
    }

    return ok;
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

    // Put the ennemy's ships on its board
    int x, y;

    //      Destroyer
    x = rand() % 9;
    y = rand() % 10;

    for(int i=0; i<this->ennemy.getDestroyer()->getSize(); i++)
    {
       this->ennemy.getDestroyer()->addSquare(this->ennemy.getSquare(x+i, y));
    }

    //      Submarine
    x = rand() % 8;
    y = rand() % 10;
    while (!this->isShipPositionOK(this->ennemy.getSquare(x, y), this->ennemy.getSubmarine())) {
        x = rand() % 8;
        y = rand() % 10;
    }

    for(int i=0; i<this->ennemy.getSubmarine()->getSize(); i++)
    {
       this->ennemy.getSubmarine()->addSquare(this->ennemy.getSquare(x+i, y));
    }

    //      Cruiser
    x = rand() % 8;
    y = rand() % 10;
    while (!this->isShipPositionOK(this->ennemy.getSquare(x, y), this->ennemy.getCruiser())) {
        x = rand() % 8;
        y = rand() % 10;
    }

    for(int i=0; i<this->ennemy.getCruiser()->getSize(); i++)
    {
       this->ennemy.getCruiser()->addSquare(this->ennemy.getSquare(x+i, y));
    }

    //      Battleship
    x = rand() % 7;
    y = rand() % 10;
    while (!this->isShipPositionOK(this->ennemy.getSquare(x, y), this->ennemy.getBattleship())) {
        x = rand() % 7;
        y = rand() % 10;
    }

    for(int i=0; i<this->ennemy.getBattleship()->getSize(); i++)
    {
       this->ennemy.getBattleship()->addSquare(this->ennemy.getSquare(x+i, y));
    }

    //      Carrier
    x = rand() % 6;
    y = rand() % 10;
    while (!this->isShipPositionOK(this->ennemy.getSquare(x, y), this->ennemy.getCarrier())) {
        x = rand() % 6;
        y = rand() % 10;
    }

    for(int i=0; i<this->ennemy.getCarrier()->getSize(); i++)
    {
       this->ennemy.getCarrier()->addSquare(this->ennemy.getSquare(x+i, y));
    }
}

void BattleScreen::on_BoutonQuitter_clicked()
{
    this->close();
}


