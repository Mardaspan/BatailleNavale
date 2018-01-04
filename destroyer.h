#ifndef DESTROYER_H
#define DESTROYER_H

#include "ship.h"

class Destroyer:public Ship
{
public:
    Destroyer(int size, bool sunk):Ship(int size, bool sunk,bool isPartiallyHit){}
};

#endif // DESTROYER_H
