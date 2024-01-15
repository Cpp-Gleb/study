/********************************************************************************
** Form generated from reading UI file 'dialogfilerec.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGFILEREC_H
#define UI_DIALOGFILEREC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogFileRec
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tab;
    QWidget *tab_1;
    QVBoxLayout *verticalLayout_2;
    QLabel *png;
    QLabel *label;
    QLabel *HelpPic;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *jpg;
    QLabel *label_2;
    QLabel *HeadJpg;
    QWidget *tab_3;
    QHBoxLayout *horizontalLayout;
    QLabel *wav;
    QWidget *tab_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *doc;

    void setupUi(QDialog *DialogFileRec)
    {
        if (DialogFileRec->objectName().isEmpty())
            DialogFileRec->setObjectName(QString::fromUtf8("DialogFileRec"));
        DialogFileRec->resize(400, 300);
        verticalLayout = new QVBoxLayout(DialogFileRec);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tab = new QTabWidget(DialogFileRec);
        tab->setObjectName(QString::fromUtf8("tab"));
        tab_1 = new QWidget();
        tab_1->setObjectName(QString::fromUtf8("tab_1"));
        verticalLayout_2 = new QVBoxLayout(tab_1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        png = new QLabel(tab_1);
        png->setObjectName(QString::fromUtf8("png"));

        verticalLayout_2->addWidget(png);

        label = new QLabel(tab_1);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_2->addWidget(label);

        HelpPic = new QLabel(tab_1);
        HelpPic->setObjectName(QString::fromUtf8("HelpPic"));

        verticalLayout_2->addWidget(HelpPic);

        tab->addTab(tab_1, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        verticalLayout_3 = new QVBoxLayout(tab_2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        jpg = new QLabel(tab_2);
        jpg->setObjectName(QString::fromUtf8("jpg"));

        verticalLayout_3->addWidget(jpg);

        label_2 = new QLabel(tab_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_3->addWidget(label_2);

        HeadJpg = new QLabel(tab_2);
        HeadJpg->setObjectName(QString::fromUtf8("HeadJpg"));

        verticalLayout_3->addWidget(HeadJpg);

        tab->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        tab_3->setEnabled(true);
        QFont font;
        font.setUnderline(false);
        tab_3->setFont(font);
        horizontalLayout = new QHBoxLayout(tab_3);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        wav = new QLabel(tab_3);
        wav->setObjectName(QString::fromUtf8("wav"));

        horizontalLayout->addWidget(wav);

        tab->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        horizontalLayout_4 = new QHBoxLayout(tab_4);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        doc = new QLabel(tab_4);
        doc->setObjectName(QString::fromUtf8("doc"));

        horizontalLayout_4->addWidget(doc);

        tab->addTab(tab_4, QString());

        verticalLayout->addWidget(tab);


        retranslateUi(DialogFileRec);

        tab->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(DialogFileRec);
    } // setupUi

    void retranslateUi(QDialog *DialogFileRec)
    {
        DialogFileRec->setWindowTitle(QCoreApplication::translate("DialogFileRec", "Dialog", nullptr));
        png->setText(QCoreApplication::translate("DialogFileRec", "TextLabel", nullptr));
        label->setText(QCoreApplication::translate("DialogFileRec", "\320\250\320\277\320\260\321\200\320\263\320\260\320\273\320\272\320\260 \320\277\321\200\320\270 \321\200\320\260\320\261\320\276\321\202\320\265 \321\201 png \321\205\320\265\320\264\320\265\321\200\320\260\320\274\320\270", nullptr));
        HelpPic->setText(QCoreApplication::translate("DialogFileRec", "\321\204\320\276\321\202\320\276", nullptr));
        tab->setTabText(tab->indexOf(tab_1), QCoreApplication::translate("DialogFileRec", "png", nullptr));
        jpg->setText(QCoreApplication::translate("DialogFileRec", "TextLabel", nullptr));
        label_2->setText(QCoreApplication::translate("DialogFileRec", "\320\250\320\277\320\260\321\200\320\263\320\260\320\273\320\272\320\260 \320\277\321\200\320\270 \321\200\320\260\320\261\320\276\321\202\320\265 \321\201 jpg \321\205\320\265\320\264\320\265\321\200\320\260\320\274\320\270", nullptr));
        HeadJpg->setText(QCoreApplication::translate("DialogFileRec", "\321\204\320\276\321\202\320\276", nullptr));
        tab->setTabText(tab->indexOf(tab_2), QCoreApplication::translate("DialogFileRec", "jpg", nullptr));
        wav->setText(QCoreApplication::translate("DialogFileRec", "TextLabel", nullptr));
        tab->setTabText(tab->indexOf(tab_3), QCoreApplication::translate("DialogFileRec", "wav", nullptr));
        doc->setText(QCoreApplication::translate("DialogFileRec", "TextLabel", nullptr));
        tab->setTabText(tab->indexOf(tab_4), QCoreApplication::translate("DialogFileRec", "dox", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogFileRec: public Ui_DialogFileRec {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGFILEREC_H
