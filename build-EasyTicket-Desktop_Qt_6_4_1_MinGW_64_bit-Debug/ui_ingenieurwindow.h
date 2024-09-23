/********************************************************************************
** Form generated from reading UI file 'ingenieurwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INGENIEURWINDOW_H
#define UI_INGENIEURWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_IngenieurWindow
{
public:
    QLabel *label;
    QFrame *line;
    QFrame *line_2;
    QLabel *label_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QLabel *label_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *create_usr_2;
    QPushButton *create_usr_3;

    void setupUi(QDialog *IngenieurWindow)
    {
        if (IngenieurWindow->objectName().isEmpty())
            IngenieurWindow->setObjectName("IngenieurWindow");
        IngenieurWindow->resize(1293, 667);
        IngenieurWindow->setCursor(QCursor(Qt::ArrowCursor));
        label = new QLabel(IngenieurWindow);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 10, 100, 32));
        label->setStyleSheet(QString::fromUtf8("color: rgb(194, 107, 19);\n"
"font: italic 22pt \"Monotype Corsiva\";"));
        line = new QFrame(IngenieurWindow);
        line->setObjectName("line");
        line->setGeometry(QRect(0, 45, 181, 31));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(IngenieurWindow);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(180, 0, 3, 61));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        label_2 = new QLabel(IngenieurWindow);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(430, 10, 345, 37));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(194, 107, 19);\n"
"font: 700 24pt \"Bell MT\";"));
        scrollArea = new QScrollArea(IngenieurWindow);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(510, 130, 771, 531));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 769, 529));
        scrollArea->setWidget(scrollAreaWidgetContents);
        label_3 = new QLabel(IngenieurWindow);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(870, 90, 116, 34));
        label_3->setStyleSheet(QString::fromUtf8("font: 900 18pt \"Arial Black\";"));
        pushButton_2 = new QPushButton(IngenieurWindow);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(160, 280, 241, 51));
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(217, 119, 39);\n"
"font: 900 16pt \"Arial Black\";\n"
""));
        pushButton_3 = new QPushButton(IngenieurWindow);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(160, 410, 241, 51));
        pushButton_3->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(217, 119, 39);\n"
"font: 900 16pt \"Arial Black\";\n"
""));
        pushButton_4 = new QPushButton(IngenieurWindow);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(1120, 0, 80, 24));
        pushButton_5 = new QPushButton(IngenieurWindow);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(1200, 0, 89, 24));
        create_usr_2 = new QPushButton(IngenieurWindow);
        create_usr_2->setObjectName("create_usr_2");
        create_usr_2->setGeometry(QRect(1120, 30, 171, 21));
        create_usr_3 = new QPushButton(IngenieurWindow);
        create_usr_3->setObjectName("create_usr_3");
        create_usr_3->setGeometry(QRect(1120, 310, 171, 21));

        retranslateUi(IngenieurWindow);

        QMetaObject::connectSlotsByName(IngenieurWindow);
    } // setupUi

    void retranslateUi(QDialog *IngenieurWindow)
    {
        IngenieurWindow->setWindowTitle(QCoreApplication::translate("IngenieurWindow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("IngenieurWindow", "Ing\303\251nieur", nullptr));
        label_2->setText(QCoreApplication::translate("IngenieurWindow", "Bonjour, ing\303\251nieur NOM", nullptr));
        label_3->setText(QCoreApplication::translate("IngenieurWindow", "Tickets", nullptr));
        pushButton_2->setText(QCoreApplication::translate("IngenieurWindow", "R\303\251pondre", nullptr));
        pushButton_3->setText(QCoreApplication::translate("IngenieurWindow", "Clore", nullptr));
        pushButton_4->setText(QCoreApplication::translate("IngenieurWindow", "Help", nullptr));
        pushButton_5->setText(QCoreApplication::translate("IngenieurWindow", "Quitter", nullptr));
        create_usr_2->setText(QCoreApplication::translate("IngenieurWindow", "Se d\303\251connecter", nullptr));
        create_usr_3->setText(QCoreApplication::translate("IngenieurWindow", "Se d\303\251connecter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class IngenieurWindow: public Ui_IngenieurWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INGENIEURWINDOW_H
