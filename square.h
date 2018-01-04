#ifndef SQUARE_H
#define SQUARE_H


class Square
{

public:
    static const int WIDTH = 45;
    static const int HEIGHT = 45;
    bool touche, occupe;
    int x, y;

    Square();
    Square(int x, int y);
    int getX();
    int getY();
};


#endif // SQUARE_H
