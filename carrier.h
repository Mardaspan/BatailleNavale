#ifndef CARRIER_H
#define CARRIER_H

#include "ship.h"

class Carrier:public Ship
{
    static const int SIZE = 5;
    Square * squares[SIZE];

public:
    Carrier();
    Square getSquare(int position);
    void setSquare(int position, Square s);
};

#endif // CARRIER_H
