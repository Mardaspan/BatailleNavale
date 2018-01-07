#include "battlescreen.h"
#include "ui_battlescreen.h"

BattleScreen::BattleScreen(QWidget *parent) :
    Game(parent),
    ui(new Ui::BattleScreen)
{
    ui->setupUi(this);
    this->pTurn = false;

    // Get the computer's grid position
    this->ennemy.setX(ui->aigrid->x());
    this->ennemy.setY(ui->aigrid->y());

    // Hide the game over's texts
    ui->textVictory->setVisible(false);
    ui->textDefeat->setVisible(false);
}

BattleScreen::~BattleScreen()
{
    delete ui;
}

bool BattleScreen::isShipPositionOK(Square *first, Ship *ship)
{
    bool ok = true;

    for (int i=0; i < ship->getSize(); ++i) {
        if(this->ennemy.getSquare(first->getX()+i, first->getY())->isOccupied())
        {
            ok = false;
        }
    }

    return ok;
}

void BattleScreen::initialisation(Board player)
{
    // Get the player board from ShipChoice Window
    this->setPlayer(player);
    this->player.setX(ui->playergrid->x());
    this->player.setY(ui->playergrid->y());

    // Added static space to the position of every ship
    int added_width = Square::WIDTH + this->player.getX() + Square::WIDTH/8;
    int added_height = Square::HEIGHT + this->player.getY() + 4;

    // Put the player's ships on the player's board
    ui->pdestroyer->move(this->player.getDestroyer()->getSquare(0)->getX()*Square::WIDTH+added_width, this->player.getDestroyer()->getSquare(0)->getY()*Square::HEIGHT+added_height);
    ui->psubmarine->move(this->player.getSubmarine()->getSquare(0)->getX()*Square::WIDTH+added_width, this->player.getSubmarine()->getSquare(0)->getY()*Square::HEIGHT+added_height);
    ui->pcruiser->move(this->player.getCruiser()->getSquare(0)->getX()*Square::WIDTH+added_width, this->player.getCruiser()->getSquare(0)->getY()*Square::HEIGHT+added_height);
    ui->pbattleship->move(this->player.getBattleship()->getSquare(0)->getX()*Square::WIDTH+added_width, this->player.getBattleship()->getSquare(0)->getY()*Square::HEIGHT+added_height);
    ui->pcarrier->move(this->player.getCarrier()->getSquare(0)->getX()*Square::WIDTH+added_width, this->player.getCarrier()->getSquare(0)->getY()*Square::HEIGHT+added_height);

    // Put the ennemy's ships on its board
    int x, y;

    //      Destroyer
    x = rand() % 9;
    y = rand() % 10;

    for(int i=0; i<this->ennemy.getDestroyer()->getSize(); i++)
    {
       this->ennemy.getDestroyer()->addSquare(this->ennemy.getSquare(x+i, y));
    }

    //      Submarine
    x = rand() % 8;
    y = rand() % 10;
    while (!this->isShipPositionOK(this->ennemy.getSquare(x, y), this->ennemy.getSubmarine())) {
        x = rand() % 8;
        y = rand() % 10;
    }

    for(int i=0; i<this->ennemy.getSubmarine()->getSize(); i++)
    {
       this->ennemy.getSubmarine()->addSquare(this->ennemy.getSquare(x+i, y));
    }

    //      Cruiser
    x = rand() % 8;
    y = rand() % 10;
    while (!this->isShipPositionOK(this->ennemy.getSquare(x, y), this->ennemy.getCruiser())) {
        x = rand() % 8;
        y = rand() % 10;
    }

    for(int i=0; i<this->ennemy.getCruiser()->getSize(); i++)
    {
       this->ennemy.getCruiser()->addSquare(this->ennemy.getSquare(x+i, y));
    }

    //      Battleship
    x = rand() % 7;
    y = rand() % 10;
    while (!this->isShipPositionOK(this->ennemy.getSquare(x, y), this->ennemy.getBattleship())) {
        x = rand() % 7;
        y = rand() % 10;
    }

    for(int i=0; i<this->ennemy.getBattleship()->getSize(); i++)
    {
       this->ennemy.getBattleship()->addSquare(this->ennemy.getSquare(x+i, y));
    }

    //      Carrier
    x = rand() % 6;
    y = rand() % 10;
    while (!this->isShipPositionOK(this->ennemy.getSquare(x, y), this->ennemy.getCarrier())) {
        x = rand() % 6;
        y = rand() % 10;
    }

    for(int i=0; i<this->ennemy.getCarrier()->getSize(); i++)
    {
       this->ennemy.getCarrier()->addSquare(this->ennemy.getSquare(x+i, y));
    }

    // Start the game
    this->playerTurn();
}

