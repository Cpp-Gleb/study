#include "widget.h"
#include <QtWidgets>
#include <QApplication>
#include "mousefilter.h"

int main(int argc, char *argv[]){
    QApplication a(argc, argv);

    QWidget *wgt = new QWidget;

    QVBoxLayout* pvbxLayout0 = new QVBoxLayout;

    QLineEdit *le_txt = new QLineEdit("QLineEdit");
    le_txt->installEventFilter(new MouseFilter(le_txt));
    //le_txt.show();

    QLabel* lbl = new QLabel("QLabel");
    lbl->installEventFilter(new MouseFilter(lbl));
    //lbl.show();

    QPushButton* pb_1 = new QPushButton("QPushButton");
    pb_1->installEventFilter(new MouseFilter(pb_1));
    //pb_1.show();

    pvbxLayout0 ->addWidget(le_txt);
    pvbxLayout0->addWidget(lbl);
    pvbxLayout0->addWidget(pb_1);
    wgt->setLayout(pvbxLayout0);
    wgt->resize(500,300);
    wgt->show()
;    // Widget w;
   // w.show();
    return a.exec();
}
