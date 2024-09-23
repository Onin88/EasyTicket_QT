#include "creercompteadmin.h"
#include "ui_creercompteadmin.h"
#include "easyticket.h"
#include <cstring>
#include <QMessageBox>
#include <QSqlDatabase>
#include "bdd/Connection.hpp"
#include <QSqlQuery>
#include <QtSql>
#include "adminwindow.h"
#include <QVariant>
#include <QString>
#include <string>

CreerCompteAdmin::CreerCompteAdmin(EasyTicket et, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CreerCompteAdmin)
{
    this->easyt=et;
    ui->setupUi(this);
}

CreerCompteAdmin::~CreerCompteAdmin()
{
    delete ui;
}


/*!
 * \brief CreerCompteAdmin::on_pushButton_clicked
 *        fonction on_click qui créé un Technicien/ingenieur
 *        en fonction du choix de l'admin avec les champs
 *        rentrés précedemment.
 */
void CreerCompteAdmin::on_pushButton_clicked()
{
    //Mot de passe
    QString mdp = ui->mdpline->text();
    std::string mdp2 = mdp.toStdString();

    //Mot de passe CONFIRMEZ
    QString mdpConf = ui->confirmezline->text();
    std::string mdpConf2 = mdpConf.toStdString();

    //Identifiant
    QString id = ui->idline->text();
    std::string id2 = id.toStdString();

    //Prenom
    QString prenom = ui->prenomline->text();
    std::string prenom2 = prenom.toStdString();

    //Nom
    QString nom = ui->nomline->text();
    std::string nom2 = nom.toStdString();

    //Nom De Compte
    QString ndc = ui->ndcline->text();
    std::string ndc2 = ndc.toStdString();

    //string contenant la valeur du rôle en fonction du choix de la checkbox
    std::string check;

    if(ui->checkTech->isChecked() && ui->checkIng->isChecked()){//Si les 2 sont séléctionnés
        QMessageBox::about(this,"CHECK"," Vous venez de sélectionner Ingénieur et Technicien en même temps !\n"
                                        "Ingénieur sera séléctionné automatiquement.");
        ui->checkTech->setCheckable(false);//Décoche la checkBox de Technicien
    }else if(ui->checkTech->isChecked()){ //Si Technicien est coché
        check = "2"; //Technicien
    }else if(ui->checkIng->isChecked()){ //Si Ingenieur est coché
        check = "3";
    }

    int compare = mdp2.compare(mdpConf2); //Comparaison deux 2 mdp, voir si ce sont les mêmes

    if(compare == 0 && !ndc.isEmpty() && !mdp.isEmpty() && !mdpConf.isEmpty() && !prenom.isEmpty() && !id.isEmpty() && (!ui->checkTech->isChecked() || !ui->checkIng->isChecked())){
        /*ASqlDatabase db("QSQLITE" , "../EasyTicket/bdd/easyticket.db");
        db.open();
        if(db.isOpen()){
            std::string requete = "INSERT INTO utilisateur (id, ndc, nom, prenom, mot_de_passe, role) VALUES ('"+id2+"', '"+ndc2+"', '"+nom2+"', '"+prenom2+"', '"+mdp2+"', '"+check+"');";
            QSqlQuery querry(QString::fromStdString(requete), db);
            qDebug("C'est ajouté");
        }else{
        qDebug("Erreur insert valeur utilisateur client");
        }
        db.close();*/
        this->easyt.gBdd.insertBdd(id2,ndc2,nom2,prenom2,mdp2,check);
        this->hide();
        AdminWindow* aw = new AdminWindow(this->easyt, this);
        aw->show();
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


void CreerCompteAdmin::on_pushButton_2_clicked()
{
    this->hide();
    AdminWindow* aw = new AdminWindow(this->easyt, this);
    aw->show();
}

