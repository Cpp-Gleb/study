#include "MyWidget.h"

MyWidget::MyWidget(QWidget *parent) : QWidget(parent)
{
    m_plblToolTip = new QLabel;
    m_plblToolTip->setWindowFlags(Qt::ToolTip);
}
