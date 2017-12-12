#include "home.h"
#include "ui_home.h"
#include "shipchoice.h"
#include "rules.h"

Home::Home(QWidget *parent) :
    Game(parent),
    ui(new Ui::Home)
{
    ui->setupUi(this);
}

void Home::on_BoutonNP_clicked()
{
    ShipChoice y;
    this->hide();
    y.exec();
}

void Home::on_BoutonQ_clicked()
{
    this->close();
}


Home::~Home()
{
    delete ui;
}

void Home::on_BoutonR_clicked()
{
    Rules x;
    this->hide();
    x.exec();
}
