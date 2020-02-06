#include "dialerui.h"
#include "ui_dialerui.h"
#include <QFileDialog>
#include <iostream>
#include <QMessageBox>

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
    ui->dialLabel->clear();
}

void Dialerui::on_tableView_clicked(const QModelIndex &index)
{   ui->tableView->setUpdatesEnabled(true);
    std::cout << index.row() << "," << index.column() << std::endl;
    ui->label->setText(myModel->getPhoneNumber(index.row()));
}

void Dialerui::on_One_clicked()
{
//    compareNum = ui->dialLabel->text();
    ui->dialLabel->setText(ui->dialLabel->text().append("1"));
//    compareNum.append("1");

    //appendDash();
//    myModel->setFilterNumber(getPhoneNumber());
    filterPhoneNumber();
}

void Dialerui::on_Two_clicked()
{
//    compareNum = ui->dialLabel->text();
    ui->dialLabel->setText(ui->dialLabel->text().append("2"));
//    compareNum.append("2");
    //appendDash();
//    myModel->setFilterNumber("2");
    filterPhoneNumber();
}

void Dialerui::on_Three_clicked()
{
    ui->dialLabel->setText(ui->dialLabel->text().append("3"));
//    compareNum.append("3");
    //appendDash();
//    myModel->setFilterNumber("3");
    filterPhoneNumber();

}

void Dialerui::on_Four_clicked()
{
   ui->dialLabel->setText(ui->dialLabel->text().append("4"));
//   compareNum.append("4");
   //appendDash();
//   myModel->setFilterNumber("4");
   filterPhoneNumber();

}

void Dialerui::on_Five_clicked()
{
    ui->dialLabel->setText(ui->dialLabel->text().append("5"));
//    compareNum.append("5");
    //appendDash();
//    myModel->setFilterNumber("5");
    filterPhoneNumber();

}

void Dialerui::on_Six_clicked()
{
    ui->dialLabel->setText(ui->dialLabel->text().append("6"));
//    compareNum.append("6");
    //appendDash();
//    myModel->setFilterNumber("6");
    filterPhoneNumber();

}

void Dialerui::on_Seven_clicked()
{
     ui->dialLabel->setText(ui->dialLabel->text().append("7"));
//     compareNum.append("7");
     //appendDash();
//     myModel->setFilterNumber("7");
     filterPhoneNumber();

}

void Dialerui::on_Eight_clicked()
{
    ui->dialLabel->setText(ui->dialLabel->text().append("8"));
//    compareNum.append("8");
    //appendDash();
//    myModel->setFilterNumber("8");
    filterPhoneNumber();

}

void Dialerui::on_Nine_clicked()
{
    ui->dialLabel->setText(ui->dialLabel->text().append("9"));
//    compareNum.append("9");
    //appendDash();
//    myModel->setFilterNumber("9");
    filterPhoneNumber();

}

void Dialerui::on_Zero_clicked()
{
    ui->dialLabel->setText(ui->dialLabel->text().append("0"));
//    compareNum.append("0");
    //appendDash();
//    myModel->setFilterNumber("0");
    filterPhoneNumber();

}

void Dialerui::appendDash() { // make it private method?
    if (ui->dialLabel->text().length() == 3 || ui->dialLabel->text().length() == 7) {
        ui->dialLabel->setText(ui->dialLabel->text().append("-"));
    }
}

QString Dialerui::getPhoneNumber() {
        return ui->dialLabel->text();
    }


void Dialerui::filterPhoneNumber() {
    myModel->setFilterNumber(getPhoneNumber());
    appendDash();
    }


void Dialerui::on_Delete_clicked()
{
    int dialSize = ui->dialLabel->text().size();
    QString dialText = ui->dialLabel->text();

    ui->dialLabel->setText(dialText.left(dialSize-1));
}
