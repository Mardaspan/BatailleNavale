#ifndef SQUARE_H
#define SQUARE_H


class Square
{

public:
    static const int WIDTH = 50;
    static const int HEIGHT = 50;
    bool touche, occupe;
    int x, y;

    Square(void){
      touche = false;
      occupee = false;
    }

    Square(int x, int y);
    int getWidth();
    int getHeight();
    int getX();
    int getY();
};


#endif // SQUARE_H
