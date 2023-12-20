#include "widget.h"
#include "MyWidget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    MyWidget mw;
    mw.setFixedSize(170, 170);
    mw.setToolTip("<H1>Это подсказка!</H1>");
    //mw.setToolTip("&Это подсказка!");
    mw.show();
    return  app.exec();
}
