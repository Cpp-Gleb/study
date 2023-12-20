#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QDialog>
//--------------------------------------------
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    setMouseTracking(true);
    m_plblX = new QLabel (this);
    m_plblY = new QLabel (this);

    statusBar()->addWidget(m_plblY);
    statusBar()->addWidget(m_plblX);
    //statusBar()->showMessage("Hello");

    QMenu *pm_ht = menuBar()->addMenu(" &Файл |");

        QAction *action_open = new QAction(tr("Открыть..."), pm_ht);
        pm_ht->addAction(action_open);
        connect(action_open, SIGNAL(triggered()), this, SLOT(slotOpenFile()));


    QMenu *pm_hj = menuBar()->addMenu(" &Редактировать |");

        QAction *action_color = new QAction(tr("Цвет..."), pm_hj);
        pm_hj->addAction(action_color);
        connect(action_color, SIGNAL(triggered()), this, SLOT(slotEditColor()));

        QAction *action_font = new QAction(tr("Шрифт..."), pm_hj);
        pm_hj->addAction(action_font);
        connect(action_font, SIGNAL(triggered()), this, SLOT(slotFontSmth()));

        QAction *action_name = new QAction(tr("Имя_последней_кнопки..."), pm_hj);
        pm_hj->addAction(action_name);
        connect(action_name, SIGNAL(triggered()), this, SLOT(slotNameButton()));

   QMenu *pm_menu = menuBar()->addMenu(" &Menu |");
       QMenu *pm_sub = new QMenu(" &SubMenu |",pm_menu);
       pm_menu->addMenu(pm_sub);
       QAction *action_progress = new QAction(tr("Progress..."), pm_sub);
       pm_sub->addAction(action_progress);
       connect(action_progress, SIGNAL(triggered()), this, SLOT(slotProgressSmth()));

contextMenuCreate();

}
//------------------------------------
void MainWindow::contextMenuCreate()
{
  /*  QAction *add, *del, *change;

    //переопределение сигналов  с пом класса QSignalMapper для сокращения кол-ва слотов методов
    QSignalMapper *pSigMapAdd = new QSignalMapper(this);
    connect (pSigMapAdd, SIGNAL(mapped(const int &)), this, SLOT(slotAdd(const int &)));

    QSignalMapper *pSigMapDel = new QSignalMapper(this);
    connect (pSigMapDel, SIGNAL(mapped(const int &)), this, SLOT(slotDel(const int &)));

    QSignalMapper *pSigMapChng = new QSignalMapper(this);
    connect (pSigMapChng, SIGNAL(mapped(const int &)), this, SLOT(slotChange(const int &)));

    for(int i = 0; i < TABLE_SHS_COUNT; ++i) {

       add = new QAction("&Добавить", this);
       m_vec_add.push_back(add);
       connect (m_vec_add[i], SIGNAL(triggered()), pSigMapAdd, SLOT(map()));
       pSigMapAdd->setMapping(m_vec_add[i],i);

       del = new QAction("&Удалить", this);
       m_vec_del.push_back(del);
       connect(m_vec_del[i], SIGNAL(triggered()), pSigMapDel, SLOT(map()));
       pSigMapDel->setMapping(m_vec_del[i],i);

       change = new QAction("&Изменить", this);
       m_vec_chng.push_back(change);
       connect (m_vec_chng[i], SIGNAL(triggered()), pSigMapChng, SLOT(map()));
       pSigMapChng->setMapping(m_vec_chng[i],i);
     }

 */   this->setContextMenuPolicy(Qt::CustomContextMenu);
    connect(this, SIGNAL(customContextMenuRequested(QPoint)),
            this, SLOT(slotEditSmth(QPoint)));


}
//---------------------------------
void MainWindow::slotEditSmth(QPoint pos_)
{
    QAction *add, *del, *ch;
    add = new QAction("&Добавить", this);
    connect (add, SIGNAL(triggered()), this, SLOT(slotAdd()));

    del = new QAction("&Удалить", this);
    connect (del, SIGNAL(triggered()), this, SLOT(slotDel()));

    ch = new QAction("&Изменить", this);
    connect(ch, SIGNAL(triggered()), this, SLOT(slotCh()));


    QMenu *menu;
    menu = new QMenu(this);
    menu->addAction(add);
    menu->addAction(del);
   menu->addAction(ch);
   //menu->popup(ui->pushButton->viewport()->mapToGlobal(pos_));
}
//------------------------
void MainWindow::slotAdd()
{

}
//------------------------
void MainWindow::slotDel()
{

}
//------------------------
void MainWindow::slotCh()
{

}
//------------------   ПОДМЕНЮ  ---------------------------------------------------
void MainWindow:: slotOpenFile()
{
    QString str = QFileDialog::getOpenFileName(0, "Open Dialog", "", "*.cpp *.h");
}
//----------------------------------------------
void MainWindow::slotFontSmth()
{
  bool bOk;
  QFont fnt = QFontDialog::getFont(&bOk);
  ui->pushButton_2->setFocus();
  ui->pushButton_2->setFont(fnt);

}
//----------------------------------------------
void MainWindow::slotEditColor()
{
    QColor color = QColorDialog::getColor(Qt::blue);
    if(color.isValid()){
        QPalette pl;
        pl.setColor(ui->pushButton_2->backgroundRole(),color);
       ui->pushButton_2->setFocus();
       ui->pushButton_2->setPalette(pl);
    }
}
//----------------------------------------------
void MainWindow::slotNameButton()
{
    bool bOk;
    QString str = QInputDialog::getText(0, "Input", "Имя кнопки", QLineEdit::Normal, "Кнопка",&bOk);
    ui->pushButton_6->setFocus();
    ui->pushButton_6->setText(str);
}
//----------------------------------------------
void MainWindow::slotProgressSmth()
{
    int n = 1000000;
    QProgressDialog* pprd = new QProgressDialog("Progressing...", "&Cancel", 0, n);
    pprd->setMinimumDuration(9000);
    pprd->setWindowTitle("Please, wait !");
    for(int i =0; i <n; ++i){
        pprd->setValue(i);
        qApp->processEvents();
        if(pprd->wasCanceled()){
            break;
        }
    }
    pprd->setValue(n);
    delete pprd;
}
//----------------------------------------------
MainWindow::~MainWindow()
{
    delete ui;
}

