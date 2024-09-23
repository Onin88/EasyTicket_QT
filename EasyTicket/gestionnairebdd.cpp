#include "gestionnairebdd.h"

gestionnaireBdd::gestionnaireBdd()

{
    this->db.open();
}

/*!
 * \brief EasyTicket::readDB check la bdd
 * \param mdp mot de passe
 */
bool gestionnaireBdd::readDB(string ndc,string mdp){
    bool res = false;
    //ASqlDatabase db("QSQLITE" , "../EasyTicket/bdd/easyticket.db");
    //this->db.open();
    if(this->db.isOpen()){
        QSqlQuery querry("SELECT * FROM utilisateur",this->db);
        QSqlRecord rec = querry.record();
        while(querry.next()){
            qDebug() << QString::fromStdString(querry.value(rec.indexOf("ndc")).toString().toStdString())
                     << QString::fromStdString(querry.value(rec.indexOf("nom")).toString().toStdString())
                     << QString::fromStdString(querry.value(rec.indexOf("prenom")).toString().toStdString())
                     << QString::fromStdString(querry.value(rec.indexOf("mot_de_passe")).toString().toStdString())
                     << QString::fromStdString(querry.value(rec.indexOf("role")).toString().toStdString())
                     << QString::fromStdString(querry.value(rec.indexOf("id")).toString().toStdString());
            if(querry.value(rec.indexOf("ndc")).toString().toStdString().compare(ndc)==0 && querry.value(rec.indexOf("mot_de_passe")).toString().toStdString().compare(mdp)==0){
                res=true;
            }

        }
        querry.clear();
    }else{
        qDebug("Erreur");
    }
    //this->db.close();
    return res;
}

/*!
* \brief EasyTicket::getUser get role de l'user
* \param ndc nom du compte
* \param mdp mot de passe
*/

int gestionnaireBdd::getUser(string ndc,string mdp){
    //ASqlDatabase db("QSQLITE" , "../EasyTicket/bdd/easyticket.db");
    int res=666;
    //this->db.open();
    if(this->db.isOpen()){
        QSqlQuery querry("SELECT * FROM utilisateur",this->db);
        QSqlRecord rec = querry.record();
        while(querry.next()){
            if(querry.value(rec.indexOf("ndc")).toString().toStdString().compare(ndc)==0 && querry.value(rec.indexOf("mot_de_passe")).toString().toStdString().compare(mdp)==0){
                res=atoi(querry.value(rec.indexOf("role")).toString().toStdString().c_str());
            }

        }
        querry.clear();
    }else{
        qDebug("Erreur getUser");
    }
    //this->db.close();
    return res;
}


/*!
* \brief EasyTicket::insertBdd insert l'utilisateur dans la bdd
* \param ndc2 nom du compte
* \param mdp2 mot de passe
* \param id2 identifiant
* \param role role
*\param nom2 nom
* \param prenom2 prenom


*/


void gestionnaireBdd::insertBdd(string id2, string ndc2, string nom2,string prenom2, string mdp2, string role){
        if(this->db.isOpen()){
            std::string requete = "INSERT INTO utilisateur (id, ndc, nom, prenom, mot_de_passe, role) VALUES ('"+id2+"', '"+ndc2+"', '"+nom2+"', '"+prenom2+"', '"+mdp2+"', '"+role+"');";
            QSqlQuery querry(QString::fromStdString(requete), this->db);
            qDebug("C'est ajouté");
        }else{
        qDebug("Erreur insert valeur utilisateur client");
        }
        //this->db.close();
    }

/*!
* \brief EasyTicket::insertTicket
* \param ndc nom du compte
* \param title titre du ticket
* \param msg message
* \param categorie categorie
*/


void gestionnaireBdd::insertTicket(string msg, string title, string categorie, string ndc, string date, string etat){
    if(this->db.isOpen()){
        std::string requete = "INSERT INTO Ticket (titre, categorie, message, ndc, date, etat) VALUES ('"+title+"', '"+categorie+"', '"+msg+"', '"+ndc+"', '"+date+"', '"+etat+"');";
        QSqlQuery querry(QString::fromStdString(requete), this->db);
        qDebug("C'est ajouté");
    }else{
    qDebug("Erreur insert valeur utilisateur client");
    }
}

/*!
* \brief EasyTicket::printTicket print la bdd des tickets
*/

