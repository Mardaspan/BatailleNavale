#include "square.h"

Square::Square()
{
    this->hit = false;
    this->occupied = false;
}

Square::Square(int x, int y)
{
    this->hit = false;
    this->occupied = false;
    this->x = x;
    this->y = y;
}

int Square::getX()
{
    return this->x;
}

int Square::getY()
{
    return this->y;
}

bool Square::isOccupied()
{
    return this->occupied;
}

bool Square::isHit()
{
    return this->hit;
}

void Square::setOccupied(bool o)
{
    this->occupied = o;
}

void Square::setHit(bool h)
{
    this->hit = h;
}
