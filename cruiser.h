#ifndef CRUISER_H
#define CRUISER_H

#include "ship.h"

/**
 * This is the class of the cruiser, extending the class "ship". It has a length of 3 squares in parameters.
 * @brief The Cruiser class
 */
class Cruiser:public Ship
{
    static const int SIZE = 3;

public:

    /**
     * Constructor
     * @brief Cruiser
     */
    Cruiser();
};

#endif // CRUISER_H
