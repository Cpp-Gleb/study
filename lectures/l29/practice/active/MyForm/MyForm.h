// ======================================================================
//  MyForm.h
// ======================================================================
//                   This file is a part of the book 
//             "Qt 5.3 Professional programming with C++"
// ======================================================================
//  Copyright (c) 2014 by Max Schlee
//
//  Email : Max.Schlee@neonway.com
//  Blog  : http://www.maxschlee.com
//
//  Social Networks
//  ---------------
//  FaceBook : http://www.facebook.com/mschlee
//  Twitter  : http://twitter.com/Max_Schlee
//  2Look.me : http://2look.me/NW100003
//  Xing     : http://www.xing.com/profile/Max_Schlee
//  vk.com   : https://vk.com/max.schlee
// ======================================================================

#pragma once

#include "ui_MyForm.h"

// ======================================================================
class MyForm : public QWidget{//, public Ui::MyForm {
    Q_OBJECT
private:
Ui::MyForm m_ui;
int m_count{0};
public:
    MyForm(QWidget* pwgt = 0) : QWidget(pwgt)
    {
        m_ui.setupUi(this);
        //setupUi(this);


       connect(m_ui.pushButton, SIGNAL(clicked()), SLOT(slotReset()));
    }

public slots:
    void slotReset()
    {
        m_count++;
        if(m_count%2 == 0)
            m_ui.pushButton->setText("Today");
        else
            m_ui.pushButton->setText("Сегодня");
       // m_sld->setValue(0);
       // m_lcd->display(0);
    }
};

