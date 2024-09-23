/** @brief Classe EasyTicket
 **
 **
 ** EasyTicket est la classe mere qui connait les utilisateurs ainsi que tout les ticket.
 **
 **
 ** @version 3b
 **
 **
 **/
#ifndef EASYTICKET_H
#define EASYTICKET_H

#include "ticket.h"
#include "utilisateur.h"
#include "gestionnairebdd.h"
#include <algorithm>
#include <iostream>
#include <list>

using namespace std;

class EasyTicket
{   ///@param allTicket tout les ticket créé
    list<Ticket> allTicket;
    ///@param Utilisateurs tout les utilisateurs
    list<Utilisateur> Utilisateurs;
public:
    ///@brief ajoute un utilisateur à la liste Utilisateurs
    void addUser(string ndc,string mdp,int role,string prenom,string nom);
    EasyTicket();
    ///@brief authentification retourne vrai si les logs correspondent à un client de Utilisateurs
    bool authentification(string ndc,string mdp);
    void createUsr(string ndc,string mdp,int role,string prenom,string nom);
    ///@param
    gestionnaireBdd gBdd;
    string ndcActu;
};

#endif // EASYTICKET_H

