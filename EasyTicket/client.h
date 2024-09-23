/** @brief Classe Client
 **
 **
 ** Elle contient les droit/acces du client
 **
 **
 ** @version 3b
 **
 **
 **/


#ifndef CLIENT_H
#define CLIENT_H

#include "ticket.h"
#include "compte.h"
#include "utilisateur.h"



#include <algorithm>
#include <iostream>
#include <list>
using namespace std;

class Client : public Utilisateur
{
    ///@param ticketClient Tout les tickets du client
    list<Ticket> ticketClient;
public:
    Client(std::string name,std::string prnm,Compte cpt);
    Client();
    bool estClient();
};

#endif // CLIENT_H
