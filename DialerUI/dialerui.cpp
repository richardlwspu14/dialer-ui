#include "dialerui.h"
#include "ui_dialerui.h"

Dialerui::Dialerui(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Dialerui)
{
    ui->setupUi(this);
}

Dialerui::~Dialerui()
{
    delete ui;
}

