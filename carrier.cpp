#include "carrier.h"

Carrier::Carrier() : Ship(SIZE)
{
}

Square Carrier::getSquare(int position)
{
    if(position >= 0 && position < SIZE)
    {
        return * this->squares[position];
    } else {
        std::cerr << "Positon error : the position passed for Carrier doesn't exist." << std::endl;
    }
}

void Carrier::setSquare(int position, Square s)
{
    if(position >= 0 && position < SIZE)
    {
        this->squares[position] = &s;
    } else {
        std::cerr << "Positon error : the position passed for Carrier doesn't exist." << std::endl;
    }
}
