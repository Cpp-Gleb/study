#include "dialogfilerec.h"
#include "ui_dialogfilerec.h"
#include <QFile>
#include <QTextStream>
#include <QIODevice>


DialogFileRec::DialogFileRec(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogFileRec)
{
    ui->setupUi(this);

    QFileInfo fi("C:\\qw\\png.txt");
    QString fileName = fi.absoluteFilePath();
    QFile file(fileName);
    file.open(QFile::ReadOnly);
    QTextStream in(&file);
    ui->png->setText(in.readAll());

    QFileInfo fi2("C:\\qw\\jpg.txt");
    QString fileName2 = fi2.absoluteFilePath();
    QFile file2(fileName2);
    file2.open(QFile::ReadOnly);
    QTextStream in2(&file2);
    ui->jpg->setText(in2.readAll());

    QFileInfo fi3("C:\\qw\\wav.txt");
    QString fileName3 = fi3.absoluteFilePath();
    QFile file3(fileName3);
    file3.open(QFile::ReadOnly);
    QTextStream in3(&file3);
    ui->wav->setText(in3.readAll());
}

DialogFileRec::~DialogFileRec(){
    delete ui;
}
