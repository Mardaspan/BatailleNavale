#ifndef SHIP_H
#define SHIP_H

#include <iostream>
#include <vector>
#include "square.h"
using namespace std;

/**
 * Simulate a ship of the game
 *
 * @brief The Ship class
 */
class Ship
{
    int size;
    bool sunk;
    vector<Square*> squares;

public:
    /**
     * Constructor
     *
     * @brief Ship
     * @param s ship size
     */
    Ship(int s);
    /**
     * Check if the ship is sunk
     *
     * @brief checkShip
     */
    void checkShip();
    /**
     * The ship sink
     *
     * @brief sink
     */
    void sink();
    /**
     * Get the ship square at the chosen position
     *
     * @brief getSquare
     * @param position position of the square on the ship
     * @return chosen square
     */
    Square *getSquare(int position);
    /**
     * Add a new square to the ship
     *
     * @brief addSquare
     * @param s the new square
     */
    void addSquare(Square *s);
    /**
     * Delete all links between the ship and its squares
     *
     * @brief resetSquares
     */
    void resetSquares();
    /**
     * Get the ship size
     *
     * @brief getSize
     * @return size of the ship
     */
    int getSize();
    /**
     * Tell if the ship is sunk
     *
     * @brief isSunk
     * @return boolean
     */
    bool isSunk() const;
    /**
     * Tell if the ship is placed somewhere on a Board
     *
     * @brief isPlaced
     * @return boolean
     */
    bool isPlaced();
};

#endif // SHIP_H
