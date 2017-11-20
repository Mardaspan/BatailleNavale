#ifndef SHIP_H
#define SHIP_H


class Ship
{
    int size;
    bool sunk;

public:
    Ship(int s);
    bool isSunk() const;
    void sink();
    void hit();
};

#endif // SHIP_H