#include "game.h"

Game::Game(QWidget *parent) :
    QDialog(parent)
{
}

Board Game::getPlayer()
{
    return this->player;
}

Board Game::getEnnemy()
{
    return this->ennemy;
}
