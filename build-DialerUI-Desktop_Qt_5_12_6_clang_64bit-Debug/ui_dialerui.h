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
    QPushButton *Nine;
    QPushButton *Eight;
    QPushButton *Seven;
    QPushButton *Six;
    QPushButton *Five;
    QPushButton *Four;
    QPushButton *Three;
    QPushButton *Two;
    QPushButton *One;
    QPushButton *Zero;
    QLabel *dialLabel;
    QMenuBar *menubar;
    QMenu *menuTools;

    void setupUi(QMainWindow *Dialerui)
    {
        if (Dialerui->objectName().isEmpty())
            Dialerui->setObjectName(QString::fromUtf8("Dialerui"));
        Dialerui->setEnabled(true);
        Dialerui->resize(840, 534);
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
        tableView->setGeometry(QRect(350, 20, 451, 301));
        tableView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        tableView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 25, 301, 61));
        Nine = new QPushButton(centralwidget);
        Nine->setObjectName(QString::fromUtf8("Nine"));
        Nine->setGeometry(QRect(260, 340, 51, 51));
        Eight = new QPushButton(centralwidget);
        Eight->setObjectName(QString::fromUtf8("Eight"));
        Eight->setGeometry(QRect(140, 340, 51, 51));
        Seven = new QPushButton(centralwidget);
        Seven->setObjectName(QString::fromUtf8("Seven"));
        Seven->setGeometry(QRect(20, 340, 51, 51));
        Six = new QPushButton(centralwidget);
        Six->setObjectName(QString::fromUtf8("Six"));
        Six->setGeometry(QRect(260, 240, 51, 51));
        Five = new QPushButton(centralwidget);
        Five->setObjectName(QString::fromUtf8("Five"));
        Five->setGeometry(QRect(140, 240, 51, 51));
        Four = new QPushButton(centralwidget);
        Four->setObjectName(QString::fromUtf8("Four"));
        Four->setGeometry(QRect(20, 240, 51, 51));
        Three = new QPushButton(centralwidget);
        Three->setObjectName(QString::fromUtf8("Three"));
        Three->setGeometry(QRect(260, 140, 51, 51));
        Two = new QPushButton(centralwidget);
        Two->setObjectName(QString::fromUtf8("Two"));
        Two->setGeometry(QRect(140, 140, 51, 51));
        One = new QPushButton(centralwidget);
        One->setObjectName(QString::fromUtf8("One"));
        One->setGeometry(QRect(20, 140, 51, 51));
        Zero = new QPushButton(centralwidget);
        Zero->setObjectName(QString::fromUtf8("Zero"));
        Zero->setGeometry(QRect(140, 430, 51, 51));
        dialLabel = new QLabel(centralwidget);
        dialLabel->setObjectName(QString::fromUtf8("dialLabel"));
        dialLabel->setGeometry(QRect(20, 90, 261, 31));
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
        Nine->setText(QApplication::translate("Dialerui", "9", nullptr));
        Eight->setText(QApplication::translate("Dialerui", "8", nullptr));
        Seven->setText(QApplication::translate("Dialerui", "7", nullptr));
        Six->setText(QApplication::translate("Dialerui", "6", nullptr));
        Five->setText(QApplication::translate("Dialerui", "5", nullptr));
        Four->setText(QApplication::translate("Dialerui", "4", nullptr));
        Three->setText(QApplication::translate("Dialerui", "3", nullptr));
        Two->setText(QApplication::translate("Dialerui", "2", nullptr));
        One->setText(QApplication::translate("Dialerui", "1", nullptr));
        Zero->setText(QApplication::translate("Dialerui", "0", nullptr));
        dialLabel->setText(QString());
        menuTools->setTitle(QApplication::translate("Dialerui", "Tools", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialerui: public Ui_Dialerui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALERUI_H
