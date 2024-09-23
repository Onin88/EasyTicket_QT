/** @brief Classe administrateur.
 **
 **
 ** Elle contient les droit/acces de l'admin
 **
 **
 ** @version 3b
 **
 **
 **/
#ifndef ADMIN_H
#define ADMIN_H
#include "ticket.h"
#include "utilisateur.h"
#include <algorithm>
#include <iostream>
#include <list>
using namespace std;

class Admin : public Utilisateur
{
    ///@param ticketAdmin de tout les tickets. L'admin accèdes à tout les ticket d'easyTicket
    list<Ticket> ticketAdmin;

public:
    ///@brief Constructeur
    Admin(std::string name,std::string prnm,Compte cpt);
    Admin();
    //void consulterStat();
    bool estAdmin();
};

#endif // ADMIN_H
