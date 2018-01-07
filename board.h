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
    static const int WIDTH = 500;
    static const int HEIGHT = 500;
    static const int NB_SQUARES = 10;

    Destroyer destroyer;
    Submarine submarine;
    Cruiser cruiser;
    Battleship battleship;
    Carrier carrier;
    Square squares[NB_SQUARES][NB_SQUARES]; //Liste des cases de la grille
    int x, y;
    bool over;

public:
    Board();
    void checkShips();
    Destroyer *getDestroyer();
    Submarine *getSubmarine();
    Cruiser *getCruiser();
    Battleship *getBattleship();
    Carrier *getCarrier();
    Square *getSquare(int x, int y);
    int getWidth();
    int getHeight();
    int getNbSquares();
    int getX();
    int getY();
    bool isOver();
    bool isShipsPlaced();
    void setX(int x);
    void setY(int y);
};

#endif // BOARD_H
