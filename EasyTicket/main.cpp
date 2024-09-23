#include "mainwindow.h"
#include "easyticket.h"
#include <QApplication>



int main(int argc, char *argv[])
{
    EasyTicket et;
    et.addUser("client1","client1mdp",1,"younes","soudani");
    et.addUser("technicien","technicienmdp",2,"quentin","beluche");
    et.addUser("admin","adminMdp",0,"adminPrenom","adminNom");
    et.addUser("inge","ingemdp",3,"isma","nbj");

    QApplication a(argc, argv);
    MainWindow w(et);

    w.show();
    return a.exec();
}
