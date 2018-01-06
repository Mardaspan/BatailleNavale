#ifndef SUBMARINE_H
#define SUBMARINE_H

#include "ship.h"

class Submarine:public Ship
{
    static const int SIZE = 3;

public:
    Submarine();
};

#endif // SUBMARINE_H
