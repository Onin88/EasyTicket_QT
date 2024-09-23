#include "clientwindow.h"
#include "ui_clientwindow.h"
#include "mainwindow.h"
#include "ticketwindow.h"
#include <QMessageBox>

ClientWindow::ClientWindow(EasyTicket et, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ClientWindow)
{
    this->easyt=et;
    ui->setupUi(this);
    setTitreTicketClient();
}

ClientWindow::~ClientWindow()
{
    delete ui;
}

void ClientWindow::on_pushButton_clicked()
{
    this->close();
}


void ClientWindow::on_pushButton_2_clicked()
{
    QMessageBox::about(this,"Help",
                       "Le bouton +Nouveau ticket vous permet de créer un ticket, en rentrant les infos demandées.\n"
                       "Le bouton répondre au ticket vous permet de répondre au ticket en ayant sélectionné auparavant"
                       "dans l'historique de vos tickets un ticket ouvert et qui attend une de vos réponse");
}


void ClientWindow::on_pushButton_5_clicked()
{
    this->hide();
    MainWindow* main = new MainWindow(this->easyt, this);
    main->show();
}


void ClientWindow::on_pushButton_3_clicked()
{
    this->hide();
    ticketWindow* tw = new ticketWindow(this->easyt, this);
    tw->show();

}

void ClientWindow::setTitreTicketClient(){
    QStringListModel *model = new QStringListModel(this);
    model->setStringList(this->easyt.gBdd.getTitreClient(this->easyt.ndcActu));
    ui->listView->setModel(model);
}

void ClientWindow::on_listView_clicked(const QModelIndex &index)
{
    QModelIndex idx = ui->listView->currentIndex();
    QString itemText = idx.data(Qt::DisplayRole).toString();
    this->texto = itemText;

    std::string message = this->easyt.gBdd.getMessageTicket(itemText.toStdString());
    QString messageq = QString::fromStdString(message);
    this->msg = message;
    ui->textEdit->setText(messageq);
}


void ClientWindow::on_pushButton_4_clicked()
{
    std::string titres = this->texto.toStdString();
    std::string messageTicket = this->easyt.gBdd.getMessageTicket(this->texto.toStdString());
    QString messageIn = ui->textEdit_2->toPlainText();
    std::string messageIns = messageIn.toStdString();
    std::string message = messageTicket+"\n Client : "+messageIns;

    this->easyt.gBdd.updateMessage(message, titres);
}

