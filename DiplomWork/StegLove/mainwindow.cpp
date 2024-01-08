#include "mainwindow.h"
#include "ui_mainwindow.h"
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

        QAction *action_recomend = new QAction(tr("Показать общие рекомендации..."), pm_rec);
        pm_rec->addAction(action_recomend);
        connect(action_recomend, SIGNAL(triggered()), this, SLOT(slotRecomend()));

    QMenu *pm_req = menuBar()->addMenu(" &Отзыв |");

        QAction *action_req = new QAction(tr("Написать отзыв..."), pm_req);
        pm_req->addAction(action_req);
        connect(action_req, SIGNAL(triggered()), this, SLOT(slotRequest()));
// добавить слоты для справки, помощи

}

void MainWindow:: slotOpenFile()
{
    QString fi = QFileDialog::getOpenFileName(0, "Open Dialog", "", "*.*");
    QMimeDatabase db;
    QMimeType mime = db.mimeTypeForFile(fi, QMimeDatabase::MatchContent);
    QString mask = mime.suffixes().join(", ");
    ui->textBrowser_format->setText(mask);
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
    else if(_mask == "c"){
        QFileInfo fi("./TextFile/c.txt");
        _fileName = fi.absoluteFilePath();
    }
    else{
        QFileInfo fi("./TextFile/universal.txt");
        _fileName = fi.absoluteFilePath();
    }
}


void MainWindow::slotAbout(){
    //доп фишка
}

void MainWindow::slotRecomend(){
    //доп фишка
}

void MainWindow::slotRequest(){
    //доп фишка
}



void MainWindow::slotReadForFile(){ //  для чтения из свитча
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





