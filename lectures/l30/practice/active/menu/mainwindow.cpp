#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QMenu *pm_ht = menuBar()->addMenu(" &File |");

        QAction *action_open = new QAction(tr("Open..."), pm_ht);
        pm_ht->addAction(action_open);
        connect(action_open, SIGNAL(triggered()), this, SLOT(slotOpenFile()));
    QMenu *pm_vt = menuBar()->addMenu(" &Find |");

        QAction *action_find_in_text = new QAction(tr("Find in text"), pm_vt);
        pm_vt->addAction(action_find_in_text);
        connect(action_find_in_text, SIGNAL(triggered()), this, SLOT(slotSearch()));
        QAction *action_find_in_app = new QAction(tr("Find in app"), pm_vt);
        pm_vt->addAction(action_find_in_app);
        connect(action_find_in_app, SIGNAL(triggered()), this, SLOT(slotFindInApp()));
        QAction *action_find_interesting = new QAction(tr("Find innteresting word"), pm_vt);
        pm_vt->addAction(action_find_interesting);
        connect(action_find_interesting, SIGNAL(triggered()), this, SLOT(slotFindinteresting()));

        QMenu *pm_sub = new QMenu("find_letter", pm_vt);
        pm_vt->addMenu(pm_sub);
        QAction *action_progress = new QAction(tr("Progress"), pm_sub);
        pm_sub->addAction(action_progress);
        connect(action_progress, SIGNAL(triggered()), this, SLOT(slotProgressSmth()));

    QMenu *pm_prog = menuBar()->addMenu(" &Read |");

        QAction *action_read_inf = new QAction(tr("read information"), pm_prog);
        pm_prog->addAction(action_read_inf);
        connect(action_read_inf, SIGNAL(triggered()), this, SLOT(slotReadInf()));
    QMenu *pm_inf = menuBar()->addMenu(" &Information |");

        QAction *action_inf = new QAction(tr("information"), pm_inf);
        pm_inf->addAction(action_inf);
        connect(action_inf, SIGNAL(triggered()), this, SLOT(slotInf()));

    QMenu *pm_raaa = menuBar()->addMenu(" &Raaaa");

        QAction *action_raa = new QAction(tr("read information"), pm_raaa);
        pm_raaa->addAction(action_raa);
        connect(action_raa, SIGNAL(triggered()), this, SLOT(slotRaaa()));


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::slotSearch(){}
void MainWindow::slotOpenFile(){}
void MainWindow::slotFindInApp(){}
void MainWindow::slotFindinteresting(){}
void MainWindow::slotProgressSmth(){}
void MainWindow::slotReadInf(){}
void MainWindow::slotInf(){}
void MainWindow::slotRaaa(){}
