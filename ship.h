#ifndef SHIP_H
#define SHIP_H

#include "square.h"
#include <iostream>

class Ship
{
    int size;
    bool sunk;

public:
    Ship(int s);
    int getSize();
    bool isSunk() const;
    void sink();
    void hit();
};

#endif // SHIP_H
