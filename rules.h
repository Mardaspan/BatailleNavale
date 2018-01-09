#ifndef RULES_H
#define RULES_H

#include <QDialog>

namespace Ui {
class Rules;
}
/**
 * This is the class that displays the game description page.
 * @brief The Rules class
 */
class Rules : public QDialog
{
    Q_OBJECT

public:

    /**
     * Constructor
     * @brief Rules
     * @param parent
     */
    explicit Rules(QWidget *parent = 0);

    /**
      *Destructor
      */
    ~Rules();

private slots:

    /**
     * Button which displays the homepage
     * @brief on_boutonAccueil_clicked
     */
    void on_boutonAccueil_clicked();

    /**
     * Button which displays the game page
     * @brief on_boutonJeu_clicked
     */
    void on_boutonJeu_clicked();

private:
    Ui::Rules *ui;
};

#endif // RULES_H
