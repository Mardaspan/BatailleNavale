#ifndef DESTROYER_H
#define DESTROYER_H

#include "ship.h"

class Destroyer:public Ship
{
    static const int SIZE = 2;
    Square * squares[SIZE];

public:

    Destroyer();
    Square getSquare(int position);
    void setSquare(int position, Square s);

};

#endif // DESTROYER_H
