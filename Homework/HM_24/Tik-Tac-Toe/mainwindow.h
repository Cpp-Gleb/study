#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_A0_clicked();

    void on_A1_clicked();

    void on_A2_clicked();

    void on_B0_clicked();

    void on_B1_clicked();

    void on_B2_clicked();

    void on_C0_clicked();

    void on_C1_clicked();

    void on_C2_clicked();

    void on_StartFisrst_clicked();

    void on_StartSecond_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
