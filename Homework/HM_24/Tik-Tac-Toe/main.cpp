#include "mainwindow.h"

#include <QApplication>

class Bot{
private:
    int field[9];
public:
    Bot();
    void Logic();

};

Bot::Bot(){
    for(int i = 0; i < 9; i++){
        field[i] = 0;
    }
}

void Bot::Logic(){
    field[6] = -1;
    if(field[1] != 0){
        field[8] = -1;
    }
    else if(field[5] != 0){
        field[0] = -1;
    }
    else if(field[3] != 0){
        field[7] = -1;
    }
    else if(field[7] != 0){
        field[3] = -1;
    }
    else{
        field[2] = 0;
    }
    // не понимаю как сделать поочередное нажатие

}




int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
