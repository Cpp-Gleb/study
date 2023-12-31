#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtWidgets>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QString _mask;
    QString _fileName;
private slots:
    void slotOpenFile();
    void slotAbout();
    void slotRecomend();
    void slotRequest();
    void slotReadForFile();
    void slotSwitchFormat();
};
#endif // MAINWINDOW_H
