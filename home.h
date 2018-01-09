#ifndef HOME_H
#define HOME_H

#include "game.h"

namespace Ui {
class Home;
}

/**
 * The main window
 *
 * @brief The Home class
 */
class Home : public Game
{
    Q_OBJECT

public:
    /**
     * Constructor
     *
     * @brief Home
     * @param parent
     */
    explicit Home(QWidget *parent = 0);
    /**
     * Destructor
     */
    ~Home();

private slots:
    /**
     * Start a new game on click
     *
     * @brief on_BoutonNP_clicked
     */
    void on_BoutonNP_clicked();
    /**
     * Quit the application on click
     *
     * @brief on_BoutonQ_clicked
     */
    void on_BoutonQ_clicked();
    /**
     * Show the game rules on click
     *
     * @brief on_BoutonR_clicked
     */
    void on_BoutonR_clicked();

private:
    Ui::Home *ui;
};

#endif // HOME_H
