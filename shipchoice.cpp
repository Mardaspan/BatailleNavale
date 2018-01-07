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

bool ShipChoice::isShipPositionOK(Square *first, Ship *ship)
{
    bool ok = true;

    for (int i=0; i < ship->getSize(); ++i) {
        if(this->player.getSquare(first->getX()+i, first->getY())->isOccupied())
        {
            ok = false;
        }
    }

    return ok;
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
    Square *position;
    Ship *selected;
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
            position = this->getSquare(this->player, this->ship->x(), this->ship->y());

            // Define the ship squares
            if(this->ship->objectName() == "carrier")
            {
                selected = this->player.getCarrier();
            } else if(this->ship->objectName() == "battleship") {
                selected = this->player.getBattleship();
            } else if(this->ship->objectName() == "cruiser") {
                selected = this->player.getCruiser();
            } else if(this->ship->objectName() == "submarine") {
                selected = this->player.getSubmarine();
            } else if(this->ship->objectName() == "destroyer") {
                selected = this->player.getDestroyer();
            }

            // If the ship is already defined, reset the linked squares
            selected->resetSquares();

            // If the ship get out of the board, put the whole in it
            if(position->getX() + selected->getSize() > this->player.getNbSquares()) {
                position = this->player.getSquare(this->player.getNbSquares()-selected->getSize(), position->getY());
            }

            // Check if the ship's position isn't already taken by another
            if(!this->isShipPositionOK(position, selected))
            {
                this->ship->move(this->startX, this->startY);
            } else {
                for(int i=0; i<selected->getSize(); i++)
                {
                    selected->addSquare(this->player.getSquare(position->getX()+i, position->getY()));
                }

                // Move the ship
                this->ship->move(position->getX()*Square::WIDTH+added_width, position->getY()*Square::HEIGHT+added_height);

                // Reset
                this->startX = 0;
                this->startY = 0;
                this->ship = NULL;
            }
        }
    }
}

void ShipChoice::on_BoutonSuivant_clicked()
{
    if(this->player.isShipsPlaced()) {
        BattleScreen x;
        x.initialisation(this->player);
        this->hide();
        x.exec();
    }
}

void ShipChoice::on_BoutonRetour_clicked()
{
    Home y;
    this->hide();
    y.exec();
}
