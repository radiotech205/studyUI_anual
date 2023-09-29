#include "subwindow.h"

subWindow::subWindow(QWidget *parent) : QWidget(parent)
{
    vb = new QVBoxLayout(this);

    frame01 = new QFrame(this);
    frame01->setFrameStyle(QFrame::StyledPanel | QFrame::Sunken);
    QPushButton* pb1 = new QPushButton(frame01);
    vb->addWidget(frame01);
    frame02 = new QFrame(this);
    frame02->setFrameStyle(QFrame::StyledPanel | QFrame::Sunken);
    QPushButton* pb2 = new QPushButton(frame02);
    vb->addWidget(frame02);
    frame03 = new QFrame(this);
    frame03->setFrameStyle(QFrame::StyledPanel | QFrame::Sunken);
    QPushButton* pb3 = new QPushButton(frame03);
    vb->addWidget(frame03);
}