void BattleScreen::playerTurn()
{
    if(!this->isOver())
    {
        this->pTurn = true;
    } else {
        this->pTurn = false;

        if(this->ennemy.isOver())
        {
            ui->textVictory->raise();
            ui->textVictory->setVisible(true);
        } else {
            ui->textDefeat->raise();
            ui->textDefeat->setVisible(true);
        }
    }
}

void BattleScreen::computerTurn()
{
    int added_width = Square::WIDTH + this->player.getX() + Square::WIDTH/8;
    int added_height = Square::HEIGHT + this->player.getY() + 4;
    int x, y;

    if(!this->isOver())
    {
        this->pTurn = false;

        x = rand() % 10;
        y = rand() % 10;
        while(this->player.getSquare(x, y)->isHit())
        {
            x = rand() % 10;
            y = rand() % 10;
        }

        Square *square = this->player.getSquare(x, y);
        QLabel *label = new QLabel(this);
        QString iName;

        if(square->isOccupied())
        {
            iName = ":/effects/blast";
        } else {
            iName = ":/effects/spot";
        }
        QPixmap image(iName);
        label->setPixmap(image);
        label->move(square->getX()*Square::WIDTH+added_width, square->getY()*Square::HEIGHT+added_height);
        label->show();

        this->player.getSquare(x, y)->setHit(true);
        this->player.checkShips();

        this->playerTurn();
    } else {
        this->pTurn = false;

        if(this->ennemy.isOver())
        {
            ui->textVictory->raise();
            ui->textVictory->setVisible(true);
        } else {
            ui->textDefeat->raise();
            ui->textDefeat->setVisible(true);
        }
    }
}

void BattleScreen::mousePressEvent(QMouseEvent *event)
{
    int added_width = Square::WIDTH + this->ennemy.getX() + Square::WIDTH/8;
    int added_height = Square::HEIGHT + this->ennemy.getY() + 4;

    if (event->button() == Qt::LeftButton && this->pTurn)
    {
        if((event->x() < this->ennemy.getX() + this->ennemy.getWidth()) && (event->y() < this->ennemy.getY() + this->ennemy.getHeight()) && (event->x() > this->ennemy.getX() + Square::WIDTH) && (event->y() > this->ennemy.getY() + Square::HEIGHT))
        {
            Square *square = this->getSquare(this->ennemy, event->x(), event->y());

            if(!square->isHit())
            {
                QLabel *label = new QLabel(this);
                QString iName;

                if(square->isOccupied())
                {
                    iName = ":/effects/blast";
                } else {
                    iName = ":/effects/spot";
                }
                QPixmap image(iName);
                label->setPixmap(image);
                label->raise();
                label->move(square->getX()*Square::WIDTH+added_width, square->getY()*Square::HEIGHT+added_height);
                label->show();

                this->ennemy.getSquare(square->getX(), square->getY())->setHit(true);
                this->ennemy.checkShips();

                this->computerTurn();
            }
        }
    }
}

void BattleScreen::on_BoutonQuitter_clicked()
{
    this->close();
}


