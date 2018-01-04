#ifndef BATTLESHIP_H
#define BATTLESHIP_H

#include "ship.h"

class Battleship:public Ship
{
    static const int SIZE = 4;
    Square * squares[SIZE];

public:
    Battleship();
    Square getSquare(int position);
    void setSquare(int position, Square s);
};

#endif // BATTLESHIP_H
