#include "ship.h"

Ship::Ship(int s)
{
    this->size = s;
    this->sunk = false;
}

Ship::~Ship()
{
    delete sprite;
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

QLabel* Ship::getSprite()
{
    return this->sprite;
}

void Ship::setSprite(QLabel* image)
{
    this->sprite = image;
}
