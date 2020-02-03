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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialerui
{
public:
    QAction *actionOpen_an_Address_Book;
    QAction *actionExit;
    QWidget *centralwidget;
    QTableView *tableView;
    QLabel *label;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QMenuBar *menubar;
    QMenu *menuTools;

    void setupUi(QMainWindow *Dialerui)
    {
        if (Dialerui->objectName().isEmpty())
            Dialerui->setObjectName(QString::fromUtf8("Dialerui"));
        Dialerui->setEnabled(true);
        Dialerui->resize(840, 900);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Dialerui->sizePolicy().hasHeightForWidth());
        Dialerui->setSizePolicy(sizePolicy);
        Dialerui->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        actionOpen_an_Address_Book = new QAction(Dialerui);
        actionOpen_an_Address_Book->setObjectName(QString::fromUtf8("actionOpen_an_Address_Book"));
        actionExit = new QAction(Dialerui);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        centralwidget = new QWidget(Dialerui);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(420, 21, 391, 831));
        tableView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        tableView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 25, 371, 61));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(70, 120, 31, 31));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(20, 160, 211, 31));
        Dialerui->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Dialerui);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 840, 22));
        menuTools = new QMenu(menubar);
        menuTools->setObjectName(QString::fromUtf8("menuTools"));
        Dialerui->setMenuBar(menubar);

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
        label->setText(QApplication::translate("Dialerui", "TextLabel", nullptr));
        pushButton->setText(QApplication::translate("Dialerui", "9", nullptr));
        lineEdit->setInputMask(QString());
        menuTools->setTitle(QApplication::translate("Dialerui", "Tools", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialerui: public Ui_Dialerui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALERUI_H
