#include "board.h"
#include <iostream>

Board::Board()
{
    for(int i=0; i<NB_SQUARES; i++)
    {
        for(int j=0; j<NB_SQUARES; j++)
        {
            squares[i][j] = new Square(i*Square::WIDTH+10, j*Square::HEIGHT+10);
        }
    }

    for(int a=0; a<NB_SQUARES; a++)
    {
        for(int b=0; b<NB_SQUARES; b++)
        {
            std::cout << "X = " << squares[a][b]->getX() << " / Y = " << squares[a][b]->getY() << std::endl;
        }
    }
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

int Board::getWidth()
{
    return WIDTH;
}

int Board::getHeight()
{
    return HEIGHT;
}

int Board::getX()
{
    return this->x;
}

int Board::getY()
{
    return this->y;
}

void Board::setX(int x)
{
    this->x = x;
}

void Board::setY(int y)
{
    this->y = y;
}
