#include "board.h"

Board::Board()
{
}

Destroyer Board::getDestroyer()
{
    return this->destroyer;
}

Submarine Board::getSubmarine()
{
    return this->submarine;
}

Cruiser Board::getCruiser()
{
    return this->cruiser;
}

Battleship Board::getBattleship()
{
    return this->battleship;
}

Carrier Board::getCarrier()
{
    return this->carrier;
}
