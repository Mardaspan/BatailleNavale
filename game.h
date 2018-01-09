#ifndef GAME_H
#define GAME_H

#include <QDialog>
#include "board.h"

/**
 * This is the class of the game. Here, we retrieve all the information of the player and the computer.
 * @brief The Game class
 */
class Game : public QDialog
{
protected:
    Board player;
    Board ennemy;

    Square * getSquare(Board board, int x, int y);

public:
    /**
     * Constructor
     * @brief Game
     * @param parent
     */
    explicit Game(QWidget *parent = 0);

    /**
     * @brief getPlayer
     * @return the player
     */
    Board getPlayer();

    /**
     * @brief getEnnemy
     * @return the ennemy
     */
    Board getEnnemy();

    /**
     * @brief isOver
     * @return true if the game is over and false if not
     */
    bool isOver();

    /**
     * @brief setPlayer
     * @param b
     */
    void setPlayer(Board b);
};

#endif // GAME_H
