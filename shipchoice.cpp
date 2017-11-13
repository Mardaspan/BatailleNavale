#include "shipchoice.h"
#include "ui_shipchoice.h"

ShipChoice::ShipChoice(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ShipChoice)
{
    ui->setupUi(this);
}

ShipChoice::~ShipChoice()
{
    delete ui;
}
