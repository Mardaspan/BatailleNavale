#ifndef BOARD_H
#define BOARD_H

#include "ship.h"
#include "destroyer.h"
#include "submarine.h"
#include "cruiser.h"
#include "battleship.h"
#include "carrier.h"
#include "square.h"

class Board
{
    static const int WIDTH = 510;
    static const int HEIGHT = 510;
    static const int NB_SQUARES = 10;

    Destroyer destroyer;
    Submarine submarine;
    Cruiser cruiser;
    Battleship battleship;
    Carrier carrier;
    int x, y;
    Square * squares[NB_SQUARES][NB_SQUARES];

public:
    Board();
    Destroyer getDestroyer();
    Submarine getSubmarine();
    Cruiser getCruiser();
    Battleship getBattleship();
    Carrier getCarrier();
    int getWidth();
    int getHeight();
    int getX();
    int getY();
    void setX(int x);
    void setY(int y);
};

#endif // BOARD_H
