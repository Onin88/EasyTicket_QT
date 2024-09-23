#include "ingenieur.h"



/*!
 * \brief Ingenieur::Ingenieur Constructeur
 * \param name nom
 * \param prnm prenom
 * \param cpt compte
 */
Ingenieur::Ingenieur(std::string name,std::string prnm,Compte cpt):Utilisateur(name,prnm,cpt)
{

}

Ingenieur::Ingenieur(){}

/*void cloreTicket(Ticket t){

}

void repondreTicket(Ticket t){

}
*/

/*!
 * \brief estIngenieur
 * \return true
 */
bool estIngenieur(){
    return true;
}
