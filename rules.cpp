#include "rules.h"
#include "ui_rules.h"
#include "shipchoice.h"
#include "home.h"

Rules::Rules(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Rules)
{
    ui->setupUi(this);
}

Rules::~Rules()
{
    delete ui;
}

void Rules::on_boutonAccueil_clicked()
{
    Home x;
    this->hide();
    x.exec();

}


void Rules::on_boutonJeu_clicked()
{
    ShipChoice y;
    this->hide();
    y.exec();
}
