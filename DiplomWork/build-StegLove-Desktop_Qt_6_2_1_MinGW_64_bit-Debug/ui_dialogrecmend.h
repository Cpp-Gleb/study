/********************************************************************************
** Form generated from reading UI file 'dialogrecmend.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGRECMEND_H
#define UI_DIALOGRECMEND_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_DialogRecmend
{
public:

    void setupUi(QDialog *DialogRecmend)
    {
        if (DialogRecmend->objectName().isEmpty())
            DialogRecmend->setObjectName(QString::fromUtf8("DialogRecmend"));
        DialogRecmend->resize(400, 300);

        retranslateUi(DialogRecmend);

        QMetaObject::connectSlotsByName(DialogRecmend);
    } // setupUi

    void retranslateUi(QDialog *DialogRecmend)
    {
        DialogRecmend->setWindowTitle(QCoreApplication::translate("DialogRecmend", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogRecmend: public Ui_DialogRecmend {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGRECMEND_H
