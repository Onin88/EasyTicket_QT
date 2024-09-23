
/** @brief Class adminwindow.
 **
 **
 ** Interface graphique dédié à l'admin
 **
 **
 ** @version 3b
 **
 **
 **/


#ifndef ADMINWINDOW_H
#define ADMINWINDOW_H

#include <QDialog>
#include "easyticket.h"
namespace Ui {
class AdminWindow;
}

class AdminWindow : public QDialog
{
    Q_OBJECT

public:
    explicit AdminWindow(EasyTicket et,QWidget *parent = nullptr);
    ~AdminWindow();
    ///@brief fonction pour creer un user.
    void createUsr();
    EasyTicket easyt;
    void setTitreTicketAdmin();
    QString texto;
    std::string msg;
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_create_usr_clicked();

    void on_create_usr_2_clicked();

    void on_listView_clicked(const QModelIndex &index);

    void on_pushButton_3_clicked();

private:
    Ui::AdminWindow *ui;

};

#endif // ADMINWINDOW_H
