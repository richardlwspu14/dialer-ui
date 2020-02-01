/********************************************************************************
** Form generated from reading UI file 'dialerui.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALERUI_H
#define UI_DIALERUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialerui
{
public:
    QAction *actionOpen_an_Address_Book;
    QAction *actionExit;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menuTools;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Dialerui)
    {
        if (Dialerui->objectName().isEmpty())
            Dialerui->setObjectName(QString::fromUtf8("Dialerui"));
        Dialerui->resize(800, 600);
        actionOpen_an_Address_Book = new QAction(Dialerui);
        actionOpen_an_Address_Book->setObjectName(QString::fromUtf8("actionOpen_an_Address_Book"));
        actionExit = new QAction(Dialerui);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        centralwidget = new QWidget(Dialerui);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Dialerui->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Dialerui);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        menuTools = new QMenu(menubar);
        menuTools->setObjectName(QString::fromUtf8("menuTools"));
        Dialerui->setMenuBar(menubar);
        statusbar = new QStatusBar(Dialerui);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Dialerui->setStatusBar(statusbar);

        menubar->addAction(menuTools->menuAction());
        menuTools->addAction(actionOpen_an_Address_Book);
        menuTools->addSeparator();
        menuTools->addAction(actionExit);

        retranslateUi(Dialerui);

        QMetaObject::connectSlotsByName(Dialerui);
    } // setupUi

    void retranslateUi(QMainWindow *Dialerui)
    {
        Dialerui->setWindowTitle(QApplication::translate("Dialerui", "Dialerui", nullptr));
        actionOpen_an_Address_Book->setText(QApplication::translate("Dialerui", "Open an Address Book...", nullptr));
        actionExit->setText(QApplication::translate("Dialerui", "Exit", nullptr));
        menuTools->setTitle(QApplication::translate("Dialerui", "Tools", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialerui: public Ui_Dialerui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALERUI_H
