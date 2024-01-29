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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "scaledpixmap.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_2;
    ScaledPixmap *label_picture;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *label_format;
    QPushButton *ButtonFormat;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_6;
    QHBoxLayout *horizontalLayout;
    QTextBrowser *textBrowser_rec;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *ButtonMore;
    QSpacerItem *verticalSpacer;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(417, 286);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color:rgb(169, 228, 255);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        label_picture = new ScaledPixmap(centralwidget);
        label_picture->setObjectName(QString::fromUtf8("label_picture"));
        label_picture->setMinimumSize(QSize(200, 100));
        label_picture->setMaximumSize(QSize(500, 250));
        label_picture->setStyleSheet(QString::fromUtf8("color: rgb(170, 0, 255);"));

        horizontalLayout_4->addWidget(label_picture);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_format = new QLineEdit(centralwidget);
        label_format->setObjectName(QString::fromUtf8("label_format"));
        label_format->setStyleSheet(QString::fromUtf8("background-color: rgb(175, 14, 255);\n"
"gridline-color: rgb(85, 0, 127);\n"
"color:rgb(169, 228, 255);\n"
"border-radius: 5px;"));
        label_format->setReadOnly(true);

        horizontalLayout_2->addWidget(label_format);

        ButtonFormat = new QPushButton(centralwidget);
        ButtonFormat->setObjectName(QString::fromUtf8("ButtonFormat"));
        ButtonFormat->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"    border-radius:  5px;\n"
"    background-color: rgb(175, 14, 255);\n"
"	color: rgb(0, 255, 255);\n"
"	border-color: rgb(85, 0, 127);\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"    background-color:rgb(255, 255, 255);\n"
"	color: rgb(175, 14, 255);\n"
"}"));

        horizontalLayout_2->addWidget(ButtonFormat);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        textBrowser_rec = new QTextBrowser(centralwidget);
        textBrowser_rec->setObjectName(QString::fromUtf8("textBrowser_rec"));
        textBrowser_rec->setStyleSheet(QString::fromUtf8("background-color: rgb(175, 14, 255);\n"
"border-color: rgb(85, 0, 127);\n"
"color:rgb(169, 228, 255);\n"
"border-radius: 5px;"));

        horizontalLayout->addWidget(textBrowser_rec);


        horizontalLayout_6->addLayout(horizontalLayout);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        ButtonMore = new QPushButton(centralwidget);
        ButtonMore->setObjectName(QString::fromUtf8("ButtonMore"));
        ButtonMore->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius:  5px;\n"
"    background-color: rgb(175, 14, 255);\n"
"	color: rgb(0, 255, 255);\n"
"	border-color: rgb(85, 0, 127);\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"    background-color:rgb(255, 255, 255);\n"
"	color: rgb(175, 14, 255);\n"
"}"));

        horizontalLayout_3->addWidget(ButtonMore);


        horizontalLayout_5->addLayout(horizontalLayout_3);


        verticalLayout->addLayout(horizontalLayout_5);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 417, 21));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "StegLove", nullptr));
        //  label_picture->setText(QString());
        label_format->setText(QCoreApplication::translate("MainWindow", "\320\244\320\276\321\200\320\274\320\260\321\202 \321\204\320\260\320\271\320\273\320\260", nullptr));
        ButtonFormat->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\264\321\200\320\276\320\261\320\275\320\265\320\265 \320\276 \321\204\320\276\321\200\320\274\320\260\321\202\320\260\321\205...", nullptr));
        textBrowser_rec->setMarkdown(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\320\265\321\200\320\265\321\202\320\265 \321\204\320\260\320\271\320\273 \320\262 \320\274\320\265\320\275\321\216 \320\264\320\273\321\217 \320\277\320\276\320\273\321\203\321\207\320\265\320\275\320\270\320\265 \320\270\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\320\270 \320\277\320\276 \321\203\321\202\320\270\320\273\320\270\321\202\320\260\320\274\n"
"\n"
"", nullptr));
        textBrowser_rec->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:5px; margin-bottom:5px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\222\321\213\320\261\320\265\321\200\320\265\321\202\320\265 \321\204\320\260\320\271\320\273 \320\262 \320\274\320\265\320\275\321\216 \320\264\320\273\321\217 \320\277\320\276\320\273\321\203\321\207\320\265\320\275\320\270\320\265 \320\270\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\320\270 \320\277\320\276 \321\203\321\202\320\270\320\273\320\270\321\202\320\260\320\274</p></body></html>", nullptr));
        ButtonMore->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\264\321\200\320\276\320\261\320\275\320\265\320\265 \320\277\321\200\320\276 \320\243\321\202\320\270\320\273\320\270\321\202\321\213...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
