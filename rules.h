#ifndef RULES_H
#define RULES_H

#include <QDialog>

namespace Ui {
class Rules;
}

class Rules : public QDialog
{
    Q_OBJECT

public:
    explicit Rules(QWidget *parent = 0);
    ~Rules();

private slots:
    void on_pushButton_clicked();

    void on_boutonAccueil_clicked();

    void on_boutonJeu_clicked();

private:
    Ui::Rules *ui;
};

#endif // RULES_H
