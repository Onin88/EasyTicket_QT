/********************************************************************************
** Form generated from reading UI file 'creercompteadmin.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREERCOMPTEADMIN_H
#define UI_CREERCOMPTEADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CreerCompteAdmin
{
public:
    QLabel *label_6;
    QLineEdit *prenomline;
    QPushButton *pushButton;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *nomline;
    QPushButton *pushButton_2;
    QLineEdit *mdpline;
    QLabel *label_7;
    QLineEdit *idline;
    QLineEdit *confirmezline;
    QLabel *label_5;
    QLabel *label_8;
    QLineEdit *ndcline;
    QLabel *label;
    QCheckBox *checkTech;
    QCheckBox *checkIng;

    void setupUi(QDialog *CreerCompteAdmin)
    {
        if (CreerCompteAdmin->objectName().isEmpty())
            CreerCompteAdmin->setObjectName("CreerCompteAdmin");
        CreerCompteAdmin->resize(838, 494);
        label_6 = new QLabel(CreerCompteAdmin);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(280, 60, 121, 31));
        label_6->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Segoe UI\";\n"
"color:rgb(0, 0, 0)"));
        prenomline = new QLineEdit(CreerCompteAdmin);
        prenomline->setObjectName("prenomline");
        prenomline->setGeometry(QRect(420, 180, 151, 31));
        pushButton = new QPushButton(CreerCompteAdmin);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(410, 430, 80, 24));
        label_3 = new QLabel(CreerCompteAdmin);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(280, 130, 81, 21));
        label_3->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Segoe UI\";\n"
"color:rgb(0, 0, 0)"));
        label_4 = new QLabel(CreerCompteAdmin);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(280, 190, 81, 21));
        label_4->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Segoe UI\";\n"
"color:rgb(0, 0, 0)"));
        nomline = new QLineEdit(CreerCompteAdmin);
        nomline->setObjectName("nomline");
        nomline->setGeometry(QRect(420, 120, 151, 31));
        pushButton_2 = new QPushButton(CreerCompteAdmin);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(500, 430, 80, 24));
        mdpline = new QLineEdit(CreerCompteAdmin);
        mdpline->setObjectName("mdpline");
        mdpline->setGeometry(QRect(420, 240, 151, 31));
        mdpline->setEchoMode(QLineEdit::Password);
        label_7 = new QLabel(CreerCompteAdmin);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(280, 310, 101, 21));
        label_7->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Segoe UI\";\n"
"color:rgb(0, 0, 0)"));
        idline = new QLineEdit(CreerCompteAdmin);
        idline->setObjectName("idline");
        idline->setGeometry(QRect(420, 60, 151, 31));
        confirmezline = new QLineEdit(CreerCompteAdmin);
        confirmezline->setObjectName("confirmezline");
        confirmezline->setGeometry(QRect(420, 300, 151, 31));
        confirmezline->setEchoMode(QLineEdit::Password);
        label_5 = new QLabel(CreerCompteAdmin);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(280, 250, 111, 21));
        label_5->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Segoe UI\";\n"
"color:rgb(0, 0, 0)"));
        label_8 = new QLabel(CreerCompteAdmin);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(280, 370, 131, 21));
        label_8->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Segoe UI\";\n"
"color:rgb(0, 0, 0)"));
        ndcline = new QLineEdit(CreerCompteAdmin);
        ndcline->setObjectName("ndcline");
        ndcline->setGeometry(QRect(420, 360, 151, 31));
        ndcline->setEchoMode(QLineEdit::Password);
        label = new QLabel(CreerCompteAdmin);
        label->setObjectName("label");
        label->setGeometry(QRect(280, 0, 261, 41));
        label->setLayoutDirection(Qt::LeftToRight);
        label->setStyleSheet(QString::fromUtf8("font: 700 20pt \"Malgun Gothic\";\n"
"color:rgb(0, 0, 0)"));
        checkTech = new QCheckBox(CreerCompteAdmin);
        checkTech->setObjectName("checkTech");
        checkTech->setGeometry(QRect(680, 220, 78, 22));
        checkTech->setTristate(false);
        checkIng = new QCheckBox(CreerCompteAdmin);
        checkIng->setObjectName("checkIng");
        checkIng->setGeometry(QRect(680, 250, 78, 22));

        retranslateUi(CreerCompteAdmin);

        QMetaObject::connectSlotsByName(CreerCompteAdmin);
    } // setupUi

    void retranslateUi(QDialog *CreerCompteAdmin)
    {
        CreerCompteAdmin->setWindowTitle(QCoreApplication::translate("CreerCompteAdmin", "Dialog", nullptr));
        label_6->setText(QCoreApplication::translate("CreerCompteAdmin", "Identifiant :", nullptr));
        pushButton->setText(QCoreApplication::translate("CreerCompteAdmin", "Valider", nullptr));
        label_3->setText(QCoreApplication::translate("CreerCompteAdmin", "Nom :", nullptr));
        label_4->setText(QCoreApplication::translate("CreerCompteAdmin", "Pr\303\251nom :", nullptr));
        pushButton_2->setText(QCoreApplication::translate("CreerCompteAdmin", "Annuler", nullptr));
        label_7->setText(QCoreApplication::translate("CreerCompteAdmin", "Confirmez :", nullptr));
        label_5->setText(QCoreApplication::translate("CreerCompteAdmin", "Mot De Passe :", nullptr));
        label_8->setText(QCoreApplication::translate("CreerCompteAdmin", "Nom de compte :", nullptr));
        label->setText(QCoreApplication::translate("CreerCompteAdmin", "Creation du compte", nullptr));
        checkTech->setText(QCoreApplication::translate("CreerCompteAdmin", "Technicien", nullptr));
        checkIng->setText(QCoreApplication::translate("CreerCompteAdmin", "Ingenieur", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreerCompteAdmin: public Ui_CreerCompteAdmin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREERCOMPTEADMIN_H
