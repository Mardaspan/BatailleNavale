#ifndef BATTLESCREEN_H
#define BATTLESCREEN_H

#include <QMouseEvent>
#include <QLabel>
#include "game.h"

namespace Ui {
class BattleScreen;
}

/**
 * The Battle window
 *
 * @brief The BattleScreen class
 */
class BattleScreen : public Game
{
    Q_OBJECT
    bool pTurn; // Defined if it's the player turn

public:
    /**
     * Constructor
     *
     * @brief BattleScreen
     * @param parent
     */
    explicit BattleScreen(QWidget *parent = 0);
    /**
     * Destructor
     */
    ~BattleScreen();
    /**
     * Initialise the game
     *
     * @brief initialisation
     * @param player Board get from ShipChoice window
     */
    void initialisation(Board player);
    /**
     * Simulate the player turn
     *
     * @brief playerTurn
     */
    void playerTurn();
    /**
     * Simulate the ennemy turn
     *
     * @brief computerTurn
     */
    void computerTurn();

private slots:
    /**
     * Quit the application on click
     *
     * @brief on_BoutonQuitter_clicked
     */
    void on_BoutonQuitter_clicked();
    /**
     * Start a new game on click
     *
     * @brief on_npButton_clicked
     */
    void on_npButton_clicked();

private:
    Ui::BattleScreen *ui;
    /**
     * Check the game to verify if an ennemy's ship need to be seen by the player
     *
     * @brief checkIfShowsEnnemy
     */
    void checkIfShowsEnnemy();
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
    /**
     * Actions after the player choose where to shoot
     *
     * @brief mousePressEvent
     * @param event
     */
    void mousePressEvent(QMouseEvent *event) override;
};

#endif // BATTLESCREEN_H
