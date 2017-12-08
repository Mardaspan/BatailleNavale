#ifndef GAME_H
#define GAME_H

#include "board.h"

class Game
{
    Board player;
    Board ennemy;

public:
    Game();
    Board getPlayer();
    Board getEnnemy();
};

#endif // GAME_H
