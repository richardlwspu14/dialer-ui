#ifndef DIALERUI_H
#define DIALERUI_H

#include <QMainWindow>
#include <myaddressbookmodel.h>
QT_BEGIN_NAMESPACE
namespace Ui { class Dialerui; }
QT_END_NAMESPACE

class Dialerui : public QMainWindow
{
    Q_OBJECT

public:
    Dialerui(QWidget *parent = nullptr);
    ~Dialerui();

private slots:
    void on_actionOpen_an_Address_Book_triggered();

    void on_tableView_clicked(const QModelIndex &index);

    void on_Nine_clicked();

    void on_Eight_clicked();

    void on_Seven_clicked();

    void on_One_clicked();

    void on_Two_clicked();

    void on_Three_clicked();

    void on_Four_clicked();

    void on_Five_clicked();

    void on_Six_clicked();

    void on_Zero_clicked();

    void appendDash(QString number);

    QString getPhoneNumber();

    QString getName();

    void filterPhoneNumber();

    void on_Delete_clicked();

    void on_Call_clicked();

private:
    Ui::Dialerui *ui;
    MyAddressBookModel *myModel;
};
#endif // DIALERUI_H
