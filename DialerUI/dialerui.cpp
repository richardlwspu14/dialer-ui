#include "dialerui.h"
#include "ui_dialerui.h"
#include <QFileDialog>
#include <iostream>
#include <QSortFilterProxyModel>

Dialerui::Dialerui(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Dialerui),
    myModel(new MyAddressBookModel(this))
{
    ui->setupUi(this);
    ui->tableView->setModel(myModel);
    setFixedSize(840,900);
}

Dialerui::~Dialerui()
{
    delete ui;
}

void Dialerui::on_actionOpen_an_Address_Book_triggered()
{
    QString filename = QFileDialog::getOpenFileName
            (this, tr("Open Address Book"),"",
             tr("Address Book (*csv);;All Files (*)"));

    std::cout<< filename.toStdString() << std::endl;
    myModel->openFile(filename);
}

void Dialerui::on_tableView_clicked(const QModelIndex &index)
{   ui->tableView->setUpdatesEnabled(true);
    std::cout << index.row() << "," << index.column() << std::endl;
    ui->label->setText(myModel->getPhoneNumber(index.row()));
}

void Dialerui::on_One_clicked()
{
    myModel->setFilterNumber("1");
}

void Dialerui::on_Two_clicked()
{
    myModel->setFilterNumber("2");
}

void Dialerui::on_Three_clicked()
{
    myModel->setFilterNumber("3");
}

void Dialerui::on_Four_clicked()
{
   myModel->setFilterNumber("4");
}

void Dialerui::on_Five_clicked()
{
    myModel->setFilterNumber("5");
}

void Dialerui::on_Six_clicked()
{
    myModel->setFilterNumber("6");
}

void Dialerui::on_Seven_clicked()
{
     myModel->setFilterNumber("7");
}

void Dialerui::on_Eight_clicked()
{
    myModel->setFilterNumber("8");
}

void Dialerui::on_Nine_clicked()
{
    myModel->setFilterNumber("9");
}








