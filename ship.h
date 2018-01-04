#ifndef SHIP_H
#define SHIP_H

#include "square.h"
#include <iostream>

class Ship
{
    int size;
    bool sunk;
    bool partiallyHit;

public:
    Ship(int s);
    int getSize();
    bool isSunk() const;
    void sink();
     bool isPartiallyHit() const;
    void hit();
};

#endif // SHIP_H
