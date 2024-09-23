QT       += core gui sql


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    admin.cpp \
    adminwindow.cpp \
    client.cpp \
    clientwindow.cpp \
    compte.cpp \
    creercompte.cpp \
    easyticket.cpp \
    gestionnairebdd.cpp \
    gestionnairedialogue.cpp \
    ingenieur.cpp \
    ingenieurwindow.cpp \
    main.cpp \
    mainwindow.cpp \
    technicien.cpp \
    technicienwindow.cpp \
    ticket.cpp \
    ticketwindow.cpp \
    utilisateur.cpp \
    creercompteadmin.cpp

HEADERS += \
    admin.h \
    adminwindow.h \
    bdd/Connection.hpp \
    client.h \
    clientwindow.h \
    compte.h \
    creercompte.h \
    easyticket.h \
    gestionnairebdd.h \
    gestionnairedialogue.h \
    ingenieur.h \
    ingenieurwindow.h \
    mainwindow.h \
    technicien.h \
    technicienwindow.h \
    ticket.h \
    ticketwindow.h \
    utilisateur.h \
    creercompteadmin.h

FORMS += \
    adminwindow.ui \
    clientwindow.ui \
    creercompte.ui \
    ingenieurwindow.ui \
    mainwindow.ui \
    technicienwindow.ui \
    creercompteadmin.ui \
    ticketwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    bdd/easyticket.db \
