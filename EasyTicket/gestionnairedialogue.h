/** @brief Classe GestionnaireDialogue
 **
 **
 ** GestionnaireDialogue est la classe qui gère l'interface de connexion
 ** Elle permet de transmettre à EasyTicket les id rentré dans l'interface principale
 **
 **
 ** @version 3b
 **
 **
 **/


#ifndef GESTIONNAIREDIALOGUE_H
#define GESTIONNAIREDIALOGUE_H
#include "easyticket.h"


class GestionnaireDialogue
{
public:
    ///@param nomDeCompte log rentré dans le champ login
    string nomDeCompte;
    ///@param mdp mot de passe rentré dans le champ login
    string mdp;
    ///@param EasyTicket à qui il dois transmettre les infos
    EasyTicket easyT;
    GestionnaireDialogue(string ndc,string mdp,EasyTicket et);
    ///@param Transmet les infos à EasyTicket
    //void envoieId(GestionnaireDialogue gd);

private:

};

#endif // GESTIONNAIREDIALOGUE_H
