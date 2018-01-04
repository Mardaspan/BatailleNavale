#include "square.h"

Square::Square()
{
    this->touche = false;
    this->occupe = false;
}

Square::Square(int x, int y)
{
    this->touche = false;
    this->occupe = false;
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
