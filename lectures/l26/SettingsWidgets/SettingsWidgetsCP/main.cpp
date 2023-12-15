#include "widget.h"
#include <QtWidgets>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget wgt;
    wgt.setWindowTitle("Виджеты настройки");
    //QString APP_ABS_PATH = QCoreApplication::applicationDirPath();
   // QString APP_ABS_NAME = QCoreApplication::applicationName();
    //QFile file(APP_ABS_PATH + "/file_in.dat");
    //---------------------------------------


    QLabel *plb2_ = new QLabel("&Poka");
    QLabel *plb_ = new QLabel("&Privet");
    QMovie *mov = new QMovie("./myNY.gif");
    QPixmap pic;
    pic.load("./stone.jpg");
    plb_->setMovie(mov);
    plb2_->setPixmap(pic);
    mov->start();

    QHBoxLayout* phbxLayout0 = new QHBoxLayout;
    phbxLayout0->addWidget(plb_);

    //---------------------------------------
    QSlider* psld =new QSlider(Qt::Horizontal);
    QLabel * plb =new QLabel ("1") ;
    psld->setRange(0,20);
    psld->setPageStep(1);
    psld->setValue(1);
    psld->setTickInterval(2);
    psld->setTickPosition(QSlider::TicksBelow);
    QObject::connect(psld, SIGNAL(valueChanged(int)),plb, SLOT(setNum(int)));
    QHBoxLayout* phbxLayout1 = new QHBoxLayout;
    phbxLayout1->addWidget(psld);
    phbxLayout1->addWidget(plb);
    //----------------------------------------------
    QLCDNumber* plcd = new QLCDNumber(4);
    QScrollBar* phsb = new QScrollBar(Qt::Horizontal);

    QObject::connect(phsb, SIGNAL(valueChanged(int)),plcd, SLOT(display(int)));
    QHBoxLayout* phbxLayout2 = new QHBoxLayout;

    phbxLayout2->addWidget(phsb);
    phbxLayout2->addWidget(plcd);
    //-----------------------------------------------
    QDial* pdia =new QDial;
    QProgressBar* pprb =new QProgressBar;
    QPushButton *pbt = new QPushButton;
    pdia->setRange(0, 100);
    pdia->setNotchTarget(5);
    pdia->setNotchesVisible(true);
    QObject::connect(pdia, SIGNAL(valueChanged(int)),pprb, SLOT(setValue(int)));
    QHBoxLayout* phbxLayout3 = new QHBoxLayout;

    phbxLayout3->addWidget(pdia);
    phbxLayout3->addWidget(pprb);
    phbxLayout3->addWidget(pbt);
    //-----------------------------------------------

    QVBoxLayout* pvbxLayout = new QVBoxLayout;
    pvbxLayout->addLayout(phbxLayout0);
    pvbxLayout->addLayout(phbxLayout1);
    pvbxLayout->addLayout(phbxLayout2);
    pvbxLayout->addLayout(phbxLayout3);
    wgt.setLayout(pvbxLayout);
    wgt.resize(500, 300);
    wgt.show();
    return a.exec();

}
