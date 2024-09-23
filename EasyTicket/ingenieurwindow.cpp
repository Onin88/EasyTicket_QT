#include "ingenieurwindow.h"
#include "mainwindow.h"
#include "ui_ingenieurwindow.h"
#include <QMessageBox>

IngenieurWindow::IngenieurWindow(EasyTicket et, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::IngenieurWindow)
{
    this->easyt=et;
    ui->setupUi(this);
    setTitreTicketInge();
}

IngenieurWindow::~IngenieurWindow()
{
    delete ui;
}

void IngenieurWindow::on_pushButton_5_clicked()
{
    this->close();
}


void IngenieurWindow::on_pushButton_4_clicked()
{
    QMessageBox::about(this,"Help",
                       "Le bouton répondre au ticket vous permet de répondre au ticket en ayant sélectionné auparavant"
                       "dans l'historique de vos tickets un ticket ouvert et qui attend une de vos réponse"
                       "\n Le bouton clore vous permet de clore un ticket résolu, préalablement sélectionné dans l'activité de vos tickets");
}

void IngenieurWindow::on_create_usr_2_clicked()
{
    this->hide();
    MainWindow* main = new MainWindow(this->easyt, this);
    main->show();
}

void IngenieurWindow::setTitreTicketInge(){
    QStringListModel *model = new QStringListModel(this);
    model->setStringList(this->easyt.gBdd.getTitreIngenieur());
    ui->listView->setModel(model);
}


void IngenieurWindow::on_listView_clicked(const QModelIndex &index)
{
    QModelIndex idx = ui->listView->currentIndex();
    QString itemText = idx.data(Qt::DisplayRole).toString();

    this->texto = itemText;

    std::string message = this->easyt.gBdd.getMessageTicket(itemText.toStdString());
    QString messageq = QString::fromStdString(message);
    this->msg = message;
    ui->textEdit->setText(messageq);
}


void IngenieurWindow::on_pushButton_3_clicked()
{
    std::string textos = this->texto.toStdString();
    this->easyt.gBdd.setMessageClos(textos);

    QDate date = QDate::currentDate();
    QString dateString = date.toString();
    std::string dateS = dateString.toStdString();
    this->msg = msg + "\n date fermeture : " + dateS;
    QString msgq = QString::fromStdString(msg);
    ui->textEdit->setText(msgq);
}


void IngenieurWindow::on_pushButton_6_clicked()
{
    std::string titres = this->texto.toStdString();
    std::string messageTicket = this->easyt.gBdd.getMessageTicket(this->texto.toStdString());
    QString messageIn = ui->textEdit_2->toPlainText();
    std::string messageIns = messageIn.toStdString();
    std::string message = messageTicket+"\n Ingenieur : "+messageIns;

    this->easyt.gBdd.updateMessage(message, titres);
}

