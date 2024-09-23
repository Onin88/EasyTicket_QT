#include "easyticket.h"
#include "compte.h"
#include "utilisateur.h"
#include "technicien.h"
#include "admin.h"
#include <QSqlDatabase>
#include "bdd/Connection.hpp"
#include <QSqlQuery>
#include <QtSql>
#include <QVariant>
#include <QString>
#include <string>
#include "client.h"
#include "ingenieur.h"

EasyTicket::EasyTicket()
{
    this->gBdd=gestionnaireBdd();
}
/*!
 * \brief EasyTicket::authentification verifie si les log en paramètre correspondent a un compte enregistré dans easyticket
 * \param ndc est l'identifiant à rechercher
 * \param mdp est le mot de passe a rechercher
 * \return true si l'utilisateur a été trouvé, faux sinon
 */
bool EasyTicket:: authentification(string ndc,string mdp){
    for(std::list<Utilisateur>::iterator it = this->Utilisateurs.begin(); it !=this->Utilisateurs.end();++it){
        if(it->getCpt().nomDeCompte.compare(ndc)== 0 && it->getCpt().mdp.compare(mdp) == 0)
        {
            return true;
        }
    }
    return false;
}

/*!
 * \brief EasyTicket::addUser Ajoute un utilisateur a la liste d'easyticket. Créer un compte, et push l'utilisateur en fonction du role.
 * \param ndc nom du compte
 * \param mdp mot de passe
 * \param role 0 = ingenieur; 1 = client ; 2 = technicien ; 3 = ingenieur
 * \param prenom prenom de l'utilisateur
 * \param nom nom de l'utilisateur
 */
void EasyTicket::addUser(string ndc,string mdp,int role,string prenom,string nom){
    Compte cpt(ndc,mdp,role);
    Admin admn(prenom,nom,cpt);
    Ingenieur inge(prenom,nom,cpt);
    Client client(prenom,nom,cpt);
    Technicien tchn(prenom,nom,cpt);
    switch(role){
        case 0:

            this->Utilisateurs.push_back(admn);
            break;
        case 1:

            this->Utilisateurs.push_back(client);
            break;
        case 2:
            this->Utilisateurs.push_back(tchn);
            break;
        case 3:
            this->Utilisateurs.push_back(inge);
            break;



    default:
        break;

    }


}


void EasyTicket::createUsr(string ndc,string mdp,int role,string prenom,string nom){
    /**ASqlDatabase db("QSQLITE" , "../EasyTicket/bdd/easyticket.db");
    db.open();
    QSqlQuery query;
    query.prepare("insert into utilisateur (ndc,nom,prenon,mdp,role) values(:ndc,:nom,:prenom,:mdp,:role)");
    query.bindValue(":ndc",ndc);**/


}

