#ifndef SQUARE_H
#define SQUARE_H


class Square
{
    int x, y;

public:
    static const int WIDTH = 50;
    static const int HEIGHT = 50;

    Square(int x, int y);
    int getWidth();
    int getHeight();
    int getX();
    int getY();
};

#endif // SQUARE_H
