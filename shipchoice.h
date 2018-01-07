#ifndef SHIPCHOICE_H
#define SHIPCHOICE_H

#include <QApplication>
#include <QLabel>
#include <QMouseEvent>
#include <iostream>
#include "game.h"
using namespace std;

namespace Ui {
class ShipChoice;
}

class ShipChoice : public Game
{
    Q_OBJECT
    QLabel* ship = NULL;
    int startX, startY;

public:
    explicit ShipChoice(QWidget *parent = 0);
    ~ShipChoice();

private slots:
    void on_BoutonRetour_clicked();
    void on_BoutonSuivant_clicked();

private:
    Ui::ShipChoice *ui;
    bool isShipPositionOK(Square *first, Ship *ship);

protected:
    void mousePressEvent(QMouseEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;
    void mouseReleaseEvent(QMouseEvent *event) override;

};

#endif // SHIPCHOICE_H
