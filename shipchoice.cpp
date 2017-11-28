#include "shipchoice.h"
#include "ui_shipchoice.h"
#include "home.h"

ShipChoice::ShipChoice(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ShipChoice)
{
   // setAcceptDrops(true);
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
}


