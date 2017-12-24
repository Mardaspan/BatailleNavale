#include "destroyer.h"

Destroyer::Destroyer() : Ship(SIZE)
{
}

Square Destroyer::getSquare(int position)
{
    if(position >= 0 && position < SIZE)
    {
        return * this->squares[position];
    } else {
        std::cerr << "Positon error : the position passed for Destroyer doesn't exist." << std::endl;
    }
}

void Destroyer::setSquare(int position, Square s)
{
    if(position >= 0 && position < SIZE)
    {
        this->squares[position] = &s;
    } else {
        std::cerr << "Positon error : the position passed for Destroyer doesn't exist." << std::endl;
    }
}
