#include "square.h"

Square::Square()
{
}

Square::Square(int x, int y)
{
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
