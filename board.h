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
    int casesOccupes;
    bool ajoutCourant;

    Destroyer destroyer;
    Submarine submarine;
    Cruiser cruiser;
    Battleship battleship;
    Carrier carrier;
    int x, y;
    Square squares[NB_SQUARES][NB_SQUARES]; //Liste des cases de la grille

public:
    Board();
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
    bool isShipsPlaced();
    void setX(int x);
    void setY(int y);
    bool ajoutEstValide(void); //indique si les donnees generees aleatoirement pour le placement d'un bateau sont valides
};

#endif // BOARD_H
