#ifndef GAME_H
#define GAME_H

#include <QDialog>
#include "board.h"

class Game : public QDialog
{
protected:
    Board player;
    Board ennemy;

public:
    explicit Game(QWidget *parent = 0);
    Board getPlayer();
    Board getEnnemy();
};

#endif // GAME_H
