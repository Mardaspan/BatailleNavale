#ifndef SUBMARINE_H
#define SUBMARINE_H

#include "ship.h"

class Submarine:public Ship
{
    static const int SIZE = 3;
    Square * squares[SIZE];

public:
    Submarine();
    Square getSquare(int position);
    void setSquare(int position, Square s);
};

#endif // SUBMARINE_H
