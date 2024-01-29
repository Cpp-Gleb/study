/********************************************************************************
** Form generated from reading UI file 'dialogtoolrec.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGTOOLREC_H
#define UI_DIALOGTOOLREC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogToolRec
{
public:
    QHBoxLayout *horizontalLayout;
    QTabWidget *tabWidget;
    QWidget *tab_1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *binwalk;
    QWidget *tab_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *zsteg;
    QWidget *Exiv2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *exiv2;
    QWidget *StegHide;
    QHBoxLayout *horizontalLayout_5;
    QLabel *steghide;
    QWidget *StegSolve;
    QHBoxLayout *horizontalLayout_6;
    QLabel *stegsolve;
    QWidget *Audacity;
    QHBoxLayout *horizontalLayout_7;
    QLabel *audacity;
    QWidget *Hexeditor;
    QHBoxLayout *horizontalLayout_8;
    QLabel *hexedit;
    QWidget *Stegolsb;
    QHBoxLayout *horizontalLayout_9;
    QLabel *stegolsb;

    void setupUi(QDialog *DialogToolRec)
    {
        if (DialogToolRec->objectName().isEmpty())
            DialogToolRec->setObjectName(QString::fromUtf8("DialogToolRec"));
        DialogToolRec->resize(400, 300);
        DialogToolRec->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout = new QHBoxLayout(DialogToolRec);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        tabWidget = new QTabWidget(DialogToolRec);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setStyleSheet(QString::fromUtf8(""));
        tab_1 = new QWidget();
        tab_1->setObjectName(QString::fromUtf8("tab_1"));
        tab_1->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout_2 = new QHBoxLayout(tab_1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        binwalk = new QLabel(tab_1);
        binwalk->setObjectName(QString::fromUtf8("binwalk"));
        binwalk->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_2->addWidget(binwalk);

        tabWidget->addTab(tab_1, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tab_2->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout_3 = new QHBoxLayout(tab_2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        zsteg = new QLabel(tab_2);
        zsteg->setObjectName(QString::fromUtf8("zsteg"));
        zsteg->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_3->addWidget(zsteg);

        tabWidget->addTab(tab_2, QString());
        Exiv2 = new QWidget();
        Exiv2->setObjectName(QString::fromUtf8("Exiv2"));
        Exiv2->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout_4 = new QHBoxLayout(Exiv2);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        exiv2 = new QLabel(Exiv2);
        exiv2->setObjectName(QString::fromUtf8("exiv2"));
        exiv2->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_4->addWidget(exiv2);

        tabWidget->addTab(Exiv2, QString());
        StegHide = new QWidget();
        StegHide->setObjectName(QString::fromUtf8("StegHide"));
        StegHide->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout_5 = new QHBoxLayout(StegHide);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        steghide = new QLabel(StegHide);
        steghide->setObjectName(QString::fromUtf8("steghide"));
        steghide->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_5->addWidget(steghide);

        tabWidget->addTab(StegHide, QString());
        StegSolve = new QWidget();
        StegSolve->setObjectName(QString::fromUtf8("StegSolve"));
        StegSolve->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout_6 = new QHBoxLayout(StegSolve);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        stegsolve = new QLabel(StegSolve);
        stegsolve->setObjectName(QString::fromUtf8("stegsolve"));
        stegsolve->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_6->addWidget(stegsolve);

        tabWidget->addTab(StegSolve, QString());
        Audacity = new QWidget();
        Audacity->setObjectName(QString::fromUtf8("Audacity"));
        Audacity->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout_7 = new QHBoxLayout(Audacity);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        audacity = new QLabel(Audacity);
        audacity->setObjectName(QString::fromUtf8("audacity"));
        audacity->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_7->addWidget(audacity);

        tabWidget->addTab(Audacity, QString());
        Hexeditor = new QWidget();
        Hexeditor->setObjectName(QString::fromUtf8("Hexeditor"));
        Hexeditor->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout_8 = new QHBoxLayout(Hexeditor);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        hexedit = new QLabel(Hexeditor);
        hexedit->setObjectName(QString::fromUtf8("hexedit"));
        hexedit->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_8->addWidget(hexedit);

        tabWidget->addTab(Hexeditor, QString());
        Stegolsb = new QWidget();
        Stegolsb->setObjectName(QString::fromUtf8("Stegolsb"));
        Stegolsb->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout_9 = new QHBoxLayout(Stegolsb);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        stegolsb = new QLabel(Stegolsb);
        stegolsb->setObjectName(QString::fromUtf8("stegolsb"));
        stegolsb->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_9->addWidget(stegolsb);

        tabWidget->addTab(Stegolsb, QString());

        horizontalLayout->addWidget(tabWidget);


        retranslateUi(DialogToolRec);

        tabWidget->setCurrentIndex(7);


        QMetaObject::connectSlotsByName(DialogToolRec);
    } // setupUi

    void retranslateUi(QDialog *DialogToolRec)
    {
        DialogToolRec->setWindowTitle(QCoreApplication::translate("DialogToolRec", "Dialog", nullptr));
        binwalk->setText(QCoreApplication::translate("DialogToolRec", "TextLabel", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_1), QCoreApplication::translate("DialogToolRec", "Binwalk", nullptr));
        zsteg->setText(QCoreApplication::translate("DialogToolRec", "TextLabel", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("DialogToolRec", "Zsteg", nullptr));
        exiv2->setText(QCoreApplication::translate("DialogToolRec", "TextLabel", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Exiv2), QCoreApplication::translate("DialogToolRec", "Exiv2", nullptr));
        steghide->setText(QCoreApplication::translate("DialogToolRec", "TextLabel", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(StegHide), QCoreApplication::translate("DialogToolRec", "StegHide", nullptr));
        stegsolve->setText(QCoreApplication::translate("DialogToolRec", "TextLabel", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(StegSolve), QCoreApplication::translate("DialogToolRec", "StegSolve", nullptr));
        audacity->setText(QCoreApplication::translate("DialogToolRec", "TextLabel", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Audacity), QCoreApplication::translate("DialogToolRec", "Audacity", nullptr));
        hexedit->setText(QCoreApplication::translate("DialogToolRec", "TextLabel", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Hexeditor), QCoreApplication::translate("DialogToolRec", "Hex-editor ", nullptr));
        stegolsb->setText(QCoreApplication::translate("DialogToolRec", "TextLabel", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Stegolsb), QCoreApplication::translate("DialogToolRec", "Stego-lsb", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogToolRec: public Ui_DialogToolRec {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGTOOLREC_H
