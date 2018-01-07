#ifndef BATTLESCREEN_H
#define BATTLESCREEN_H

#include <QMouseEvent>
#include <QLabel>
#include "game.h"

namespace Ui {
class BattleScreen;
}

class BattleScreen : public Game
{
    Q_OBJECT
    bool pTurn; // Defined if it's the player turn

public:
    explicit BattleScreen(QWidget *parent = 0);
    ~BattleScreen();
    void initialisation(Board player);
    void playerTurn();
    void computerTurn();

private slots:
    void on_BoutonQuitter_clicked();

private:
    Ui::BattleScreen *ui;
    bool isShipPositionOK(Square *first, Ship *ship);

protected:
    void mousePressEvent(QMouseEvent *event) override;
};

#endif // BATTLESCREEN_H
