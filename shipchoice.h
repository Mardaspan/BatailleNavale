#ifndef SHIPCHOICE_H
#define SHIPCHOICE_H

#include <QMainWindow>

namespace Ui {
class ShipChoice;
}

class ShipChoice : public QMainWindow
{
    Q_OBJECT

public:
    explicit ShipChoice(QWidget *parent = 0);
    ~ShipChoice();

private:
    Ui::ShipChoice *ui;
};

#endif // SHIPCHOICE_H
