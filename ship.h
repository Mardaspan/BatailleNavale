#ifndef SHIP_H
#define SHIP_H

#include <QLabel>

class Ship
{
    int size;
    bool sunk;
    QLabel *sprite;


public:
    Ship(int s);
    ~Ship();
    bool isSunk() const;
    void sink();
    void hit();
    QLabel* getSprite();
    void setSprite(QLabel* image);
};

#endif // SHIP_H
