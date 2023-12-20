#ifndef WIDGET_H
#define WIDGET_H

#include <QtWidgets>

class MouseObserver : public QLabel
{
    Q_OBJECT

public:
    MouseObserver(QWidget *parent = nullptr);
    //~Widget();
protected:
    virtual void mousePressEvent (QMouseEvent *pe);
    virtual void mouseReleaseEvent (QMouseEvent * pe);
    virtual void mouseMoveEvent    (QMouseEvent * pe);

    void dumpEvent  (QMouseEvent* pe, const QString & strMessage);
    QString modifiersInfo  (QMouseEvent * pe);
    QString buttonsInfo    (QMouseEvent * pe);
};
#endif // WIDGET_H
