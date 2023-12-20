#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QObject>
#include <QWidget>
#include <QtWidgets>
#include <QPushButton>

class MyWidget : public QWidget
{
    Q_OBJECT

    QLabel* m_plblToolTip;
    //QPushButton* m_plblToolTip;
    //QLCDNumber *m_plblToolTip;
protected:
    virtual bool event(QEvent* pe){
        if (pe->type() == QEvent::ToolTip){
            QHelpEvent* peHelp = static_cast<QHelpEvent*>(pe);
            m_plblToolTip->setFixedSize(200,50);
            m_plblToolTip->move(peHelp->globalPos() );
            m_plblToolTip->setText(toolTip());
//            m_plblToolTip->display(peHelp->globalX());
            m_plblToolTip->show();
            QTimer::singleShot(3000, m_plblToolTip, SLOT(hide()));
        return true;
        }
        return QWidget::event(pe);
    }
public:
    explicit MyWidget(QWidget *parent = nullptr);


signals:

};

#endif // MYWIDGET_H
