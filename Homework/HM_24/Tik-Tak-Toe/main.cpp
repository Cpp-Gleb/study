#include "mainwindow.h"

#include <QApplication>

//vector<int> arr

class Bot{
private:
    int field[9];
public:
    Bot();

};



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
