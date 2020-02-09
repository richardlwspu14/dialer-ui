#include "myaddressbookmodel.h"
#include "dialerui.h"
#include <QFile>
#include <iostream>
#include <QMessageBox>
#include <QTextStream>

MyAddressBookModel::MyAddressBookModel(QObject *parent): QAbstractTableModel(parent)
{

}

int MyAddressBookModel::rowCount(const QModelIndex &parent) const
{
    return filteredIndex.size();
}

int MyAddressBookModel::columnCount(const QModelIndex &parent) const
{
    return 3;
}

QVariant MyAddressBookModel::data(const QModelIndex &index, int role) const
{
    if(role == Qt::DisplayRole){
        switch(index.column()){
        case 0:
            return firstNames.at(filteredIndex[index.row()] - 1);
        case 1:
            return lastNames.at(filteredIndex[index.row()] - 1);
        case 2:
            return phoneNumbers.at(filteredIndex[index.row()] - 1);
        }

//        return QString("Row%1 , Column%2")
//                .arg(index.row())
//                .arg(index.column());
    }

    return QVariant();
}

void MyAddressBookModel:: openFile(QString filepath)
{
    QFile file(filepath);
    if(!file.open(QIODevice::ReadOnly)) {
        QMessageBox::information(0, "error", file.errorString());
        return;
    }
    QTextStream in(&file);
    firstNames.clear();
    lastNames.clear();
    phoneNumbers.clear();

    for(int i = 0; !in.atEnd(); i++){
        QString line = in.readLine();
        QStringList fields = line.split(",");

        if(i == 0)
            continue;

        for(int j = 0; j < fields.length(); j++){
            std::cout << "[" << j << "]" << fields[j].toStdString();
        }
        std::cout << std::endl;

        firstNames.push_back(fields[0]);
        lastNames.push_back(fields[1]);
        phoneNumbers.push_back(fields[7]);

        filteredIndex.push_back(i);
    }
    file.close();

    emit layoutChanged();
}

QString MyAddressBookModel::getPhoneNumber(int index)
{
    return phoneNumbers.at(filteredIndex[index] - 1);
}

void MyAddressBookModel::setFilterNumber(QString fNum,QString num)
{
    // clear filtered index and then I will rebuild the index.
        filteredIndex.clear();
        // check if phone numbers are starting with fStr.
        for (size_t i = 0; i < phoneNumbers.size(); i++) {
            if(phoneNumbers[i].startsWith(num)){
                filteredIndex.push_back(i+1);
                std::cout << phoneNumbers[i].toStdString()<< std::endl;
                std::cout << std::endl;
            }
            else if (phoneNumbers[i].startsWith(fNum)) {
                filteredIndex.push_back(i + 1);
                std::cout << phoneNumbers[i].toStdString()<< std::endl;
                std::cout << std::endl;
            }
        }

        emit layoutChanged();
}
QString MyAddressBookModel::charToNum(){
    QChar c;
    if(c == 'A' || c == 'B' || c == 'C')
        return "2";
    else if(c == 'D' || c == 'E' || c == 'F')
        return "3";
    else if(c == 'G' || c == 'H' || c == 'I')
        return "4";
    else if(c == 'J' || c == 'K' || c == 'L')
        return "5";
    else if(c == 'M' || c == 'N' || c == 'O')
        return "6";
    else if(c == 'P' || c == 'Q' || c == 'R' || c == 'S')
        return "7";
    else if(c == 'T' || c == 'U' || c == 'V')
        return "8";
    else if(c == 'W' || c == 'X' || c == 'Y' || c == 'Z')
        return "9";
    else if(c == '0')
        return "+";
    else{

    }
}
