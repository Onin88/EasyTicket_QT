
/** @brief Class clientwindow.
 **
 **
 ** Interface graphique dédié au client
 **
 **
 ** @version 3b
 **
 **
 **/

#ifndef CLIENTWINDOW_H
#define CLIENTWINDOW_H

#include <QDialog>
#include "easyticket.h"

namespace Ui {
class ClientWindow;
}

class ClientWindow : public QDialog
{
    Q_OBJECT

public:
    explicit ClientWindow(EasyTicket easy, QWidget *parent = nullptr);
    ~ClientWindow();
    EasyTicket easyt;
    void setTitreTicketClient();
    QString texto;
    std::string msg;
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_3_clicked();

    void on_listView_clicked(const QModelIndex &index);

    void on_pushButton_4_clicked();

private:
    Ui::ClientWindow *ui;
};

#endif // CLIENTWINDOW_H
