#include "technicien.h"
/*!
 * \brief Technicien::Technicien Constructeur
 * \param name Nom
 * \param prnm Prenom
 * \param cpt Compte
 */



Technicien::Technicien(std::string name,std::string prnm,Compte cpt):Utilisateur(name,prnm,cpt)
{

}

/*void cloreTicket(Ticket t){

}

void repondreTicket(Ticket t){

}

void transfererTicket(Ticket t, Utilisateur u){

}
*/


Technicien::Technicien(){}


/*!
 * \brief estTechnicien
 * \return  true
 */
bool estTechnicien(){
    return true;
}
