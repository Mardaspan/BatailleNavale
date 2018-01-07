#include "game.h"

Game::Game(QWidget *parent) :
    QDialog(parent)
{
}

Square * Game::getSquare(Board board, int x, int y)
{
    int xSquare, ySquare;
    bool defined = false;
    int width = Square::WIDTH;
    int width_removed = Square::WIDTH + board.getX();
    int height = Square::HEIGHT;
    int height_removed = Square::HEIGHT + board.getY();

    for(int i=0; i<board.getNbSquares(); i++)
    {
        if(i != board.getNbSquares()-1 && x >= i*width+width_removed && x < (i+1)*width+width_removed)
        {
            xSquare = i;
            defined = true;
        } else if(!defined && i == board.getNbSquares()-1) {
            xSquare = i;
            defined = true;
        }
    }

    defined = false;
    for(int j=0; j<board.getNbSquares(); j++)
    {
        if(j != board.getNbSquares()-1 && y >= j*height+height_removed && y < (j+1)*height+height_removed)
        {
            ySquare = j;
            defined = true;
        } else if(!defined && j == board.getNbSquares()-1) {
            ySquare = j;
            defined = true;
        }
    }

    return board.getSquare(xSquare, ySquare);
}

Board Game::getPlayer()
{
    return this->player;
}

Board Game::getEnnemy()
{
    return this->ennemy;
}

bool Game::isOver()
{
    bool over = false;

    if(this->player.isOver() || this->ennemy.isOver())
    {
        over = true;
    }

    return over;
}

void Game::setPlayer(Board b){
    this->player = b;
}
