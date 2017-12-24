#include "ship.h"

Ship::Ship(int s)
{
    this->size = s;
    this->sunk = false;
}

int Ship::getSize()
{
    return this->size;
}

bool Ship::isSunk() const
{
    return this->sunk;
}

void Ship::sink()
{
    this->sunk = true;
}

void Ship::hit()
{
}
