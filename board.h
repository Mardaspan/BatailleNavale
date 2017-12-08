#ifndef BOARD_H
#define BOARD_H

#include "ship.h"
#include "destroyer.h"
#include "submarine.h"
#include "cruiser.h"
#include "battleship.h"
#include "carrier.h"

class Board
{
    Destroyer destroyer;
    Submarine submarine;
    Cruiser cruiser;
    Battleship battleship;
    Carrier carrier;

public:
    Board();
    Destroyer getDestroyer();
    Submarine getSubmarine();
    Cruiser getCruiser();
    Battleship getBattleship();
    Carrier getCarrier();
};

#endif // BOARD_H
