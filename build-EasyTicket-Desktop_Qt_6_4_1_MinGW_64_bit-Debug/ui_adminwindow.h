/********************************************************************************
** Form generated from reading UI file 'adminwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINWINDOW_H
#define UI_ADMINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminWindow
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
    QPushButton *pushButton;
    QPushButton *create_usr;
    QPushButton *create_usr_2;

    void setupUi(QDialog *AdminWindow)
    {
        if (AdminWindow->objectName().isEmpty())
            AdminWindow->setObjectName("AdminWindow");
        AdminWindow->resize(1287, 672);
        AdminWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(161, 161, 161);"));
        label = new QLabel(AdminWindow);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 10, 70, 32));
        label->setStyleSheet(QString::fromUtf8("font: italic 22pt \"Monotype Corsiva\";\n"
"color: rgb(255, 255, 255);"));
        line = new QFrame(AdminWindow);
        line->setObjectName("line");
        line->setGeometry(QRect(80, 0, 51, 61));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(AdminWindow);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(0, 46, 101, 31));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        label_2 = new QLabel(AdminWindow);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(470, 10, 252, 37));
        label_2->setStyleSheet(QString::fromUtf8("font: 700 24pt \"Bell MT\";\n"
"color: rgb(255, 255, 255);"));
        scrollArea = new QScrollArea(AdminWindow);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(10, 120, 1261, 541));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1259, 539));
        scrollArea->setWidget(scrollAreaWidgetContents);
        label_3 = new QLabel(AdminWindow);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(510, 90, 171, 26));
        label_3->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Segoe UI\";"));
        pushButton_2 = new QPushButton(AdminWindow);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(1120, 0, 80, 24));
        pushButton = new QPushButton(AdminWindow);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(1200, 0, 89, 24));
        create_usr = new QPushButton(AdminWindow);
        create_usr->setObjectName("create_usr");
        create_usr->setGeometry(QRect(1120, 60, 161, 21));
        create_usr_2 = new QPushButton(AdminWindow);
        create_usr_2->setObjectName("create_usr_2");
        create_usr_2->setGeometry(QRect(1120, 30, 161, 21));
        pushButton->raise();
        label->raise();
        line->raise();
        line_2->raise();
        label_2->raise();
        scrollArea->raise();
        label_3->raise();
        pushButton_2->raise();
        create_usr->raise();
        create_usr_2->raise();

        retranslateUi(AdminWindow);

        QMetaObject::connectSlotsByName(AdminWindow);
    } // setupUi

    void retranslateUi(QDialog *AdminWindow)
    {
        AdminWindow->setWindowTitle(QCoreApplication::translate("AdminWindow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("AdminWindow", "Admin", nullptr));
        label_2->setText(QCoreApplication::translate("AdminWindow", "Bonjour Monsieur", nullptr));
        label_3->setText(QCoreApplication::translate("AdminWindow", "Activit\303\251s des tickets", nullptr));
        pushButton_2->setText(QCoreApplication::translate("AdminWindow", "Help", nullptr));
        pushButton->setText(QCoreApplication::translate("AdminWindow", "Quitter", nullptr));
        create_usr->setText(QCoreApplication::translate("AdminWindow", "Cr\303\251er utilisateur", nullptr));
        create_usr_2->setText(QCoreApplication::translate("AdminWindow", "Se d\303\251connecter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminWindow: public Ui_AdminWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINWINDOW_H
