/********************************************************************************
** Form generated from reading UI file 'clientwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTWINDOW_H
#define UI_CLIENTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ClientWindow
{
public:
    QLabel *label;
    QFrame *line;
    QFrame *line_2;
    QLabel *label_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLabel *label_3;
    QPushButton *pushButton_5;

    void setupUi(QDialog *ClientWindow)
    {
        if (ClientWindow->objectName().isEmpty())
            ClientWindow->setObjectName("ClientWindow");
        ClientWindow->resize(1282, 666);
        label = new QLabel(ClientWindow);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 10, 62, 32));
        label->setStyleSheet(QString::fromUtf8("color: rgb(16, 91, 203);\n"
"font: italic 22pt \"Monotype Corsiva\";"));
        label->setWordWrap(true);
        line = new QFrame(ClientWindow);
        line->setObjectName("line");
        line->setGeometry(QRect(0, 60, 118, 3));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(ClientWindow);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(120, 0, 3, 61));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        label_2 = new QLabel(ClientWindow);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(470, 10, 204, 37));
        label_2->setStyleSheet(QString::fromUtf8("font: 700 24pt \"Bell MT\";\n"
"color: rgb(0, 196, 255);"));
        pushButton = new QPushButton(ClientWindow);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(1190, 0, 89, 24));
        pushButton_2 = new QPushButton(ClientWindow);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(1110, 0, 80, 24));
        scrollArea = new QScrollArea(ClientWindow);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(430, 160, 841, 501));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 839, 499));
        scrollArea->setWidget(scrollAreaWidgetContents);
        pushButton_3 = new QPushButton(ClientWindow);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(200, 320, 211, 61));
        pushButton_3->setStyleSheet(QString::fromUtf8("font: 900 14pt \"Arial Black\";\n"
"background-color: rgb(5, 209, 255);\n"
"color: rgb(0, 0, 0);"));
        pushButton_4 = new QPushButton(ClientWindow);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(200, 400, 211, 61));
        pushButton_4->setStyleSheet(QString::fromUtf8("font: 900 14pt \"Arial Black\";\n"
"background-color: rgb(5, 209, 255);\n"
"color: rgb(0, 0, 0);"));
        label_3 = new QLabel(ClientWindow);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(720, 120, 292, 34));
        label_3->setStyleSheet(QString::fromUtf8("font: 900 18pt \"Arial Black\";\n"
""));
        pushButton_5 = new QPushButton(ClientWindow);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(1110, 31, 171, 21));

        retranslateUi(ClientWindow);

        QMetaObject::connectSlotsByName(ClientWindow);
    } // setupUi

    void retranslateUi(QDialog *ClientWindow)
    {
        ClientWindow->setWindowTitle(QCoreApplication::translate("ClientWindow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("ClientWindow", "Client", nullptr));
        label_2->setText(QCoreApplication::translate("ClientWindow", "Bonjour, NOM", nullptr));
        pushButton->setText(QCoreApplication::translate("ClientWindow", "Quitter", nullptr));
        pushButton_2->setText(QCoreApplication::translate("ClientWindow", "Help", nullptr));
        pushButton_3->setText(QCoreApplication::translate("ClientWindow", "+ Nouveau ticket", nullptr));
        pushButton_4->setText(QCoreApplication::translate("ClientWindow", "R\303\251pondre au ticket", nullptr));
        label_3->setText(QCoreApplication::translate("ClientWindow", "Historique des tickets", nullptr));
        pushButton_5->setText(QCoreApplication::translate("ClientWindow", "Se d\303\251connecter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ClientWindow: public Ui_ClientWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTWINDOW_H
