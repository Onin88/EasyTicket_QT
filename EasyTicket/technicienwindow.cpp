#include "technicienwindow.h"
#include "ui_technicienwindow.h"
#include "mainwindow.h"
#include <QMessageBox>

TechnicienWindow::TechnicienWindow(EasyTicket et, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TechnicienWindow)
{
    this->easyt=et;
    ui->setupUi(this);
    setTitreTicket();

}

TechnicienWindow::~TechnicienWindow()
{
    delete ui;
}

void TechnicienWindow::on_pushButton_clicked()
{
    this->close();
}


void TechnicienWindow::on_pushButton_5_clicked()
{
    QMessageBox::about(this,"Help",
                       "Le bouton +Nouveau ticket vous permet de créer un ticket, en rentrant les infos demandées.\n"
                       "Le bouton répondre au ticket vous permet de répondre au ticket en ayant sélectionné auparavant"
                       "dans l'historique de vos tickets un ticket ouvert et qui attend une de vos réponse");
}

void TechnicienWindow::on_create_usr_2_clicked()
{
    this->hide();
    MainWindow* main = new MainWindow(this->easyt, this);
    main->show();
}



void TechnicienWindow::setTitreTicket(){
    QStringListModel *model = new QStringListModel(this);
    model->setStringList(this->easyt.gBdd.getTitreTechnicien());
    ui->listView->setModel(model);
}


void TechnicienWindow::on_listView_clicked(const QModelIndex &index)
{
    QModelIndex idx = ui->listView->currentIndex();
    QString itemText = idx.data(Qt::DisplayRole).toString();
    this->texto = itemText;

    std::string message = this->easyt.gBdd.getMessageTicket(itemText.toStdString());
    QString messageq = QString::fromStdString(message);
    this->msg = message;
    ui->textEdit->setText(messageq);
}


void TechnicienWindow::on_pushButton_4_clicked()
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



void TechnicienWindow::on_pushButton_2_clicked()
{
    std::string titres = this->texto.toStdString();
    std::string messageTicket = this->easyt.gBdd.getMessageTicket(this->texto.toStdString());
    QString messageIn = ui->textEdit_2->toPlainText();
    std::string messageIns = messageIn.toStdString();
    std::string message = messageTicket+"\n Technicien : "+messageIns;

    this->easyt.gBdd.updateMessage(message, titres);
}

