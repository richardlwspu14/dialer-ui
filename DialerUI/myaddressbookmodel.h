#ifndef MYADDRESSBOOKMODEL_H
#define MYADDRESSBOOKMODEL_H

#include <QAbstractTableModel>
#include <vector>
class MyAddressBookModel : public QAbstractTableModel
{
public:
    MyAddressBookModel(QObject *parent);

    // QAbstractItemModel interface
public:
    int rowCount(const QModelIndex &parent) const;
    int columnCount(const QModelIndex &parent) const;
    QVariant data(const QModelIndex &index, int role) const;
    void openFile(QString filepath);
    QString getPhoneNumber(int index);
    void setFilterNumber(QString fNum);
    QString charToNum();
    void changeFullNameToNum();

private:
    std::vector<QString> firstNames;
    std::vector<QString> lastNames;
    std::vector<QString> phoneNumbers;
    std::vector<QString> firstNamesValue;
    std::vector<QString> lastNamesValue;
    std::vector<int> filteredIndex;
};

#endif // MYADDRESSBOOKMODEL_H
