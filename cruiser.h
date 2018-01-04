#ifndef CRUISER_H
#define CRUISER_H

#include "ship.h"

class Cruiser:public Ship
{
    static const int SIZE = 3;
    Square * squares[SIZE];

public:
    Cruiser();
    Square getSquare(int position);
    void setSquare(int position, Square s);
};

#endif // CRUISER_H
