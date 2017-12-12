#ifndef BATTLESCREEN_H
#define BATTLESCREEN_H

#include <QDialog>

namespace Ui {
class BattleScreen;
}

class BattleScreen : public QDialog
{
    Q_OBJECT

public:
    explicit BattleScreen(QWidget *parent = 0);
    ~BattleScreen();

private slots:
    void on_pushButton_clicked();

    void on_BoutonQuitter_clicked();

private:
    Ui::BattleScreen *ui;
};

#endif // BATTLESCREEN_H
