/********************************************************************************
** Form generated from reading UI file 'ticketwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TICKETWINDOW_H
#define UI_TICKETWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_ticketWindow
{
public:
    QComboBox *categorieBox;
    QLabel *label;
    QPushButton *pushButton;
    QTextEdit *textEdit1;
    QLineEdit *titreTicket;

    void setupUi(QDialog *ticketWindow)
    {
        if (ticketWindow->objectName().isEmpty())
            ticketWindow->setObjectName("ticketWindow");
        ticketWindow->resize(856, 488);
        categorieBox = new QComboBox(ticketWindow);
        categorieBox->addItem(QString());
        categorieBox->addItem(QString());
        categorieBox->addItem(QString());
        categorieBox->setObjectName("categorieBox");
        categorieBox->setGeometry(QRect(300, 30, 141, 31));
        categorieBox->setEditable(false);
        label = new QLabel(ticketWindow);
        label->setObjectName("label");
        label->setGeometry(QRect(220, 30, 51, 21));
        pushButton = new QPushButton(ticketWindow);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(330, 310, 80, 24));
        textEdit1 = new QTextEdit(ticketWindow);
        textEdit1->setObjectName("textEdit1");
        textEdit1->setGeometry(QRect(70, 140, 681, 151));
        titreTicket = new QLineEdit(ticketWindow);
        titreTicket->setObjectName("titreTicket");
        titreTicket->setGeometry(QRect(80, 100, 113, 26));

        retranslateUi(ticketWindow);

        QMetaObject::connectSlotsByName(ticketWindow);
    } // setupUi

    void retranslateUi(QDialog *ticketWindow)
    {
        ticketWindow->setWindowTitle(QCoreApplication::translate("ticketWindow", "Dialog", nullptr));
        categorieBox->setItemText(0, QCoreApplication::translate("ticketWindow", "Probl\303\250mes logiciels", nullptr));
        categorieBox->setItemText(1, QCoreApplication::translate("ticketWindow", "Informations", nullptr));
        categorieBox->setItemText(2, QCoreApplication::translate("ticketWindow", "Aide Paiement", nullptr));

        categorieBox->setCurrentText(QCoreApplication::translate("ticketWindow", "Probl\303\250mes logiciels", nullptr));
        label->setText(QCoreApplication::translate("ticketWindow", "Cat\303\251gorie", nullptr));
        pushButton->setText(QCoreApplication::translate("ticketWindow", "Envoyer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ticketWindow: public Ui_ticketWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TICKETWINDOW_H
