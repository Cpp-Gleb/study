#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QRegularExpressionValidator>
#include <QRegularExpression>
#include <QSignalMapper>
#include <QDebug>

//-----------------------------------------------------
void MainWindow::func(){
    QVector<int> vec;
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(40);
    for(int i = 0; i < 3;i++)
        qDebug() << vec.at(i);

    QQueue<QString> que;
    que.enqueue("Era");
    que.enqueue("Corvus Corax");
    que.enqueue("Gathering");
    while ( !que.empty()) {
        qDebug() << "Element:" <<que.dequeue();
    }

    QStack<QString> stk;
    stk.push("Era");
    stk.push("Corvus Corax");
    stk.push ( "Gathering");
    while (!stk.empty()) {

        qDebug() << "Element:" << stk.pop();

    }
    // stk.top();

    QList<int> list;
    list << 10 << 20 << 30;
    QList<int>::iterator it = list.begin();
    while (it != list.end()) {
        qDebug() << "Element:" << *it;
        ++it;
    }

    QMap<QString, QString> mapPhonebook;
    mapPhonebook ["Ivan"]="+49 631322187";
    mapPhonebook [ "Vlad"]="+49 631322186";
    mapPhonebook [ "Kate"]="+49 631322181";
    QMap<QString, QString>::iterator its = mapPhonebook.begin();
    for (;its != mapPhonebook.end(); ++its) {
        qDebug() << "Name:" << its.key() <<" Phone:" << its.value();
    }

    if (mapPhonebook. contains ( "Ivan") ) {
        qDebug () << "Phone:" << mapPhonebook ["Ivan"];
    }

    QMultiMap<QString, QString> MapPhonebook;
    MapPhonebook.insert ( "Alex", "+49 631322181");
    MapPhonebook.insert ( "Mary", "+49 631322186");
    MapPhonebook.insert ( "Jane", "+49 631322000");
    MapPhonebook.insert ( "Max", "+49 631322010");
    MapPhonebook.insert ( "Anton", "+49 631322187");
    MapPhonebook.insert("Anton", "+49 631322999");
    QMultiMap<QString, QString>::iterator itx = MapPhonebook.find("Anton");

    for (; itx != MapPhonebook.end() && itx.key() == "Anton"; ++itx)
    {
        qDebug() << itx.value() ;
    }

}

//-----------------------------------------------------
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ValidatorInUse();
    VectorInUse();
    MapperInUse();
    func();

}
//-----------------------------------------------------
MainWindow::~MainWindow()
{
    delete ui;
}
//---------------------------------------------------------
void MainWindow::ValidatorInUse()
{
    QRegularExpressionValidator * regValid[4];

    QRegularExpression regExp01_89("0[1-9]|[1-8][0-9]");       // допустимые значения 01-89
    regValid[0]= new QRegularExpressionValidator(regExp01_89, this);

    QRegularExpression regExp01_03_13("0[1-3]|1[3]");  // допустимые значения 01-03,13
    regValid[1]= new QRegularExpressionValidator(regExp01_03_13, this);

    QRegularExpression regExp02_16("0[2-9]|1[0-6]");    // допустимые значения 02-16
    regValid[2]= new QRegularExpressionValidator(regExp02_16, this);

    QRegularExpression regEmail(" ( [a-zA-Z0-9 _ \\-\\.] +)@ ( [a-zA-Z0-9 _.-]) +\\. ( [a-zA-Z] {2, 4}] [0- 9] { 1, 3}) ");
    regValid[3]= new QRegularExpressionValidator(regEmail, this);

         ui->le_0->setValidator(regValid[0]);
         ui->le_0->setInputMask("00");
         ui->le_0->setText("02");
         ui->le_0->setCursorPosition(0);

         ui->le_1->setValidator(regValid[1]);
         ui->le_1->setInputMask("00");
         ui->le_1->setText("01");
         ui->le_1->setCursorPosition(0);

         ui->le_2->setValidator(regValid[2]);
         ui->le_2->setInputMask("00");
         ui->le_2->setText("02");
         ui->le_2->setCursorPosition(0);

         ui->le_3->setValidator(regValid[3]);
         ui->le_3->setInputMask("Input@mail.ru");
         ui->le_3->setText("Input@mail.ru");
         ui->le_3->setCursorPosition(0);

}
//-------------------------------------------------------------------
void MainWindow::VectorInUse(){

    m_vec_but.push_back(ui->pb_1);
    m_vec_but.push_back(ui->pb_2);
    m_vec_but.push_back(ui->pb_3);
    m_vec_but.push_back(ui->pb_4);
    m_vec_but.push_back(ui->pb_5);
    m_vec_but.push_back(ui->pb_6);

}
//-------------------------------------------------------------------
void MainWindow::slotAdd(int num)
{
    int n = ui->lcdNumber->value();
    ui->lcdNumber->display(n+num);
}
//-------------------------------------------------------------------
void MainWindow::slotSub(int num)
{
   int n = ui->lcdNumber->value();
    ui->lcdNumber->display(n - num);
}
//-------------------------------------------------------------------
void MainWindow::MapperInUse()
{

    //переопределение сигналов  с пом класса QSignalMapper для сокращения кол-ва слотов методов
    QSignalMapper *pSigMapAdd = new QSignalMapper(this);
    connect (pSigMapAdd, SIGNAL(mapped(int)), this, SLOT(slotAdd(int)));

    QSignalMapper *pSigMapSub = new QSignalMapper(this);
    connect (pSigMapSub, SIGNAL(mapped(int)), this, SLOT(slotSub(int)));


    for(int i = 0; i < m_vec_but.count(); ++i) {

        if(i%2){ // четные  sub
          connect (m_vec_but[i], SIGNAL(clicked()), pSigMapSub, SLOT(map()));
          int num = 1;
          pSigMapSub->setMapping(m_vec_but[i],num);
        }
        else{ // нечет add
            connect (m_vec_but[i], SIGNAL(clicked()), pSigMapAdd, SLOT(map()));
            int num = 1;
            pSigMapAdd->setMapping(m_vec_but[i],num);
        }

     }
}

//----------------------------------------------------------------------

