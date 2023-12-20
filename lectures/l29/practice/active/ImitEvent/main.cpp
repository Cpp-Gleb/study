#include "widget.h"
#include <QtWidgets>

#include <QApplication>

//----------------------------------------------------------------------
void mousePress(QWidget* pwgt, int x, int y, Qt::MouseButton bt= Qt::LeftButton,
                Qt::MouseButton bts = Qt::LeftButton)
{
    if(pwgt){
        QMouseEvent *pePress = new QMouseEvent(QEvent::MouseButtonPress,
                                               QPoint (x,y),
                                               bt,
                                               bts,
                                               Qt::NoModifier);
        QApplication::postEvent(pwgt, pePress);
    }
}
//------------------------------------------------------------------------------
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QLineEdit le_txt("User input: ");
    le_txt.show();
    le_txt.resize(300,200);
    int i;
    for(i= 0; i< Qt::Key_Z - Qt::Key_A +1; ++i){
        QChar ch(65 + i);
        int nKey = Qt::Key_A +i;
        QKeyEvent keyPress(QEvent::KeyPress, nKey, Qt::NoModifier, ch);
        QApplication::sendEvent(&le_txt, &keyPress);

        QKeyEvent keyRelease (QEvent::KeyRelease, nKey, Qt::NoModifier, ch);
        QApplication::sendEvent(&le_txt, &keyRelease);

    }
    mousePress(&le_txt,100,100);
   // Widget w;
   // w.show();
    return a.exec();
}
//-------------------------------------

