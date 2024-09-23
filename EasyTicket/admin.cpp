#include "admin.h"
/*!
 * \brief Admin::Admin Constructeur admin
 * \param name nom
 * \param prnm prenom
 * \param cpt compte
 */

Admin::Admin(std::string name,std::string prnm,Compte cpt):Utilisateur(name,prnm,cpt)
{
}

/*void consulterStat(){

}*/


Admin::Admin(){}
/*!
 * \brief estAdmin
 * \return true
 */
bool estAdmin(){
    return true;
}
