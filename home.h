#ifndef HOME_H
#define HOME_H

#include <QDialog>

namespace Ui {
class Home;
}

class Home : public QDialog
{
    Q_OBJECT

public:
    explicit Home(QWidget *parent = 0);
    ~Home();

private slots:
    void on_BoutonNP_clicked();

    void on_BoutonQ_clicked();

    //void on_BoutonR_clicked();

private:
    Ui::Home *ui;
};

#endif // HOME_H
