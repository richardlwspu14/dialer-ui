#include "dialerui.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Dialerui w;
    w.show();
    return a.exec();
}
