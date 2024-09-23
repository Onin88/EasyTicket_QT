#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "clientwindow.h"
#include "technicienwindow.h"
#include "ingenieurwindow.h"
#include "adminwindow.h"
#include "creercompte.h"
#include <QMessageBox>
#include "gestionnairedialogue.h"


/*!
 * \brief MainWindow::MainWindow Fenetre principale d'identification
 * \param et EasyTicket
 * \param parent
 */

MainWindow::MainWindow(EasyTicket et,QWidget *parent):
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    this->easyt=et;
    ui->setupUi(this);
    connect(ui->pushButton,&QPushButton::clicked,this,&MainWindow::valider);
}

MainWindow::~MainWindow()
{
    delete ui;
}


/*!
 * \brief MainWindow::valider Gère les actions a faire lors du clique sur le bouton de connexion
 */
void MainWindow::valider()
{
    QString ndc = ui->IdentifiantEdit->text();
    QString mdp = ui->MotDePasseEdit->text();
    std::string ndc2=ndc.toStdString();
    std::string mdp2=mdp.toStdString();
    qDebug()<<ndc;
    qDebug()<<mdp;
    GestionnaireDialogue gd(ndc2,mdp2,this->easyt);
    //gd.envoieId(gd);
    if(gd.easyT.gBdd.readDB(ndc2,mdp2)==true){
            gd.easyT.ndcActu=ndc2;
            qDebug()<<"Authentification reussie !";
            this->hide();
            ClientWindow* clw = new ClientWindow(gd.easyT, this);
            TechnicienWindow* tw = new TechnicienWindow(gd.easyT, this);
            AdminWindow* aw = new AdminWindow(gd.easyT, this);
            IngenieurWindow* iw = new IngenieurWindow(gd.easyT, this);
            switch(gd.easyT.gBdd.getUser(ndc2,mdp2)){

            case 0:
                aw->show();
                break;

            case 1:
                clw->show();
                break;
            case 2:
                tw->show();
                break;
            case 3:
                iw->show();
                break;
            default:
                break;

            }
    }
    else {
                QMessageBox::about(this,"Erreur","Connexion refusée");
                    qDebug()<<"Marche pas ";
            }


}

void MainWindow::on_pushButton_2_clicked()
{
    this->hide();
    CreerCompte* cp = new CreerCompte(this->easyt, this);
    cp->show();
}

