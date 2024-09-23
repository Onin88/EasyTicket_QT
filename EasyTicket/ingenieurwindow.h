
/** @brief Class ingenieurwindow.
 **
 **
 ** Interface graphique dédié à l'ingé
 **
 **
 ** @version 3b
 **
 **
 **/

#ifndef INGENIEURWINDOW_H
#define INGENIEURWINDOW_H

#include <QDialog>
#include "easyticket.h"

namespace Ui {
class IngenieurWindow;
}

class IngenieurWindow : public QDialog
{
    Q_OBJECT

public:
    explicit IngenieurWindow(EasyTicket easy, QWidget *parent = nullptr);
    ~IngenieurWindow();
    EasyTicket easyt;
    void setTitreTicketInge();
    QString texto;
    std::string msg;
private slots:
    void on_pushButton_5_clicked();

    void on_pushButton_4_clicked();

    void on_create_usr_2_clicked();

    void on_listView_clicked(const QModelIndex &index);

    void on_pushButton_3_clicked();

    void on_pushButton_6_clicked();

private:
    Ui::IngenieurWindow *ui;
};

#endif // INGENIEURWINDOW_H
