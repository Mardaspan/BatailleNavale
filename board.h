#ifndef BOARD_H
#define BOARD_H

#include "ship.h"
#include "destroyer.h"
#include "submarine.h"
#include "cruiser.h"
#include "battleship.h"
#include "carrier.h"
#include "square.h"

/**
 * This is the game board with its length, width, number of boxes and boats.
 * This class contains all the getters returning the different types of boats.
 * @brief The Board class
 */
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
    /**
     * Construtor
     * @brief checkShips
     */
    void checkShips();

    /**
     * @brief getDestroyer
     * @return The destroyer
     */
    Destroyer *getDestroyer();

    /**
     * @brief getSubmarine
     * @return the submarine
     */
    Submarine *getSubmarine();

    /**
     * @brief getCruiser
     * @return the Cruiser
     */
    Cruiser *getCruiser();

    /**
     * @brief getBattleship
     * @return the Battleship
     */
    Battleship *getBattleship();

    /**
     * @brief getCarrier
     * @return the carrier
     */
    Carrier *getCarrier();

    /**
     * @brief getSquare
     * @param x
     * @param y
     * @return the square according to x and y
     */
    Square *getSquare(int x, int y);

    /**
     * @brief getWidth
     * @return the width of the board
     */
    int getWidth();

    /**
     * @brief getHeight
     * @return the height of the board
     */
    int getHeight();

    /**
     * @brief getNbSquares
     * @return the number of squares in the board
     */
    int getNbSquares();

    /**
     * @brief getX
     * @return X
     */
    int getX();

    /**
     * @brief getY
     * @return Y
     */
    int getY();

    /**
     * @brief isOver
     * @return true if the game is over and false if not
     */
    bool isOver();

    /**
     * @brief isShipsPlaced
     * @return true if the ships are placed and false if not
     */
    bool isShipsPlaced();

    /**
     * Set the value of x
     * @brief setX
     * @param x
     */
    void setX(int x);

    /**
     * Set the value of y
     * @brief setY
     * @param y
     */
    void setY(int y);
};

#endif // BOARD_H
