#ifndef BATTLESCREEN_H
#define BATTLESCREEN_H

#include "game.h"

namespace Ui {
class BattleScreen;
}

class BattleScreen : public Game
{
    Q_OBJECT

public:
    explicit BattleScreen(QWidget *parent = 0);
    ~BattleScreen();
    void initialisation(Board player);

private slots:
    void on_BoutonQuitter_clicked();

private:
    Ui::BattleScreen *ui;
    bool isShipPositionOK(Square *first, Ship *ship);
};

#endif // BATTLESCREEN_H
