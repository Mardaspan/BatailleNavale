#ifndef SUBMARINE_H
#define SUBMARINE_H

#include "ship.h"

/**
 * Ship of 3 squares
 *
 * @brief The Submarine class
 */
class Submarine:public Ship
{
    static const int SIZE = 3;

public:
    /**
     * Constructor
     *
     * @brief Submarine
     */
    Submarine();
};

#endif // SUBMARINE_H
