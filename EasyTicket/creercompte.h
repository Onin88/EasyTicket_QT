#ifndef CREERCOMPTE_H
#define CREERCOMPTE_H

#include <QDialog>
#include "easyticket.h"

namespace Ui {
class CreerCompte;
}

class CreerCompte : public QDialog
{
    Q_OBJECT

public:
    explicit CreerCompte(EasyTicket et, QWidget *parent = nullptr);
    ~CreerCompte();
    EasyTicket easyt;

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::CreerCompte *ui;
};

#endif // CREERCOMPTE_H
