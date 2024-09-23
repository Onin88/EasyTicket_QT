#include "gestionnairedialogue.h"

/*!
 * \brief GestionnaireDialogue::GestionnaireDialogue Constructeur
 * \param ndc nom de compte
 * \param mdp mdp
 * \param easy easy ticket
 */

GestionnaireDialogue::GestionnaireDialogue(string ndc,string mdp,EasyTicket easy)
{
    this->mdp=mdp;
    this->nomDeCompte=ndc;
    this->easyT=easy;
}

/*!
 * \brief GestionnaireDialogue::envoieId Transmet les logins à easyticket
 * \param gd Gestionnaire de dialogue
 */


