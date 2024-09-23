#include "adminwindow.h"
#include "ui_adminwindow.h"
#include "mainwindow.h"
#include "creercompteadmin.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

/*!
 * \brief AdminWindow::AdminWindow Gère l'interface Admin
 * \param et Easy Ticket
 * \param parent
 */
AdminWindow::AdminWindow(EasyTicket et,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdminWindow)
{
    this->easyt=et;
    ui->setupUi(this);
    connect(ui->create_usr,&QPushButton::clicked,this,&AdminWindow::createUsr);
    setTitreTicketAdmin();
}

AdminWindow::~AdminWindow()
{
    delete ui;
}
/*!
 * \brief AdminWindow::createUsr creer un utilisateur ( non fonctionnel )
 */
void AdminWindow::createUsr(){


}


void AdminWindow::on_pushButton_clicked()
{
    this->close();
}


void AdminWindow::on_pushButton_2_clicked()
{
    QMessageBox::about(this, "Help",
                       "Le bouton créer utilisateur permet de créer un utilisateur en rentrant les attributs de celui-ci\n"
                       "Le bloc du milieu permet d'observer les activités des tickets");
}


void AdminWindow::on_create_usr_clicked()
{
    this->hide();
    CreerCompteAdmin* cpa = new CreerCompteAdmin(this->easyt);
    cpa->show();
}


void AdminWindow::on_create_usr_2_clicked()
{
    this->hide();
    MainWindow* main = new MainWindow(this->easyt, this);
    main->show();
}

void AdminWindow::setTitreTicketAdmin(){
    QStringListModel *model = new QStringListModel(this);
    model->setStringList(this->easyt.gBdd.getTitreAdmin());
    ui->listView->setModel(model);
}


void AdminWindow::on_listView_clicked(const QModelIndex &index)
{
    QModelIndex idx = ui->listView->currentIndex();
    QString itemText = idx.data(Qt::DisplayRole).toString();
    this->texto = itemText;

    std::string message = this->easyt.gBdd.getMessageTicket(itemText.toStdString());
    QString messageq = QString::fromStdString(message);
    this->msg = message;
    ui->textEdit->setText(messageq);
}

void AdminWindow::on_pushButton_3_clicked()
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

