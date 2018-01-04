#include "board.h"

Board::Board()
{
    for(int i=0; i<NB_SQUARES; i++)
    {
        for(int j=0; j<NB_SQUARES; j++)
        {
            squares[i][j] = new Square(i, j);
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

Square Board::getSquare(int x, int y)
{
    return * squares[x][y];
}

int Board::getWidth()
{
    return WIDTH;
}

int Board::getHeight()
{
    return HEIGHT;
}

int Board::getNbSquares()
{
    return NB_SQUARES;
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