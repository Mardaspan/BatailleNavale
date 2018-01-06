#ifndef SQUARE_H
#define SQUARE_H


class Square
{

public:
    static const int WIDTH = 45;
    static const int HEIGHT = 45;
    bool hit, occupied;
    int x, y;

    Square();
    Square(int x, int y);
    int getX();
    int getY();
    bool isOccupied();
    bool isHit();
    void setOccupied(bool o);
    void setHit(bool h);
};


#endif // SQUARE_H
