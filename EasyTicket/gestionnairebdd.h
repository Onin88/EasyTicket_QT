#ifndef GESTIONNAIREBDD_H
#define GESTIONNAIREBDD_H
#include <QSqlDatabase>
#include "bdd/Connection.hpp"
#include <QSqlQuery>
#include <QtSql>
#include <QVariant>
#include <QString>
using namespace std;
class gestionnaireBdd
{
public:
    gestionnaireBdd();
    /// EasyTicket
    //EasyTicket easyT;
    /// @param db : la ou est ouverte la bdd
    ASqlDatabase db = ASqlDatabase("QSQLITE" , "../EasyTicket/bdd/easyticket.db");
    ///@brief Fonction qui lis la bdd
    bool readDB(string ndc,string mdp);
    ///@brief retourne le rôle de l'utilisateur correspondant au logs dans Utilisateurs
    /// @param ndc nomdecompte
    /// @param mdp motdepasse
    int getUser(string ndc,string mdp);
    void insertBdd(string id2, string ndc2, string nom2,string prenom2, string mdp2, string role);
    void insertTicket(string msg, string title, string categorie, string ndc, string date, string etat);
    void printTicket();
    string getMessageTicket(string titre);
    QStringList getTitreTechnicien();
    QStringList getTitreIngenieur();
    QStringList getTitreClient(string ndcActu);
    QStringList getTitreAdmin();
    void setMessageClos(string titre);
    void updateMessage(string msg, string titre);
};

#endif // GESTIONNAIREBDD_H
