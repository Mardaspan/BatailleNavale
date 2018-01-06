#ifndef BATTLESHIP_H
#define BATTLESHIP_H

#include "ship.h"

class Battleship:public Ship
{
    static const int SIZE = 4;

public:
    Battleship();
};

#endif // BATTLESHIP_H
