#ifndef CARRIER_H
#define CARRIER_H

#include "ship.h"

/**
 * This is the class of the carrier, extending the class "ship". It has a length of 5 squares in parameters.
 * @brief The Carrier class
 */
class Carrier:public Ship
{
    static const int SIZE = 5;

public:
    /**
     *Constructor
     * @brief Carrier
     */
    Carrier();
};

#endif // CARRIER_H
