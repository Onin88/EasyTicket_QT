#ifndef CREERCOMPTEADMIN_H
#define CREERCOMPTEADMIN_H

#include <QDialog>
#include "easyticket.h"

namespace Ui {
class CreerCompteAdmin;
}

class CreerCompteAdmin : public QDialog
{
    Q_OBJECT

public:
    explicit CreerCompteAdmin(EasyTicket et, QWidget *parent = nullptr);
    ~CreerCompteAdmin();
    EasyTicket easyt;
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::CreerCompteAdmin *ui;
};

#endif // CREERCOMPTEADMIN_H
