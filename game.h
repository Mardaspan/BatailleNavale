#ifndef GAME_H
#define GAME_H

#include <QDialog>
#include "board.h"

class Game : public QDialog
{
protected:
    Board player;
    Board ennemy;

    Square * getSquare(Board board, int x, int y);

public:
    explicit Game(QWidget *parent = 0);
    Board getPlayer();
    Board getEnnemy();
    bool isOver();
    void setPlayer(Board b);
};

#endif // GAME_H
