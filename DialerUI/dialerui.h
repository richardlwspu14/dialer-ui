#ifndef DIALERUI_H
#define DIALERUI_H

#include <QMainWindow>

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
    void on_pushButton_clicked();

private:
    Ui::Dialerui *ui;
};
#endif // DIALERUI_H
