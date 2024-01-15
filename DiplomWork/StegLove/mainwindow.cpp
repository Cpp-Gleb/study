#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialogrec.h"
#include "dialogfilerec.h"
#include "dialogtoolrec.h"
#include <QMessageBox>
#include <QDialog>
#include <QFile>
#include <QTextStream>
#include <QIODevice>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pixmap("picture.png");// сделать картинку подстраивоемой под размер окна
    ui->label_picture->setPixmap(pixmap);
    QMenu *pm_ht = menuBar()->addMenu(" &О Программе |");

        QAction *action_show = new QAction(tr("Открыть справку..."), pm_ht);
        pm_ht->addAction(action_show);
        connect(action_show, SIGNAL(triggered()), this, SLOT(slotAbout()));

    QMenu *pm_f = menuBar()->addMenu(" &Файл |");

        QAction *action_open = new QAction(tr("Открыть..."), pm_f);
        pm_f->addAction(action_open);
        connect(action_open, SIGNAL(triggered()), this, SLOT(slotOpenFile()));
        connect(action_open, SIGNAL(triggered()), this, SLOT(slotSwitchFormat()));
        connect(action_open, SIGNAL(triggered()), this, SLOT(slotReadForFile()));


    QMenu *pm_rec = menuBar()->addMenu(" &Рекомендации |");

        QAction *action_recomend_common = new QAction(tr("Показать общие рекомендации..."), pm_rec);
        pm_rec->addAction(action_recomend_common);
        connect(action_recomend_common, SIGNAL(triggered()), this, SLOT(slotRecomendCom()));

        QMenu *pm_sub = new QMenu("Показать расширенные рекомендации...",pm_rec);
        pm_rec->addMenu(pm_sub);

        QAction *action_recomend_File = new QAction(tr("Файлы..."), pm_sub);
        pm_sub->addAction(action_recomend_File);
        connect(action_recomend_File, SIGNAL(triggered()), this, SLOT(slotRecomendFile()));

        QAction *action_recomend_Tool = new QAction(tr("Утилиты..."), pm_sub);
        pm_sub->addAction(action_recomend_Tool);
        connect(action_recomend_Tool, SIGNAL(triggered()), this, SLOT(slotRecomendTool()));

}

void MainWindow:: slotOpenFile()
{
    QString fi = QFileDialog::getOpenFileName(0, "Open Dialog", "", "*.*");
    QMimeDatabase db;
    QMimeType mime = db.mimeTypeForFile(fi, QMimeDatabase::MatchContent);
    QString mask = mime.suffixes().join(", ");
    ui->label_format->setText(mask);
    _mask = mask;
}

void MainWindow::slotSwitchFormat(){
    if(_mask == "png"){
        QFileInfo fi("./TextFile/png.txt");
        _fileName = fi.absoluteFilePath();
    }
    else if(_mask == "jpg"){
        QFileInfo fi("./TextFile/jpg.txt");
        _fileName = fi.absoluteFilePath();
    }
    else if(_mask == "wav"){
        QFileInfo fi("./TextFile/wav.txt");
        _fileName = fi.absoluteFilePath();
    }
    else if(_mask == "doc"){
        QFileInfo fi("./TextFile/word.txt");
        _fileName = fi.absoluteFilePath();
    }
    else{
        QFileInfo fi("./TextFile/universal.txt");
        _fileName = fi.absoluteFilePath();
    }
}


void MainWindow::slotAbout(){
    QMessageBox::about(0, "О програме", "Для начала работы: \n    Нажать в меню 'файл', выбрать файл, получить реокмендации\nДля получения общих или подробных рекомендаций:\n    Нажать в меню 'Рекомендации':\n    Рекомендации общие:\n        Понятия стеганографии и, что делать в непонятных ситуациях\n    Рекомендации расширенные:\n        Информация о файлах и утилитах\n");
}

void MainWindow::slotRecomendCom(){

    DialogRec *dial;
    dial = new DialogRec(this);
    dial->show();
}

void MainWindow::slotRecomendFile(){

    DialogFileRec *dial;
    dial = new DialogFileRec(this);
    dial->show();

}

void MainWindow::slotRecomendTool(){
    DialogToolRec *dial;
    dial = new DialogToolRec(this);
    dial->show();
}



void MainWindow::slotReadForFile(){
    QFile file(_fileName);
    if(!file.open(QIODevice::ReadOnly))
        return;

    QString line = "";
    ui->textBrowser_rec->setText(line);
    while (!file.atEnd()) {
        line = file.readLine();
        ui->textBrowser_rec->insertPlainText(line);
    }

}

MainWindow::~MainWindow()
{
    delete ui;
}





