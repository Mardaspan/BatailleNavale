#include "ship.h"

Ship::Ship(int s)
{
    this->size = s;
    this->sunk = false;
    this->partiallyHit = false;
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

bool Ship::isPartiallyHit() const
{
    return this->partiallyHit;
}

void Ship::hit()
{
  this->partiallyHit=true;
}
