/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *IdentifiantEdit;
    QLabel *Identifiant;
    QLabel *EasyTicket;
    QLabel *MotDePasse;
    QLineEdit *MotDePasseEdit;
    QPushButton *pushButton;
    QFrame *line;
    QFrame *line_2;
    QLabel *Welcome;
    QLabel *Login;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *MessageLogin;
    QPushButton *pushButton_2;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(802, 603);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        IdentifiantEdit = new QLineEdit(centralwidget);
        IdentifiantEdit->setObjectName("IdentifiantEdit");
        IdentifiantEdit->setGeometry(QRect(470, 210, 171, 31));
        IdentifiantEdit->setStyleSheet(QString::fromUtf8(""));
        Identifiant = new QLabel(centralwidget);
        Identifiant->setObjectName("Identifiant");
        Identifiant->setGeometry(QRect(410, 210, 61, 31));
        Identifiant->setStyleSheet(QString::fromUtf8(""));
        EasyTicket = new QLabel(centralwidget);
        EasyTicket->setObjectName("EasyTicket");
        EasyTicket->setGeometry(QRect(450, 10, 146, 34));
        EasyTicket->setStyleSheet(QString::fromUtf8("font: 900 18pt \"Arial Black\";\n"
"color : rgb(118, 118, 118)\n"
""));
        EasyTicket->setWordWrap(true);
        MotDePasse = new QLabel(centralwidget);
        MotDePasse->setObjectName("MotDePasse");
        MotDePasse->setGeometry(QRect(390, 260, 81, 31));
        MotDePasse->setStyleSheet(QString::fromUtf8(""));
        MotDePasseEdit = new QLineEdit(centralwidget);
        MotDePasseEdit->setObjectName("MotDePasseEdit");
        MotDePasseEdit->setGeometry(QRect(470, 260, 171, 31));
        MotDePasseEdit->setStyleSheet(QString::fromUtf8(""));
        MotDePasseEdit->setEchoMode(QLineEdit::Password);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(520, 320, 80, 24));
        pushButton->setStyleSheet(QString::fromUtf8(""));
        line = new QFrame(centralwidget);
        line->setObjectName("line");
        line->setGeometry(QRect(0, 50, 801, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(centralwidget);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(243, 0, 21, 581));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        Welcome = new QLabel(centralwidget);
        Welcome->setObjectName("Welcome");
        Welcome->setGeometry(QRect(40, 250, 143, 41));
        Welcome->setStyleSheet(QString::fromUtf8("font: 900 22pt \"Arial Black\";\n"
"color : rgb(118, 118, 118)"));
        Welcome->setWordWrap(true);
        Login = new QLabel(centralwidget);
        Login->setObjectName("Login");
        Login->setGeometry(QRect(70, 10, 86, 41));
        Login->setStyleSheet(QString::fromUtf8("font: 900 22pt \"Arial Black\";\n"
"color:rgb(244, 57, 19)"));
        Login->setWordWrap(true);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(10, 400, 141, 31));
        label_6->setStyleSheet(QString::fromUtf8(""));
        label_6->setWordWrap(true);
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(10, 450, 218, 48));
        label_7->setStyleSheet(QString::fromUtf8(""));
        label_7->setWordWrap(true);
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(10, 520, 218, 48));
        label_8->setStyleSheet(QString::fromUtf8(""));
        label_8->setWordWrap(true);
        MessageLogin = new QLabel(centralwidget);
        MessageLogin->setObjectName("MessageLogin");
        MessageLogin->setGeometry(QRect(430, 360, 49, 16));
        MessageLogin->setWordWrap(true);
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(480, 390, 161, 21));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Identifiant->setText(QCoreApplication::translate("MainWindow", "Identifiant :", nullptr));
        EasyTicket->setText(QCoreApplication::translate("MainWindow", "EasyTicket", nullptr));
        MotDePasse->setText(QCoreApplication::translate("MainWindow", "Mot de passe :", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Valider", nullptr));
        Welcome->setText(QCoreApplication::translate("MainWindow", "Welcome", nullptr));
        Login->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "R\303\251ponse rapide, sous 48h", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "A votre disposition, des professionnels de tout domaine avec qui vous pourrez \303\251changer gr\303\242ce \303\240 votre ticket", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Notre application vous aidera \303\240 r\303\251gler vos probl\303\250mes, gr\303\242ce \303\240 des professionnels qualifi\303\251s", nullptr));
        MessageLogin->setText(QString());
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Cr\303\251er un compte", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
