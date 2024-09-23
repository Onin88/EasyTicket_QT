#include "ticketwindow.h"
#include "ui_ticketwindow.h"
#include "ui_ClientWindow.h"
#include <QDateTime>
#include "clientwindow.h"

ticketWindow::ticketWindow(EasyTicket et, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ticketWindow)
{
    this->easyt=et;
    ui->setupUi(this);
}

ticketWindow::~ticketWindow()
{
    delete ui;
}

/*!
* \brief OnClick du bouton valider.
*/


void ticketWindow::on_pushButton_clicked()
{
    QString msg = ui->textEdit1->toPlainText();
    std::string msg2 = msg.toStdString();

    QString categorie = ui->categorieBox->currentText();
    std::string categorie2 = categorie.toStdString();


    QString titre = ui->titreTicket->text();
    std::string titre2 = titre.toStdString();

    QDate date = QDate::currentDate();
    QString dateString = date.toString();
    std::string dateS = dateString.toStdString();

    std::string etat = "ouvert";

    this->easyt.gBdd.insertTicket(msg2,titre2,categorie2,this->easyt.ndcActu, dateS, etat);
    this->easyt.gBdd.printTicket();

    this->hide();
    ClientWindow* clw = new ClientWindow(this->easyt, this);
    clw->show();

}

