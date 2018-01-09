#ifndef DESTROYER_H
#define DESTROYER_H

#include "ship.h"

/**
 * This is the class of the destroyer, extending the class "ship". It has a length of 2 squares in parameters.
 * @brief The Destroyer class
 */
class Destroyer:public Ship
{
    static const int SIZE = 2;

public:

    /**
     * Constructor
     * @brief Destroyer
     */
    Destroyer();
};

#endif // DESTROYER_H
