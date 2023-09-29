#include "mwcentralwidget.h"

mwCentralWidget::mwCentralWidget(QWidget *parent) : QWidget(parent)
{
    vb = new  QVBoxLayout(this);
    uw = new upperWindow(this);
    vb->addWidget(uw);

    tree = new QTreeView(this);
    sw = new subWindow(this);
    hb = new  QHBoxLayout();
    hb->addWidget(tree);
    hb->addWidget(sw);
    vb->addLayout(hb);

}
