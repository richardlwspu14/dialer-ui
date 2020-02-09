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
    appendDash("1");
    filterPhoneNumber();
}

void Dialerui::on_Two_clicked()
{   appendDash("2");
    filterPhoneNumber();
}

void Dialerui::on_Three_clicked()
{
    appendDash("3");
    filterPhoneNumber();

}

void Dialerui::on_Four_clicked()
{
   appendDash("4");
   filterPhoneNumber();

}

void Dialerui::on_Five_clicked()
{
    appendDash("5");
    filterPhoneNumber();

}

void Dialerui::on_Six_clicked()
{
    appendDash("6");
    filterPhoneNumber();

}

void Dialerui::on_Seven_clicked()
{
     appendDash("7");
     filterPhoneNumber();

}

void Dialerui::on_Eight_clicked()
{
    appendDash("8");
    filterPhoneNumber();

}

void Dialerui::on_Nine_clicked()
{
    appendDash("9");
    filterPhoneNumber();

}

void Dialerui::on_Zero_clicked()
{
    appendDash("0");
    filterPhoneNumber();
}

void Dialerui::appendDash(QString number) {
    if (ui->dialLabel->text().length() == 3 || ui->dialLabel->text().length() == 7) {
        ui->dialLabel->setText(ui->dialLabel->text().append("-"));
        ui->dialLabel->setText(ui->dialLabel->text().append(number));
    }else {
        ui->dialLabel->setText(ui->dialLabel->text().append(number));
    }
}

QString Dialerui::getPhoneNumber() {
        return ui->dialLabel->text();
    }
QString Dialerui::getName(){
    return ui->label->text();
}


void Dialerui::filterPhoneNumber() {
    myModel->setFilterNumber(getPhoneNumber(),getName());
    }


void Dialerui::on_Delete_clicked()
{
    int dialSize = ui->dialLabel->text().size();
    QString text = ui->dialLabel->text();
    if(dialSize == 9)
        ui->dialLabel->setText(text.remove(7,2));
    else if(dialSize == 5)
        ui->dialLabel->setText(text.remove(3,2));
    else
        ui->dialLabel->setText(text.left(dialSize-1));
    filterPhoneNumber();
}

void Dialerui::on_Call_clicked()
{
    QMessageBox callingInfo;
    callingInfo.setStandardButtons(0);
    QAbstractButton* ExitButton = callingInfo.addButton(tr("Exit"),QMessageBox::YesRole);
    callingInfo.setText("Calling "+getPhoneNumber()+" ...");
    callingInfo.exec();
    if(callingInfo.clickedButton()== ExitButton){
        ui->dialLabel->clear();
    }
}
