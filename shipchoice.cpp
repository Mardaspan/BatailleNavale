#include "shipchoice.h"
#include "ui_shipchoice.h"
#include "home.h"
#include "battlescreen.h"
#include <iostream>

ShipChoice::ShipChoice(QWidget *parent) :
    Game(parent),
    ui(new Ui::ShipChoice)
{
    ui->setupUi(this);
}

void ShipChoice::on_BoutonRetour_clicked()
{
    Home y;
    this->hide();
    y.exec();
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
        if(label->inherits("QLabel"))
        {
            this->ship = label;
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
    if(event->button() == Qt::LeftButton && this->ship)
    {
        this->ship = NULL;
    }
}

void ShipChoice::on_BoutonSuivant_clicked()
{
    BattleScreen x;
    this->hide();
    x.exec();
}