//----------------------------------------------
void MainWindow::on_pushButton_clicked()
{
    QMessageBox::information(0, "Information", "Operation Complete");
}
//-----------------------------------------------

void MainWindow::on_pushButton_5_clicked()
{
  QMessageBox::about(0, "About", "My Program Ver. 1.0");
}

//--------------------------------------------------
void MainWindow::on_pushButton_4_clicked()
{
    int n =
    QMessageBox::critical(0,
    "Attention",
    "This operation will make your "
    "computer unusable, continue?",
    QMessageBox::Yes | QMessageBox::Default,
    QMessageBox::No,
    QMessageBox::Cancel | QMessageBox::Escape
    );
    if (n == QMessageBox::Yes) {
    // Do it!
    }
}
//---------------------------------------------------

void MainWindow::on_pushButton_3_clicked()
{
    int n = QMessageBox::warning(0,
                                 "Warning",
                                 "The text in the file has changed,"
                                 "\n Do you want to save the changes?",
                                 "Yes",
                                 "No",
                                 QString(),
                                 0,
                                 1
                                );
    if(!n) {
        // Saving the changes!
    }
}

//----------------------------------------------------
void MainWindow::on_pushButton_2_clicked()
{
    QMessageBox* pmbx =
                        new QMessageBox("MessageBox",
                        "<b>A</b> <i>Simple</i>   <u>Message</u>",
                        QMessageBox::Information,
                        QMessageBox::Yes,
                        QMessageBox::No,
                        QMessageBox::Cancel | QMessageBox::Escape);
    int n = pmbx->exec();
    delete pmbx;
    if (n == QMessageBox::Yes)
    {
      //Нажата кнопка Yes
    }
}

//-----------------------------------------------------

void MainWindow::on_pushButton_6_clicked()
{
    (new QErrorMessage(this))->showMessage("Ошибка ! Вот");
}
//---------------------------------------------------------