void gestionnaireBdd::printTicket(){
    if(this->db.isOpen()){
        QSqlQuery querry("SELECT * FROM Ticket",this->db);
        QSqlRecord rec = querry.record();
        while(querry.next()){
            qDebug() << QString::fromStdString(querry.value(rec.indexOf("titre")).toString().toStdString())
                     << QString::fromStdString(querry.value(rec.indexOf("categorie")).toString().toStdString())
                     << QString::fromStdString(querry.value(rec.indexOf("message")).toString().toStdString())
                     << QString::fromStdString(querry.value(rec.indexOf("ndc")).toString().toStdString())
                     << QString::fromStdString(querry.value(rec.indexOf("date")).toString().toStdString())
                     << QString::fromStdString(querry.value(rec.indexOf("etat")).toString().toStdString());

        }
        querry.clear();
    }else{
        qDebug("Erreur");
    }
}

string gestionnaireBdd::getMessageTicket(string titre){
    std::string text;
    if(this->db.isOpen()){
        QSqlQuery querry("SELECT * FROM Ticket", this->db);
        QSqlRecord rec = querry.record();
        while(querry.next()){
            if(querry.value(rec.indexOf("titre")).toString().toStdString().compare(titre)==0){
                std::string etat = querry.value(rec.indexOf("etat")).toString().toStdString().c_str();
                std::string date = querry.value(rec.indexOf("date")).toString().toStdString().c_str();
                text = querry.value(rec.indexOf("message")).toString().toStdString().c_str();
            }
        }
    }else{
        qDebug("Erreur Séléction message");
    }
    return text;
}

QStringList gestionnaireBdd::getTitreTechnicien(){
    QStringList res;
    if(this->db.isOpen()){
        QSqlQuery querry("SELECT * FROM Ticket ", this->db);
        QSqlRecord rec = querry.record();
        while(querry.next()){
            if(querry.value(rec.indexOf("categorie")).toString().toStdString().compare("Informations")==0 ||querry.value(rec.indexOf("categorie")).toString().toStdString().compare("Aide Paiement")==0 ){
               res.push_back(querry.value(rec.indexOf("titre")).toString());
            }
        }
    }else{
        qDebug("Erreur Séléction message");
    }
    return res;
}

QStringList gestionnaireBdd::getTitreIngenieur(){
    QStringList res;
    if(this->db.isOpen()){
        QSqlQuery querry("SELECT * FROM Ticket ", this->db);
        QSqlRecord rec = querry.record();
        while(querry.next()){
            if(querry.value(rec.indexOf("categorie")).toString().toStdString().compare("Informations")==0 ||querry.value(rec.indexOf("categorie")).toString().toStdString().compare("Aide Paiement")==0 ||querry.value(rec.indexOf("categorie")).toString().toStdString().compare("Problèmes logiciels")==0 ){
               res.push_back(querry.value(rec.indexOf("titre")).toString());
            }
        }
    }else{
        qDebug("Erreur Séléction message");
    }
    return res;
}

QStringList gestionnaireBdd::getTitreAdmin(){
    QStringList res;
    if(this->db.isOpen()){
        QSqlQuery querry("SELECT * FROM Ticket ", this->db);
        QSqlRecord rec = querry.record();
        while(querry.next()){
            res.push_back(querry.value(rec.indexOf("titre")).toString());
        }
    }else{
        qDebug("Erreur Séléction message");
    }
    return res;
}

QStringList gestionnaireBdd::getTitreClient(string ndcActu){
    QStringList res;
    if(this->db.isOpen()){
        QSqlQuery querry("SELECT * FROM Ticket ", this->db);
        QSqlRecord rec = querry.record();
        while(querry.next()){
            if(querry.value(rec.indexOf("ndc")).toString().toStdString().compare(ndcActu) == 0){
                res.push_back(querry.value(rec.indexOf("titre")).toString());
            }
        }
    }else{
        qDebug("Erreur Sélection message");
    }
    return res;
}

void gestionnaireBdd::setMessageClos(string titre){
    if(this->db.isOpen()){
        std::string requete = "UPDATE Ticket SET etat = 'clos' where titre = '"+titre+"'";
        QSqlQuery querry(QString::fromStdString(requete), this->db);
        qDebug("L'état du message a été modifié sur 'clos'");
    }else{
    qDebug("Erreur insert valeur utilisateur client");
    }
}

void gestionnaireBdd::updateMessage(string msg, string titre){
    if(this->db.isOpen()){
        std::string requete = "UPDATE Ticket set message = '"+msg+"' where titre = '"+titre+"'";
        QSqlQuery querry(QString::fromStdString(requete), this->db);
        qDebug("UPDATE DU TICKET MESSAGE");
    }else{
    qDebug("Erreur insert valeur utilisateur client");
    }
}
