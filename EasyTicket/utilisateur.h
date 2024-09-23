/** @brief Classe Utilisateur.
 **
 **
 ** Classe abstraite dont tout les utilisateurs hérite.
 **
 **
 ** @version 3b
 **
 **
 **/


#ifndef UTILISATEUR_H
#define UTILISATEUR_H
#include "compte.h"
#include <string>
#include <iostream>
using namespace std;


class Utilisateur
{
private:
    int id;
public:
    Utilisateur(std::string name,std::string prnm,Compte cpt);
    Utilisateur();
virtual
    ///@brief retourne nom
    string getName();
    ///@brief retourne prenom
    string getPrnm();
    ///@brief retourne cpt
    Compte getCpt();

protected :
    string nom;
    string prenom;
    Compte cpt;
};


#endif // UTILISATEUR_H
