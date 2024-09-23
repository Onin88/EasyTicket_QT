#include "utilisateur.h"
#include "compte.h"

/*!
 * \brief Utilisateur::Utilisateur Constructeur d'utilisateur ( classe abstraite, à ne pas utiliser)
 * \param name nom
 * \param prnm prenom
 * \param cpt compte
 */

Utilisateur::Utilisateur(std::string name,std::string prnm,Compte cpt)
{
    this->nom=name;
    this->prenom=prnm;
    this->cpt=cpt;
}

Utilisateur::Utilisateur(){}

/*!
 * \brief Utilisateur::getName
 * \return nom
 */
string Utilisateur::getName(){
    return nom;
}

/*!
 * \brief Utilisateur::getPrnm
 * \return prenom
 */
string Utilisateur::getPrnm(){
    return prenom;
}

/*!
 * \brief Utilisateur::getCpt
 * \return cpt
 */
Compte Utilisateur::getCpt(){
    return cpt;
}
