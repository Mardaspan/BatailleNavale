#ifndef SHIPCHOICE_H
#define SHIPCHOICE_H

#include <QDialog>
#include <QApplication>
#include <QMouseEvent>
#include <QLabel>
#include "game.h"

namespace Ui {
class ShipChoice;
}

class ShipChoice : public QDialog
{
    Q_OBJECT
    Game game;
    QLabel* ship;

public:
    explicit ShipChoice(QWidget *parent = 0);
    ~ShipChoice();

private slots:
    void on_BoutonRetour_clicked();

private:
    Ui::ShipChoice *ui;

protected:
    void mousePressEvent(QMouseEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;
    void mouseReleaseEvent(QMouseEvent *event) override;

};

#endif // SHIPCHOICE_H
