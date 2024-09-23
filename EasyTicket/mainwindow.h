
/** @brief Class mainwindow.
 **
 **
 ** Interface graphique de notre fenêtre principale
 **
 **
 ** @version 3b
 **
 **
 **/

#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "easyticket.h"
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(EasyTicket easy,QWidget *parent = nullptr);
    ~MainWindow();
    ///@param easyt easyticket
        EasyTicket easyt;
    ///@brief valider est la fonction appelé lors du clique sur le bouton valider.
    void valider();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
