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

/**
 * The ships positionning window
 *
 * @brief The ShipChoice class
 */
class ShipChoice : public Game
{
    Q_OBJECT
    QLabel* ship = NULL; // The ship which is being placed on the Board
    int startX, startY;

public:
    /**
     * Constructor
     *
     * @brief ShipChoice
     * @param parent
     */
    explicit ShipChoice(QWidget *parent = 0);
    /**
     * Destructor
     */
    ~ShipChoice();

private slots:
    /**
     * Return to the main window on click
     *
     * @brief on_BoutonRetour_clicked
     */
    void on_BoutonRetour_clicked();
    /**
     * Go the battle window on click
     * @brief on_BoutonSuivant_clicked
     */
    void on_BoutonSuivant_clicked();

private:
    Ui::ShipChoice *ui;
    /**
     * Check if the ship placement is correct
     *
     * @brief isShipPositionOK
     * @param first the first square where the ship is put
     * @param ship the kind of ship put
     * @return boolean
     */
    bool isShipPositionOK(Square *first, Ship *ship);

protected:
    void mousePressEvent(QMouseEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;
    void mouseReleaseEvent(QMouseEvent *event) override;
};

#endif // SHIPCHOICE_H
