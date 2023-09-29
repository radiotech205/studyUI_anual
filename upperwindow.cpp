#include "upperwindow.h"

upperWindow::upperWindow(QWidget *parent) : QWidget(parent)
{
    pb1 = new QPushButton(this);
    pb2 = new QPushButton(this);
    hb = new QHBoxLayout(this);
    sp = new QSpacerItem(1, 1, QSizePolicy::Expanding, QSizePolicy::Minimum);

    hb->addWidget(pb1);
    hb->addItem(sp);
    hb->addWidget(pb2);
}
