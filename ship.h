#ifndef SHIP_H
#define SHIP_H

#include <QLabel>

class Ship
{
    int size;
    bool sunk;
    bool partiallyHit;
    QLabel *sprite;


public:
    Ship(int s);
    ~Ship();
    bool isSunk() const;
    void sink();
     bool isPartiallyHit() const;
    void hit();

    QLabel* getSprite();
    void setSprite(QLabel* image);
};

#endif // SHIP_H
