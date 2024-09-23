/** @brief Classe Compte
 **
 **
 ** Cette class est le compte d'un utilisateur. Contient sont role, et ses logs
 **
 **
 ** @version 3b
 **
 **
 **/

#ifndef COMPTE_H
#define COMPTE_H
#include <string>
#include <iostream>
using namespace std;


class Compte
{
public:
    /// @brief Constructeur
    Compte(std::string ndc,std::string motdepasse,int rle);
    ///@param nomDeCompte de l'utilisateur
    string nomDeCompte;
    ///@param mot de passe de l'utilisateur
    string mdp;
    ///@param role défini le rôle de l'utilisateur
    int role;
    ///@brief retourne role
    int getRole();
    Compte(){}
};


#endif // COMPTE_H
