#include "shipchoice.h"
#include "ui_shipchoice.h"
#include "home.h"
#include "battlescreen.h"

ShipChoice::ShipChoice(QWidget *parent) :
    Game(parent),
    ui(new Ui::ShipChoice)
{
    ui->setupUi(this);
    this->player.setX(ui->grid->x());
    this->player.setY(ui->grid->y());
}

void ShipChoice::on_BoutonRetour_clicked()
{
    Home y;
    this->hide();
    y.exec();
}

Square ShipChoice::getSquare(int x, int y)
{
    int xSquare, ySquare;
    bool defined = false;
    int width = Square::WIDTH;
    int width_removed = Square::WIDTH + this->player.getX();
    int height = Square::HEIGHT;
    int height_removed = Square::HEIGHT + this->player.getY();

    for(int i=0; i<this->player.getNbSquares(); i++)
    {
        if(i != this->player.getNbSquares()-1 && x >= i*width+width_removed && x < (i+1)*width+width_removed)
        {
            xSquare = i;
            defined = true;
        } else if(!defined && i == this->player.getNbSquares()-1) {
            xSquare = i;
            defined = true;
        }
    }

    defined = false;
    for(int j=0; j<this->player.getNbSquares(); j++)
    {
        if(j != this->player.getNbSquares()-1 && y >= j*height+height_removed && y < (j+1)*height+height_removed)
        {
            ySquare = j;
            defined = true;
        } else if(!defined && j == this->player.getNbSquares()-1) {
            ySquare = j;
            defined = true;
        }
    }

    return this->player.getSquare(xSquare, ySquare);
}

ShipChoice::~ShipChoice()
{
    delete ui;
    delete this->ship;
}

void ShipChoice::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton)
    {
        QLabel* label = static_cast<QLabel*>(childAt(event->pos()));
        if(label->inherits("QLabel") && label->objectName() != "grid" && label->objectName() != "background")
        {
            this->ship = label;
            this->startX = this->ship->x();
            this->startY = this->ship->y();
        }
    }
}

void ShipChoice::mouseMoveEvent(QMouseEvent *event)
{
    if (this->ship)
    {
        this->ship->move(event->x()-(this->ship->size().width()/2), event->y()-(this->ship->size().height()/2));
    }
}

void ShipChoice::mouseReleaseEvent(QMouseEvent *event)
{
    Square position;
    int added_width = Square::WIDTH + this->player.getX() + Square::WIDTH/8;
    int added_height = Square::HEIGHT + this->player.getY() + 4;

    if(event->button() == Qt::LeftButton && this->ship)
    {
        if((this->ship->x() > this->player.getX() + this->player.getWidth()) || (this->ship->y() > this->player.getY() + this->player.getHeight()) || (this->ship->x() < this->player.getX() + Square::WIDTH) || (this->ship->y() < this->player.getY() + Square::HEIGHT))
        {
            // The ship isn't on the grid, put it back where it was
            this->ship->move(this->startX, this->startY);
        } else {
            // Define the ship position
            position = this->getSquare(this->ship->x(), this->ship->y());

            // Define the ship squares
            if(this->ship->objectName() == "carrier")
            {
                if(position.getX() + this->player.getCarrier().getSize() > this->player.getNbSquares()) {
                    position = this->player.getSquare(this->player.getNbSquares()-this->player.getCarrier().getSize(), position.getY());
                }

                for(int i=0; i<this->player.getCarrier().getSize(); i++)
                {
                    this->player.getCarrier().setSquare(i, this->player.getSquare(position.getX()+i, position.getY()));
                }
            } else if(this->ship->objectName() == "battleship") {
                if(position.getX() + this->player.getBattleship().getSize() > this->player.getNbSquares()) {
                    position = this->player.getSquare(this->player.getNbSquares()-this->player.getBattleship().getSize(), position.getY());
                }

                for(int i=0; i<this->player.getBattleship().getSize(); i++)
                {
                    this->player.getBattleship().setSquare(i, this->player.getSquare(position.getX()+i, position.getY()));
                }
            } else if(this->ship->objectName() == "cruiser") {
                if(position.getX() + this->player.getCruiser().getSize() > this->player.getNbSquares()) {
                    position = this->player.getSquare(this->player.getNbSquares()-this->player.getCruiser().getSize(), position.getY());
                }

                for(int i=0; i<this->player.getCruiser().getSize(); i++)
                {
                    this->player.getCruiser().setSquare(i, this->player.getSquare(position.getX()+i, position.getY()));
                }
            } else if(this->ship->objectName() == "submarine") {
                if(position.getX() + this->player.getSubmarine().getSize() > this->player.getNbSquares()) {
                    position = this->player.getSquare(this->player.getNbSquares()-this->player.getSubmarine().getSize(), position.getY());
                }
                for(int i=0; i<this->player.getSubmarine().getSize(); i++)
                {
                    this->player.getSubmarine().setSquare(i, this->player.getSquare(position.getX()+i, position.getY()));
                }
            } else if(this->ship->objectName() == "destroyer") {
                if(position.getX() + this->player.getDestroyer().getSize() > this->player.getNbSquares()) {
                    position = this->player.getSquare(this->player.getNbSquares()-this->player.getDestroyer().getSize(), position.getY());
                }

                for(int i=0; i<this->player.getDestroyer().getSize(); i++)
                {
                    this->player.getDestroyer().setSquare(i, this->player.getSquare(position.getX()+i, position.getY()));
                }
            }

            this->ship->move(position.getX()*Square::WIDTH+added_width, position.getY()*Square::HEIGHT+added_height);
            this->startX = 0;
            this->startY = 0;
            this->ship = NULL;
        }
    }
}

void ShipChoice::on_BoutonSuivant_clicked()
{   BattleScreen x;
    x.setPlayer(this->player);
    this->hide();
    x.exec();
}
