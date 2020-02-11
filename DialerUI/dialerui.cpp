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
    loadImage();
}

void Dialerui::loadImage(){
    QString iconOneFileName = ":/images/1.png";
    QString iconTwoFileName = ":/images/2.png";
    QString iconThreeFileName = "3.png";
    QString iconFourFileName = "4.png";
    QString iconFiveFileName = "5.png";
    QString iconSixFileName = "6.png";
    QString iconSevenFileName = "7.png";
    QString iconEightFileName = "8.png";
    QString iconNineFileName = "9.png";
    QString iconTenFileName = "10.png";
    QString iconZeroFileName = "0.png";
    QString iconStarFileName = "star.png";
    QString iconHashFileName = "hash.png";
    QString iconCallFileName = ":/images/CallerIcon.png";

    if(iconOne.load(iconOneFileName)){
        std::cout<< "Image loaded successfully"<<std::endl;
        iconOne = iconOne.scaled(ui->One->size(),Qt::KeepAspectRatioByExpanding);
    }
    if(iconTwo.load(iconTwoFileName)){
        std::cout<< "Image loaded successfully"<<std::endl;
        iconTwo = iconTwo.scaled(ui->Two->size(),Qt::KeepAspectRatioByExpanding);
    }
    if(iconCall.load(iconCallFileName)){
        std::cout<< "Image loaded successfully"<<std::endl;
        iconCall = iconCall.scaled(ui->Call->size(),Qt::KeepAspectRatioByExpanding);
    }


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
    ui->dialLabel->setText(myModel->getPhoneNumber(index.row()));

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

void Dialerui::filterPhoneNumber() {
    myModel->setFilterNumber(getPhoneNumber());
    //if(getPhoneNumber()==ui->dialLabel->text())
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
    callingInfo.setStyleSheet("background-color: rgb(255, 255, 255)");
    callingInfo.setStyleSheet("font:bold italic 12px Arial");
    callingInfo.setStandardButtons(0);
    callingInfo.setWindowTitle("Caller");
    QAbstractButton* ExitButton = callingInfo.addButton(tr("Exit"),QMessageBox::YesRole);
    ExitButton->setStyleSheet("background-color: rgb(255, 255, 255)");
    ExitButton->setStyleSheet("border: none");
    ExitButton->setStyleSheet("font:12px Arial");
    callingInfo.setText("Calling "+getPhoneNumber()+" ...");
    callingInfo.exec();
    if(callingInfo.clickedButton()== ExitButton){
        ui->dialLabel->clear();
    }
}

void Dialerui::on_actionExit_triggered()
{
    QApplication::quit();
}

void Dialerui::on_Star_clicked()
{
    appendDash("*");
}

void Dialerui::on_Hash_clicked()
{
    appendDash("#");
}
