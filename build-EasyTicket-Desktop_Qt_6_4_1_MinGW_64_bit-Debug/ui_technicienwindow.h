/********************************************************************************
** Form generated from reading UI file 'technicienwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TECHNICIENWINDOW_H
#define UI_TECHNICIENWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TechnicienWindow
{
public:
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QPushButton *pushButton_3;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_2;
    QPushButton *pushButton_5;
    QFrame *line_2;
    QPushButton *pushButton;
    QFrame *line;
    QLabel *label_3;
    QPushButton *create_usr_2;

    void setupUi(QDialog *TechnicienWindow)
    {
        if (TechnicienWindow->objectName().isEmpty())
            TechnicienWindow->setObjectName("TechnicienWindow");
        TechnicienWindow->resize(1292, 673);
        scrollArea = new QScrollArea(TechnicienWindow);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(510, 130, 771, 531));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 769, 529));
        scrollArea->setWidget(scrollAreaWidgetContents);
        pushButton_3 = new QPushButton(TechnicienWindow);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(150, 310, 241, 51));
        pushButton_3->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(125, 54, 195);\n"
"font: 900 16pt \"Arial Black\";\n"
""));
        label = new QLabel(TechnicienWindow);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 10, 108, 32));
        label->setStyleSheet(QString::fromUtf8("font: italic 22pt \"Monotype Corsiva\";\n"
"color: rgb(170, 85, 255)"));
        label_2 = new QLabel(TechnicienWindow);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(420, 0, 357, 37));
        label_2->setStyleSheet(QString::fromUtf8("font: 700 24pt \"Bell MT\";\n"
"color: rgb(170, 85, 255)"));
        pushButton_4 = new QPushButton(TechnicienWindow);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(150, 430, 241, 51));
        pushButton_4->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_4->setStyleSheet(QString::fromUtf8("background-color: rgb(125, 54, 195);\n"
"font: 900 16pt \"Arial Black\";\n"
""));
        pushButton_2 = new QPushButton(TechnicienWindow);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(150, 200, 241, 51));
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(125, 54, 195);\n"
"font: 900 16pt \"Arial Black\";\n"
""));
        pushButton_5 = new QPushButton(TechnicienWindow);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(1120, 0, 80, 24));
        line_2 = new QFrame(TechnicienWindow);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(0, 35, 131, 31));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        pushButton = new QPushButton(TechnicienWindow);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(1200, 0, 89, 24));
        line = new QFrame(TechnicienWindow);
        line->setObjectName("line");
        line->setGeometry(QRect(123, 0, 20, 51));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        label_3 = new QLabel(TechnicienWindow);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(880, 90, 116, 34));
        label_3->setStyleSheet(QString::fromUtf8("font: 900 18pt \"Arial Black\";"));
        create_usr_2 = new QPushButton(TechnicienWindow);
        create_usr_2->setObjectName("create_usr_2");
        create_usr_2->setGeometry(QRect(1120, 30, 171, 21));

        retranslateUi(TechnicienWindow);

        QMetaObject::connectSlotsByName(TechnicienWindow);
    } // setupUi

    void retranslateUi(QDialog *TechnicienWindow)
    {
        TechnicienWindow->setWindowTitle(QCoreApplication::translate("TechnicienWindow", "Dialog", nullptr));
        pushButton_3->setText(QCoreApplication::translate("TechnicienWindow", "Transf\303\251rer", nullptr));
        label->setText(QCoreApplication::translate("TechnicienWindow", "Technicien", nullptr));
        label_2->setText(QCoreApplication::translate("TechnicienWindow", "Bonjour, technicien NOM", nullptr));
        pushButton_4->setText(QCoreApplication::translate("TechnicienWindow", "Clore", nullptr));
        pushButton_2->setText(QCoreApplication::translate("TechnicienWindow", "R\303\251pondre", nullptr));
        pushButton_5->setText(QCoreApplication::translate("TechnicienWindow", "Help", nullptr));
        pushButton->setText(QCoreApplication::translate("TechnicienWindow", "Quitter", nullptr));
        label_3->setText(QCoreApplication::translate("TechnicienWindow", "Tickets", nullptr));
        create_usr_2->setText(QCoreApplication::translate("TechnicienWindow", "Se d\303\251connecter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TechnicienWindow: public Ui_TechnicienWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TECHNICIENWINDOW_H
