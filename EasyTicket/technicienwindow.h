/** @brief Class technicienwindow.
 **
 **
 ** Interface graphique dédié aux techniciens
 **
 **
 ** @version 3b
 **
 **
 **/



#ifndef TECHNICIENWINDOW_H
#define TECHNICIENWINDOW_H

#include <QDialog>
#include "easyticket.h"

namespace Ui {
class TechnicienWindow;
}

class TechnicienWindow : public QDialog
{
    Q_OBJECT

public:
    explicit TechnicienWindow(EasyTicket easy, QWidget *parent = nullptr);
    ~TechnicienWindow();
    EasyTicket easyt;
    void setTitreTicket();
    QString texto;
    std::string msg;
private slots:
    void on_pushButton_clicked();

    void on_pushButton_5_clicked();

    void on_create_usr_2_clicked();

    void on_listView_clicked(const QModelIndex &index);

    void on_pushButton_4_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::TechnicienWindow *ui;
};

#endif // TECHNICIENWINDOW_H
