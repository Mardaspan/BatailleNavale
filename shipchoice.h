#ifndef SHIPCHOICE_H
#define SHIPCHOICE_H

#include <QDialog>
#include <QApplication>
#include <QPushButton>

namespace Ui {
class ShipChoice;
}

class ShipChoice : public QDialog
{
    Q_OBJECT

public:
    explicit ShipChoice(QWidget *parent = 0);
    ~ShipChoice();

private slots:
    void on_BoutonRetour_clicked();

private:
    Ui::ShipChoice *ui;

};

#endif // SHIPCHOICE_H
