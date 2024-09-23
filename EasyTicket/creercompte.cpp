#include "creercompte.h"
#include "mainwindow.h"
#include "easyticket.h"
#include "ui_creercompte.h"
#include <cstring>
#include <QMessageBox>
#include <QSqlDatabase>
#include "bdd/Connection.hpp"
#include <QSqlQuery>
#include <QtSql>
#include <QVariant>
#include <QString>
#include <string>


CreerCompte::CreerCompte(EasyTicket et, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CreerCompte)
{
    this->easyt = et;
    ui->setupUi(this);
}

CreerCompte::~CreerCompte()
{
    delete ui;
}

void CreerCompte::on_pushButton_2_clicked()
{
    this->hide();
    MainWindow* main = new MainWindow(this->easyt, this);
    main->show();
}


void CreerCompte::on_pushButton_clicked()
{
    QString mdp = ui->MdpLine->text();
    std::string mdp2 = mdp.toStdString();

    QString mdpConf = ui->ConfirmezLine->text();
    std::string mdpConf2 = mdpConf.toStdString();

    QString id = ui->IdLine->text();
    std::string id2 = id.toStdString();

    QString prenom = ui->PrenomLine->text();
    std::string prenom2 = prenom.toStdString();

    QString nom = ui->NomLine->text();
    std::string nom2 = nom.toStdString();

    QString ndc = ui->ndcLine->text();
    std::string ndc2 = ndc.toStdString();

    std::string role = "1";

    int compare = mdp2.compare(mdpConf2);

    if(compare == 0 && !ndc.isEmpty() && !mdp.isEmpty() && !mdpConf.isEmpty() && !prenom.isEmpty() && !id.isEmpty()){
        this->easyt.gBdd.insertBdd(id2,ndc2,nom2,prenom2,mdp2,role);
        /**ASqlDatabase db("QSQLITE" , "../EasyTicket/bdd/easyticket.db");
        db.open();
        if(db.isOpen()){
            std::string requete = "INSERT INTO utilisateur (id, ndc, nom, prenom, mot_de_passe, role) VALUES ('"+id2+"', '"+ndc2+"', '"+nom2+"', '"+prenom2+"', '"+mdp2+"', '1');";
            QSqlQuery querry(QString::fromStdString(requete), db);
            qDebug("C'est ajouté");
        }else{
        qDebug("Erreur insert valeur utilisateur client");
        }
        db.close();**/
        this->hide();
        MainWindow* main = new MainWindow(this->easyt, this);
        main->show();

    }else if(compare != 0){
        QMessageBox::about(this,"MOT DE PASSE COMPARAISON","Vos mots de passes ne correspondent pas !");
    }else if(ndc.isEmpty()){
        QMessageBox::about(this,"Nom De Compte","Votre champ nom de compte n'a pas été rempli !");
    }else if(mdp.isEmpty()){
        QMessageBox::about(this,"MOT DE PASSE","Votre champ mot de passe n'a pas été rempli !");
    }else if(mdpConf.isEmpty()){
        QMessageBox::about(this,"MOT DE PASSE CONFIRMER","Votre champ mot de passe CONFIRMEZ n'a pas été rempli !");
    }else if(prenom.isEmpty()){
        QMessageBox::about(this,"PRENOM","Votre champ prénom n'a pas été rempli !");
    }else if(nom.isEmpty()){
        QMessageBox::about(this,"NOM","Votre champ nom n'a pas été rempli !");
    }
}

