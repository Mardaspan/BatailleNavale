#ifndef CARRIER_H
#define CARRIER_H

#include "ship.h"

class Carrier:public Ship
{
    static const int SIZE = 5;

public:
    Carrier();
};

#endif // CARRIER_H
