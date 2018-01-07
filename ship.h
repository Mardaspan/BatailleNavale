#ifndef SHIP_H
#define SHIP_H

#include <iostream>
#include <vector>
#include "square.h"
using namespace std;

class Ship
{
    int size;
    bool sunk;
    bool partiallyHit;
    vector<Square*> squares;

public:
    Ship(int s);
    void checkShip();
    void hit();
    void sink();
    Square *getSquare(int position);
    void addSquare(Square *s);
    void resetSquares();
    int getSize();
    bool isSunk() const;
    bool isPartiallyHit() const;
    bool isPlaced();
};

#endif // SHIP_H
