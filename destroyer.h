#ifndef DESTROYER_H
#define DESTROYER_H

#include "ship.h"

class Destroyer:public Ship
{
    static const int SIZE = 2;

public:
    Destroyer();
};

#endif // DESTROYER_H
