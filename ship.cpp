#include "ship.h"

Ship::Ship(int s)
{
    this->size = s;
    this->sunk = false;
    this->partiallyHit = false;
}

void Ship::hit()
{
  this->partiallyHit=true;
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
        this->squares.push_back(s);
    } else {
        cerr << "Ship error : All squares are already defined." << endl;
    }
}

void Ship::resetSquares()
{
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

bool Ship::isPartiallyHit() const
{
    return this->partiallyHit;
}
