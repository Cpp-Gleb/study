/********************************************************************************
** Form generated from reading UI file 'dialogrec.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGREC_H
#define UI_DIALOGREC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_DialogRec
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *Label_com;

    void setupUi(QDialog *DialogRec)
    {
        if (DialogRec->objectName().isEmpty())
            DialogRec->setObjectName(QString::fromUtf8("DialogRec"));
        DialogRec->resize(400, 300);
        horizontalLayout = new QHBoxLayout(DialogRec);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        Label_com = new QLabel(DialogRec);
        Label_com->setObjectName(QString::fromUtf8("Label_com"));
        Label_com->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(Label_com);


        retranslateUi(DialogRec);

        QMetaObject::connectSlotsByName(DialogRec);
    } // setupUi

    void retranslateUi(QDialog *DialogRec)
    {
        DialogRec->setWindowTitle(QCoreApplication::translate("DialogRec", "Dialog", nullptr));
        Label_com->setText(QCoreApplication::translate("DialogRec", "Common Recomendations", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogRec: public Ui_DialogRec {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGREC_H
