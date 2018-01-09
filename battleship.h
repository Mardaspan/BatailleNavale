#ifndef BATTLESHIP_H
#define BATTLESHIP_H

#include "ship.h"

/**
 * A Ship of 4 squares size
 *
 * @brief The Battleship class
 */
class Battleship:public Ship
{
    static const int SIZE = 4;

public:
    /**
     * Constructor
     *
     * @brief Battleship
     */
    Battleship();
};

#endif // BATTLESHIP_H
