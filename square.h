#ifndef SQUARE_H
#define SQUARE_H


class Square
{
    int x, y;

public:
    static const int WIDTH = 45;
    static const int HEIGHT = 45;

    Square();
    Square(int x, int y);
    int getX();
    int getY();
};

#endif // SQUARE_H
