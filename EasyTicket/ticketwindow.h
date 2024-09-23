#ifndef TICKETWINDOW_H
#define TICKETWINDOW_H w

#include <QDialog>
#include "easyticket.h"
#include "gestionnairedialogue.h"


namespace Ui {
class ticketWindow;
}

class ticketWindow : public QDialog
{
    Q_OBJECT

public:
    explicit ticketWindow(EasyTicket et, QWidget *parent = nullptr);
    ~ticketWindow();
    EasyTicket easyt;
private slots:
    void on_pushButton_clicked();

private:
    Ui::ticketWindow *ui;
};

#endif // TICKETWINDOW_H
