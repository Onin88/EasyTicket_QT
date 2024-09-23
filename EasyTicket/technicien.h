/** @brief Class technicien.
 **
 **
 ** Elle contient les droit/acces du technicien
 **
 **
 ** @version 3b
 **
 **
 **/
#ifndef TECHNICIEN_H
#define TECHNICIEN_H
#include "ticket.h"
#include "compte.h"
#include "utilisateur.h"
#include <algorithm>
#include <iostream>
#include <list>
using namespace std;


class Technicien : public Utilisateur
{
    ///@param domaine domaine de compétence du technicien
    string domaine;
    ///@param ticketTechnicien ticket attribué au technicien

    list<Ticket> ticketTechnicien;

public:
    Technicien(std::string name,std::string prnm,Compte cpt);
    Technicien();
    bool estTechnicien();
};

#endif // TECHNICIEN_H
