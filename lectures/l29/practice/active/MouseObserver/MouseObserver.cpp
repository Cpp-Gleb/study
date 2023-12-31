#include "MouseObserver.h"
//------------------------------------------------------
MouseObserver::MouseObserver(QWidget *pwgt)
    : QLabel(pwgt)
{
    setAlignment(Qt::AlignCenter);
    setText("Mouse interation\n (Press a mouse button)");
}
//----------------------------------------------------
/*virt  */ void MouseObserver::mousePressEvent(QMouseEvent *pe)
{
    dumpEvent(pe, "Mouse Pressed");
}
//----------------------------------------------------
/*virt  */ void MouseObserver::mouseReleaseEvent(QMouseEvent *pe)
{
    dumpEvent(pe, "Mouse Released");
}
//----------------------------------------------------
/*virt  */ void MouseObserver::mouseMoveEvent(QMouseEvent *pe)
{
    dumpEvent(pe, "Mouse is moving");
}
//-----------------------------------------------------
void MouseObserver::dumpEvent(QMouseEvent *pe, const QString &strMsg)
{
    setText(strMsg
            +"\n buttons()=" + buttonsInfo(pe)
            +"\n x()=" + QString::number(pe->x())
            + "\n y()=" + QString::number(pe->y())
            + "\n modifiers()=" + modifiersInfo(pe)
            );
}
//-----------------------------------------------------
QString MouseObserver::modifiersInfo(QMouseEvent * pe)
{
    QString strModifiers;
    if (pe->modifiers() & Qt::ShiftModifier){
        strModifiers +="Shift ";
    }
    if (pe->modifiers() & Qt::ControlModifier){
        strModifiers +="Control ";
    }
    if (pe->modifiers() & Qt::AltModifier){
        strModifiers +="Alt ";
    }
    return strModifiers;
}
//-----------------------------------------------------
QString MouseObserver::buttonsInfo(QMouseEvent *pe)
{
    QString strButtons;
    if (pe->buttons() & Qt::LeftButton){
        strButtons +="Left ";
    }

    if (pe->buttons() & Qt::RightButton){
        strButtons +="Right ";
    }

//    if (pe->buttons() & Qt::MidButton){
//        strButtons +="Middle ";
//    }
    return strButtons;
}
//-----------------------------------------------------
/*Widget::~Widget()
{
}
*/

