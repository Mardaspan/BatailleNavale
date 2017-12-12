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

private:
    Ui::BattleScreen *ui;
};

#endif // BATTLESCREEN_H
