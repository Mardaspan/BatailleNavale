#include "ship.h"
#include <QException>

Ship::Ship(int s)
{
    this->size = s;
    this->sunk = false;
}

void Ship::checkShip()
{
    bool sunk = true;

    for (int i=0; i < this->squares.size(); ++i) {
        if(!this->squares.at(i)->isHit())
        {
            sunk = false;
        }
    }

    if(sunk) {
        this->sink();
    }
}

void Ship::sink()
{
    this->sunk = true;
}

Square * Ship::getSquare(int position)
{
    return this->squares.at(position);
}

void Ship::addSquare(Square *s)
{
    if(this->squares.size() < this->size)
    {
        s->setOccupied(true);
        this->squares.push_back(s);
    } else {
        throw QException();
    }
}

void Ship::resetSquares()
{
    for (int i=0; i < this->squares.size(); ++i) {
        this->squares.at(i)->setOccupied(false);
    }
    this->squares.clear();
}


int Ship::getSize()
{
    return this->size;
}

bool Ship::isSunk() const
{
    return this->sunk;
}

bool Ship::isPlaced()
{
    if(this->squares.empty())
    {
        return false;
    } else {
        return true;
    }
}
