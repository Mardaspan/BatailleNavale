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

void Ship::hit()
{
}

QLabel* Ship::getSprite()
{
    return this->sprite;
}

void Ship::setSprite(QLabel* image)
{
    this->sprite = image;
}
