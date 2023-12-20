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
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionopen;
    QAction *actionobject;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_6;
    QPushButton *pushButton;
    QPushButton *pushButton_5;
    QPushButton *pushButton_4;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QMenu *menufile;
    QMenu *menuclose;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        actionopen = new QAction(MainWindow);
        actionopen->setObjectName(QString::fromUtf8("actionopen"));
        actionobject = new QAction(MainWindow);
        actionobject->setObjectName(QString::fromUtf8("actionobject"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton_6 = new QPushButton(groupBox);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));

        horizontalLayout->addWidget(pushButton_6);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        pushButton_5 = new QPushButton(groupBox);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        horizontalLayout->addWidget(pushButton_5);

        pushButton_4 = new QPushButton(groupBox);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        horizontalLayout->addWidget(pushButton_4);

        pushButton_3 = new QPushButton(groupBox);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        horizontalLayout->addWidget(pushButton_3);

        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout_2->addWidget(groupBox);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menufile = new QMenu(menubar);
        menufile->setObjectName(QString::fromUtf8("menufile"));
        menuclose = new QMenu(menufile);
        menuclose->setObjectName(QString::fromUtf8("menuclose"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menufile->menuAction());
        menufile->addAction(actionopen);
        menufile->addSeparator();
        menufile->addAction(menuclose->menuAction());
        menuclose->addAction(actionobject);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionopen->setText(QCoreApplication::translate("MainWindow", "open", nullptr));
        actionobject->setText(QCoreApplication::translate("MainWindow", "object", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "\320\242\320\270\320\277\321\213 \321\201\320\276\320\276\320\261\321\211\320\265\320\275\320\270\320\271", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "\320\236\321\210\320\270\320\261\320\272\320\260", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\276\321\201\321\202\320\276\320\265", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "\320\236 \320\237\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\265", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "\320\232\321\200\320\270\321\202\320\270\321\207\320\265\321\201\320\272\320\276\320\265", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\265\320\264\321\203\320\277\321\200\320\265\320\266\320\264\320\265\320\275\320\270\320\265", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\320\230\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\320\276\320\275\320\275\320\276\320\265", nullptr));
        menufile->setTitle(QCoreApplication::translate("MainWindow", "file", nullptr));
        menuclose->setTitle(QCoreApplication::translate("MainWindow", "close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
