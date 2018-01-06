#ifndef CRUISER_H
#define CRUISER_H

#include "ship.h"

class Cruiser:public Ship
{
    static const int SIZE = 3;

public:
    Cruiser();
};

#endif // CRUISER_H
