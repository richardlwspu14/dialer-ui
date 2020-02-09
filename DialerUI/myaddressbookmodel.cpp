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

void MyAddressBookModel::setFilterNumber(QString fNum){
    // clear filtered index and then I will rebuild the index.
        filteredIndex.clear();
        changeFullNameToNum();
        // check if phone numbers are starting with fStr.

        QString temp = fNum;

        for (int i = 0; i < temp.size(); i++) {
            if (temp[i] == '-') {
                temp.remove(i, 1);
            }
        }

        for (size_t i = 0; i < firstNames.size(); i++) {
            if(firstNamesValue[i].startsWith(temp)){
                filteredIndex.push_back(i+1);
                std::cout << firstNames[i].toStdString()<< std::endl;
                std::cout << std::endl;
            }
        }

        for (size_t i = 0; i < lastNames.size(); i++) {
            if(lastNamesValue[i].startsWith(temp)){
                filteredIndex.push_back(i+1);
                std::cout << lastNames[i].toStdString()<< std::endl;
                std::cout << std::endl;
            }
        }

        for (size_t i = 0; i < phoneNumbers.size(); i++) {
            if(phoneNumbers[i].startsWith(fNum)){
                filteredIndex.push_back(i+1);
                std::cout << phoneNumbers[i].toStdString()<< std::endl;
                std::cout << std::endl;
            }
        }

        emit layoutChanged();
}

void MyAddressBookModel::changeFullNameToNum(){
    for (auto& names : firstNames) {
        firstNamesValue.push_back(names);
    }

    for (auto& word : firstNamesValue) {
            for (auto& letter : word) {
                if (letter.toLower() == 'a' || letter.toLower() == 'b' ||
                    letter.toLower() == 'c') {
                    letter = '2';
                } else if (letter.toLower() == 'd' || letter.toLower() == 'e' ||
                           letter.toLower() == 'f') {
                    letter = '3';
                } else if (letter.toLower() == 'g' || letter.toLower() == 'h' ||
                           letter.toLower() == 'i') {
                    letter = '4';
                } else if (letter.toLower() == 'j' || letter.toLower() == 'k' ||
                           letter.toLower() == 'l') {
                    letter = '5';
                } else if (letter.toLower() == 'm' || letter.toLower() == 'n' ||
                           letter.toLower() == 'o') {
                    letter = '6';
                } else if (letter.toLower() == 'p' || letter.toLower() == 'q' ||
                           letter.toLower() == 'r' || letter.toLower() == 's') {
                    letter = '7';
                } else if (letter.toLower() == 't' || letter.toLower() == 'u' ||
                           letter.toLower() == 'v') {
                    letter = '8';
                } else if (letter.toLower() == 'w' || letter.toLower() == 'x' ||
                           letter.toLower() == 'y' || letter.toLower() == 'z') {
                    letter = '9';
                } else if (letter == '+') {
                    letter = '0';
                } else {

                }
            }
        }

    for (auto& names : lastNames) {
        lastNamesValue.push_back(names);
    }

    for (auto& word : lastNamesValue) {
            for (auto& letter : word) {
                if (letter.toLower() == 'a' || letter.toLower() == 'b' ||
                    letter.toLower() == 'c') {
                    letter = '2';
                } else if (letter.toLower() == 'd' || letter.toLower() == 'e' ||
                           letter.toLower() == 'f') {
                    letter = '3';
                } else if (letter.toLower() == 'g' || letter.toLower() == 'h' ||
                           letter.toLower() == 'i') {
                    letter = '4';
                } else if (letter.toLower() == 'j' || letter.toLower() == 'k' ||
                           letter.toLower() == 'l') {
                    letter = '5';
                } else if (letter.toLower() == 'm' || letter.toLower() == 'n' ||
                           letter.toLower() == 'o') {
                    letter = '6';
                } else if (letter.toLower() == 'p' || letter.toLower() == 'q' ||
                           letter.toLower() == 'r' || letter.toLower() == 's') {
                    letter = '7';
                } else if (letter.toLower() == 't' || letter.toLower() == 'u' ||
                           letter.toLower() == 'v') {
                    letter = '8';
                } else if (letter.toLower() == 'w' || letter.toLower() == 'x' ||
                           letter.toLower() == 'y' || letter.toLower() == 'z') {
                    letter = '9';
                } else if (letter == '+') {
                    letter = '0';
                } else {

                }
            }
        }
}

