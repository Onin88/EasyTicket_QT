#include "client.h"


/*!
 * \brief Client::Client Constructeur client
 * \param name nom
 * \param prnm prnm
 * \param cpt cpt
 */
Client::Client(std::string name,std::string prnm,Compte cpt):Utilisateur(name,prnm,cpt)
{

}

/*void deposerUnTicket(){

}

void repondreDansTicket(Ticket t){

}

void historiqueTicket(list<Ticket> t){

}*/
Client::Client():Utilisateur(){}

/*!
 * \brief estClient
 * \return  true
 */
bool estClient(){
    return true;
}
