#ifndef MOUSEFILTER_H
#define MOUSEFILTER_H

#include <QObject>

class MouseFilter : public QObject
{
public:
    explicit MouseFilter(QObject *pobj = nullptr);

protected:
    virtual bool eventFilter(QObject*, QEvent *);

signals:

};

#endif // MOUSEFILTER_H
