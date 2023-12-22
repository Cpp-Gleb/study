#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtWidgets>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    contextMenuCreate();
    this->setWindowTitle("Работа с файлами и директориями.");
}
//------------------------------------------------
void MainWindow::contextMenuCreate()
{
    ui->te_fl1->setContextMenuPolicy(Qt::CustomContextMenu);
        connect(ui->te_fl1, SIGNAL(customContextMenuRequested(QPoint)),
                this, SLOT(slotEd1Smth(QPoint)));

    ui->te_fl2->setContextMenuPolicy(Qt::CustomContextMenu);
        connect(ui->te_fl2, SIGNAL(customContextMenuRequested(QPoint)),
               this, SLOT(slotEd2Smth(QPoint)));
}
//-------------------------------------------------
void MainWindow::slotEd1Smth(QPoint pos_)
{
    QAction *open, *font, *color;
    open = new QAction("&Открыть...", ui->te_fl1);
    connect (open, SIGNAL(triggered()), this, SLOT(slotOpen()));

    font = new QAction("&Шрифт...", ui->te_fl1);
    connect (font, SIGNAL(triggered()), this, SLOT(slotFont()));

    color = new QAction("&ЦветФона...", ui->te_fl1);
    connect(color, SIGNAL(triggered()), this, SLOT(slotColor()));

    QMenu *menu;
    menu = new QMenu(this);
    menu->addAction(open);
    menu->addAction(font);
    menu->addAction(color);
    menu->popup(ui->te_fl1->viewport()->mapToGlobal(pos_));
}
//-------------------------------------------------
//-------------------------------------------------
void MainWindow::slotEd2Smth(QPoint pos_)
{
    QAction *save, *del, *rewrite;
    save = new QAction("&Сохранить...", ui->te_fl2);
    connect (save, SIGNAL(triggered()), this, SLOT(slotSave()));

    del = new QAction("&Удалить...", ui->te_fl2);
    connect (del, SIGNAL(triggered()), this, SLOT(slotDel()));

    rewrite = new QAction("&Перезаписать...", ui->te_fl2);
    connect(rewrite, SIGNAL(triggered()), this, SLOT(slotRewrite()));

    QMenu *menu;
    menu = new QMenu(this);
    menu->addAction(save);
    menu->addAction(del);
    menu->addAction(rewrite);
    menu->popup(ui->te_fl2->viewport()->mapToGlobal(pos_));
}
//-------------------------------------------------
MainWindow::~MainWindow()
{
    delete ui;
}
//--------------------------------------------------
void MainWindow::slotOpen()
{
   QString fl_path = QFileDialog::getOpenFileName(0, "Open Dialog", "", "*.*");
   QFile file(fl_path);
   file.open(QIODevice::ReadOnly);
   ui->te_fl1->clear();
   ui->te_fl1->setText(file.readAll());
   file.close();
  // statusBar{)->addWidget{m_plЫY);
}
//------------------------
void MainWindow::slotFont()
{
    bool bOk;
    QFont fnt = QFontDialog::getFont(&bOk);
    ui->te_fl1->setFont(fnt);
   // statusBar{)->addWidget{m_plЫY);
}
//------------------------
void MainWindow::slotColor()
{
    QColor color = QColorDialog::getColor(Qt::blue);
    if(color.isValid()){
        QPalette pl;
        pl.setColor(ui->te_fl1->backgroundRole(),color);
        pl.setBrush(QPalette::Active,QPalette::Base, color);
        ui->te_fl1->setPalette(pl);
      //  statusBar{)->addWidget{m_plЫY);
    }
}
//-------------------------
void MainWindow::slotSave()
{
    QString str = ui->te_fl2->toPlainText();
    QString fl_path = QFileDialog::getSaveFileName(0, "Save Dialog", "", "*.cpp *.h");
    QFile file(fl_path);
    if(file.open(QIODevice::WriteOnly)){
        QTextStream stream(&file);
        stream << str.toUpper(); //Запишет-THIS IS A TEST
        file.close();
        if (stream.status() != QTextStream::Ok)
        {
            qDebug() << "Ошибка записи файла";
        }
    }
   // statusBar{)->addWidget{m_plЫY);
}

//-------------------------
void MainWindow::slotDel()
{
    QString fl_path = QFileDialog::getOpenFileName(0, "Delete Dialog", "", "*.cpp *.h");
    QFile file(fl_path);
    file.open(QIODevice::ReadOnly);
    ui->te_fl2->setText(file.readAll());
    file.close();

    int n = QMessageBox::warning(0,
                                 "Предупреждение",
                                 "Выбранный файл будет удален !,"
                                 "\n Вы готовы к последствиям?",
                                 "Yes",
                                 "No",
                                 QString(),
                                 0,
                                 1
                                );
    if(!n) {
       file.remove();
    }

}

//-------------------------
void MainWindow::slotRewrite()
{
    QString fl_path = QFileDialog::getOpenFileName(0, "Delete Dialog", "", "*.*");
    QFile file(fl_path);
    QString str;
    if(file.open(QIODevice::ReadOnly))
    {
        QTextStream stream(&file);

        while (!stream.atEnd())
        {
            str = stream.readLine();
            qDebug() << str;
        }
        if(stream.status()!= QTextStream::Ok)
        {
            qDebug() << "Ошибка чтения файла";
        }
        file.close();
   }




    QTemporaryFile tempFile;
    QLabel *lb_temp_path = new QLabel;
    QLabel *lb_temp_name = new QLabel;
    lb_temp_path->setText(QDir::tempPath());
    lb_temp_name->setText(tempFile.fileName());

    statusBar()->addWidget(lb_temp_path);
    statusBar()->addWidget(lb_temp_name);

    if (tempFile.open())//QIODevice::WriteOnly)
    {
        QTextStream stream(&tempFile);
        stream << str.toUpper(); //Запишет-THIS IS A TEST
       // tempFile.close();
        if (stream.status() != QTextStream::Ok)
        {
            qDebug() << "Ошибка записи файла";
        }
    }
 }
//--------------------------

void MainWindow::on_pbDir_clicked()
{
    QString str = QFileDialog::getExistingDirectory(0, "Выбор каталога", "");
    if(!str.isEmpty()){
       ui->leDirPath->setText(str);
       getListOfDir();
    }
}
//-------------------------------
void MainWindow:: getListOfDir()
{
    start(QDir(ui->leDirPath->text()));
}
//--------------------------------
void MainWindow::start(const QDir & dir)
{
    QApplication::processEvents();
    QStringList listFiles =
    dir.entryList (QDir::Files);
    foreach (QString file, listFiles) {
         ui->te_Dir->append(dir.absoluteFilePath(file));
    }
    QStringList listDir = dir.entryList(QDir::Dirs);
    foreach (QString subdir, listDir) {
       if (subdir == "." || subdir == "..") {
           continue;
       }
    start(QDir(dir.absoluteFilePath(subdir)));
    }

}
