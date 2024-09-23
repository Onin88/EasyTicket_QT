#include "compte.h"



/*!
 * \brief Compte::Compte Constructeur de compte
 * \param ndc nom du compte
 * \param motdepasse mdp
 * \param rle Entier qui défini le type de droit du compte
 */
Compte::Compte(std::string ndc,std::string motdepasse,int rle)
{
    this->nomDeCompte=ndc;
    this->mdp=motdepasse;
    this->role=rle;
}


/*!
 * \brief Compte::getRole
 * \return le role
 */

int Compte::getRole(){
    return role;
}
