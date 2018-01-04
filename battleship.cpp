#include "battleship.h"

Battleship::Battleship() : Ship(SIZE)
{
}

Square Battleship::getSquare(int position)
{
    if(position >= 0 && position < SIZE)
    {
        return * this->squares[position];
    } else {
        std::cerr << "Positon error : the position passed for Battleship doesn't exist." << std::endl;
    }
}

void Battleship::setSquare(int position, Square s)
{
    if(position >= 0 && position < SIZE)
    {
        this->squares[position] = &s;
    } else {
        std::cerr << "Positon error : the position passed for Battleship doesn't exist." << std::endl;
    }
}
