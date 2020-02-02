#include "dialerui.h"
#include "ui_dialerui.h"
#include <QFileDialog>
#include <iostream>

Dialerui::Dialerui(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Dialerui),
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
{
    std::cout << index.row() << "," << index.column() << std::endl;
    ui->label->setText(myModel->getPhoneNumber(index.row()));
}

void Dialerui::on_pushButton_clicked()
{

    myModel->setFilterNumber("9");
    ui->tableView->setModel(myModel);
    ui->tableView->setVisible(myModel);
}
