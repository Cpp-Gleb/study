#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVector>
#include <QPushButton>
#include <QObject>
#include <QQueue>
#include <QStack>
#include <QList>
#include <QString>
#include <QMap>
#include <QMultiMap>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow :  public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    void func();
    ~MainWindow();

private:
    Ui::MainWindow *ui;

    QVector<QPushButton*> m_vec_but;

    void ValidatorInUse(); // валидатор в деле
    void MapperInUse();    // маппер в деле
    void VectorInUse();    // вектор в деле

public slots:
   void slotAdd(int num);
   void slotSub (int num);
};
#endif // MAINWINDOW_H
