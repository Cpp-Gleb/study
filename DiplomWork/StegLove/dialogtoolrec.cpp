#include "dialogtoolrec.h"
#include "ui_dialogtoolrec.h"
#include <QFile>
#include <QTextStream>
#include <QIODevice>

DialogToolRec::DialogToolRec(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogToolRec)
{
    ui->setupUi(this);
    QFileInfo fi("C:\\qw\\binwalk.txt");
    QString fileName = fi.absoluteFilePath();
    QFile file(fileName);
    file.open(QFile::ReadOnly);
    QTextStream in(&file);
    ui->binwalk->setText(in.readAll());

    QFileInfo fi2("C:\\qw\\zsteg.txt");
    QString fileName2 = fi2.absoluteFilePath();
    QFile file2(fileName2);
    file2.open(QFile::ReadOnly);
    QTextStream in2(&file2);
    ui->zsteg->setText(in2.readAll());
}

DialogToolRec::~DialogToolRec()
{
    delete ui;
}
