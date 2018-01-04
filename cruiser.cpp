#include "cruiser.h"

Cruiser::Cruiser() : Ship(SIZE)
{
}

Square Cruiser::getSquare(int position)
{
    if(position >= 0 && position < SIZE)
    {
        return * this->squares[position];
    } else {
        std::cerr << "Positon error : the position passed for Cruiser doesn't exist." << std::endl;
    }
}

void Cruiser::setSquare(int position, Square s)
{
    if(position >= 0 && position < SIZE)
    {
        this->squares[position] = &s;
    } else {
        std::cerr << "Positon error : the position passed for Cruiser doesn't exist." << std::endl;
    }
}
