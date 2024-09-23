/** @brief Classe Ingenieur
 **
 **
 ** Elle contient les droit/acces de l'ingénieur
 **
 **
 **
 ** @version 3b
 **
 **
 **/


#ifndef INGENIEUR_H
#define INGENIEUR_H

#include "ticket.h"
#include "utilisateur.h"


#include <algorithm>
#include <iostream>
#include <list>
using namespace std;


class Ingenieur :public Utilisateur
{
    ///@param ticketIngenieur sont les tickets attribué à l'ingenieur
    list<Ticket> ticketIngenieur;

public:
    Ingenieur();
    Ingenieur(std::string name,std::string prnm,Compte cpt);
    ///@brief retourne vrai
    bool estIngenieur();
};

#endif // INGENIEUR_H
