#include "square.h"

Square::Square(int x, int y)
{
    this->x = x;
    this->y = y;
}

int Square::getWidth()
{
    return WIDTH;
}

int Square::getHeight()
{
    return HEIGHT;
}

int Square::getX()
{
    return this->x;
}

int Square::getY()
{
    return this->y;
}
