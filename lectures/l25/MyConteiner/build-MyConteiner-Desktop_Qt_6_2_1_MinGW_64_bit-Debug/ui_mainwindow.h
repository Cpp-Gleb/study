/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QLineEdit *le_1;
    QLineEdit *le_0;
    QLineEdit *le_2;
    QLineEdit *le_3;
    QGroupBox *groupBox_2;
    QGroupBox *groupBox_3;
    QPushButton *pb_1;
    QPushButton *pb_2;
    QGroupBox *groupBox_4;
    QPushButton *pb_5;
    QPushButton *pb_6;
    QGroupBox *groupBox_5;
    QPushButton *pb_3;
    QPushButton *pb_4;
    QLCDNumber *lcdNumber;
    QTextBrowser *Display;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(708, 534);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 20, 231, 171));
        le_1 = new QLineEdit(groupBox);
        le_1->setObjectName(QString::fromUtf8("le_1"));
        le_1->setGeometry(QRect(10, 60, 113, 21));
        le_0 = new QLineEdit(groupBox);
        le_0->setObjectName(QString::fromUtf8("le_0"));
        le_0->setGeometry(QRect(10, 20, 113, 21));
        le_2 = new QLineEdit(groupBox);
        le_2->setObjectName(QString::fromUtf8("le_2"));
        le_2->setGeometry(QRect(10, 100, 113, 21));
        le_3 = new QLineEdit(groupBox);
        le_3->setObjectName(QString::fromUtf8("le_3"));
        le_3->setGeometry(QRect(10, 140, 113, 21));
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(340, 30, 341, 331));
        groupBox_3 = new QGroupBox(groupBox_2);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(20, 200, 111, 111));
        pb_1 = new QPushButton(groupBox_3);
        pb_1->setObjectName(QString::fromUtf8("pb_1"));
        pb_1->setGeometry(QRect(10, 40, 80, 21));
        pb_2 = new QPushButton(groupBox_3);
        pb_2->setObjectName(QString::fromUtf8("pb_2"));
        pb_2->setGeometry(QRect(10, 70, 80, 21));
        groupBox_4 = new QGroupBox(groupBox_2);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(210, 29, 111, 91));
        pb_5 = new QPushButton(groupBox_4);
        pb_5->setObjectName(QString::fromUtf8("pb_5"));
        pb_5->setGeometry(QRect(10, 20, 80, 21));
        pb_6 = new QPushButton(groupBox_4);
        pb_6->setObjectName(QString::fromUtf8("pb_6"));
        pb_6->setGeometry(QRect(10, 50, 80, 21));
        groupBox_5 = new QGroupBox(groupBox_2);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(210, 200, 111, 111));
        pb_3 = new QPushButton(groupBox_5);
        pb_3->setObjectName(QString::fromUtf8("pb_3"));
        pb_3->setGeometry(QRect(10, 40, 80, 21));
        pb_4 = new QPushButton(groupBox_5);
        pb_4->setObjectName(QString::fromUtf8("pb_4"));
        pb_4->setGeometry(QRect(10, 70, 80, 21));
        lcdNumber = new QLCDNumber(groupBox_2);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setGeometry(QRect(20, 40, 151, 91));
        Display = new QTextBrowser(centralwidget);
        Display->setObjectName(QString::fromUtf8("Display"));
        Display->setGeometry(QRect(30, 280, 256, 192));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 708, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "\320\222\320\260\320\273\320\270\320\264\320\260\321\202\320\276\321\200 \320\262 \321\200\320\260\320\261\320\276\321\202\320\265:", nullptr));
#if QT_CONFIG(tooltip)
        le_1->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>01-03, 13</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        le_0->setToolTip(QCoreApplication::translate("MainWindow", "01-89", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        le_2->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>02-16</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "Mapper + Vector \320\262 \321\200\320\260\320\261\320\276\321\202\320\265", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "\320\223\321\200\321\203\320\277\320\277\320\260 2", nullptr));
        pb_1->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        pb_2->setText(QCoreApplication::translate("MainWindow", "Sub", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("MainWindow", "\320\223\321\200\321\203\320\277\320\277\320\260 1", nullptr));
        pb_5->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        pb_6->setText(QCoreApplication::translate("MainWindow", "Sub", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("MainWindow", "\320\223\321\200\321\203\320\277\320\277\320\260 3", nullptr));
        pb_3->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        pb_4->setText(QCoreApplication::translate("MainWindow", "Sub", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
