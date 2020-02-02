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

    void on_pushButton_clicked();

    void on_lineEdit_textEdited(const QString &arg1);

private:
    Ui::Dialerui *ui;
    MyAddressBookModel *myModel;
};
#endif // DIALERUI_H
