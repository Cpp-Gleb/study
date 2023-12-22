#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPoint>
#include <QDir>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
     void contextMenuCreate();

public slots:
    void slotEd1Smth(QPoint pos_);
    void slotEd2Smth(QPoint pos_);

private slots:
    void slotOpen();
    void slotFont();
    void slotColor();

    void slotSave();
    void slotDel();
    void slotRewrite();

    void on_pbDir_clicked();

private:
    Ui::MainWindow *ui;

    void getListOfDir();  //
    void start(const QDir & dir);

};

#endif // MAINWINDOW_H
