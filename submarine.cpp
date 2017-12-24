#include "submarine.h"

Submarine::Submarine() : Ship(SIZE)
{
}

Square Submarine::getSquare(int position)
{
    if(position >= 0 && position < SIZE)
    {
        return * this->squares[position];
    } else {
        std::cerr << "Positon error : the position passed for Submarine doesn't exist." << std::endl;
    }
}

void Submarine::setSquare(int position, Square s)
{
    if(position >= 0 && position < SIZE)
    {
        this->squares[position] = &s;
    } else {
        std::cerr << "Positon error : the position passed for Submarine doesn't exist." << std::endl;
    }
}
