/********************************************************************************
** Form generated from reading UI file 'creercompte.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREERCOMPTE_H
#define UI_CREERCOMPTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CreerCompte
{
public:
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *NomLine;
    QLineEdit *PrenomLine;
    QLineEdit *MdpLine;
    QLineEdit *IdLine;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_7;
    QLineEdit *ConfirmezLine;
    QLabel *label_8;
    QLineEdit *ndcLine;

    void setupUi(QDialog *CreerCompte)
    {
        if (CreerCompte->objectName().isEmpty())
            CreerCompte->setObjectName("CreerCompte");
        CreerCompte->resize(834, 520);
        label = new QLabel(CreerCompte);
        label->setObjectName("label");
        label->setGeometry(QRect(290, 10, 261, 41));
        label->setLayoutDirection(Qt::LeftToRight);
        label->setStyleSheet(QString::fromUtf8("font: 700 20pt \"Malgun Gothic\";\n"
"color:rgb(0, 0, 0)"));
        label_3 = new QLabel(CreerCompte);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(370, 130, 81, 21));
        label_3->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Segoe UI\";\n"
"color:rgb(0, 0, 0)"));
        label_4 = new QLabel(CreerCompte);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(370, 190, 81, 21));
        label_4->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Segoe UI\";\n"
"color:rgb(0, 0, 0)"));
        label_5 = new QLabel(CreerCompte);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(370, 250, 111, 21));
        label_5->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Segoe UI\";\n"
"color:rgb(0, 0, 0)"));
        label_6 = new QLabel(CreerCompte);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(370, 60, 121, 31));
        label_6->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Segoe UI\";\n"
"color:rgb(0, 0, 0)"));
        NomLine = new QLineEdit(CreerCompte);
        NomLine->setObjectName("NomLine");
        NomLine->setGeometry(QRect(510, 120, 151, 31));
        PrenomLine = new QLineEdit(CreerCompte);
        PrenomLine->setObjectName("PrenomLine");
        PrenomLine->setGeometry(QRect(510, 180, 151, 31));
        MdpLine = new QLineEdit(CreerCompte);
        MdpLine->setObjectName("MdpLine");
        MdpLine->setGeometry(QRect(510, 240, 151, 31));
        MdpLine->setEchoMode(QLineEdit::Password);
        IdLine = new QLineEdit(CreerCompte);
        IdLine->setObjectName("IdLine");
        IdLine->setGeometry(QRect(510, 60, 151, 31));
        pushButton = new QPushButton(CreerCompte);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(500, 430, 80, 24));
        pushButton_2 = new QPushButton(CreerCompte);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(590, 430, 80, 24));
        label_7 = new QLabel(CreerCompte);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(370, 310, 101, 21));
        label_7->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Segoe UI\";\n"
"color:rgb(0, 0, 0)"));
        ConfirmezLine = new QLineEdit(CreerCompte);
        ConfirmezLine->setObjectName("ConfirmezLine");
        ConfirmezLine->setGeometry(QRect(510, 300, 151, 31));
        ConfirmezLine->setEchoMode(QLineEdit::Password);
        label_8 = new QLabel(CreerCompte);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(370, 370, 131, 21));
        label_8->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Segoe UI\";\n"
"color:rgb(0, 0, 0)"));
        ndcLine = new QLineEdit(CreerCompte);
        ndcLine->setObjectName("ndcLine");
        ndcLine->setGeometry(QRect(510, 360, 151, 31));
        ndcLine->setEchoMode(QLineEdit::Password);

        retranslateUi(CreerCompte);

        QMetaObject::connectSlotsByName(CreerCompte);
    } // setupUi

    void retranslateUi(QDialog *CreerCompte)
    {
        CreerCompte->setWindowTitle(QCoreApplication::translate("CreerCompte", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("CreerCompte", "Creation du compte", nullptr));
        label_3->setText(QCoreApplication::translate("CreerCompte", "Nom :", nullptr));
        label_4->setText(QCoreApplication::translate("CreerCompte", "Pr\303\251nom :", nullptr));
        label_5->setText(QCoreApplication::translate("CreerCompte", "Mot De Passe :", nullptr));
        label_6->setText(QCoreApplication::translate("CreerCompte", "Identifiant :", nullptr));
        pushButton->setText(QCoreApplication::translate("CreerCompte", "Valider", nullptr));
        pushButton_2->setText(QCoreApplication::translate("CreerCompte", "Annuler", nullptr));
        label_7->setText(QCoreApplication::translate("CreerCompte", "Confirmez :", nullptr));
        label_8->setText(QCoreApplication::translate("CreerCompte", "Nom de compte :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreerCompte: public Ui_CreerCompte {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREERCOMPTE_H
