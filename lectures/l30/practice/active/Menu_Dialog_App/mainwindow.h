#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtWidgets>
#include <QMouseEvent>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

    QLabel* m_plblX;
    QLabel* m_plblY;

protected:
virtual void mouseMoveEvent(QMouseEvent* pe){
    m_plblX->setText("X=" + QString().setNum(pe->x()));
    m_plblY->setText("У=" + QString().setNum(pe->y())) ;
}

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_6_clicked();

    void slotOpenFile();
    void slotFontSmth();
    void slotEditColor();
    void slotNameButton();
    void slotProgressSmth();
    void slotEditSmth(QPoint pos_);
    void contextMenuCreate();
    void slotAdd();
    void slotDel();
    void slotCh();

private:
    Ui::MainWindow *ui;


};
#endif // MAINWINDOW_H
