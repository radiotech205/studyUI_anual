#ifndef MWCENTRALWIDGET_H
#define MWCENTRALWIDGET_H

#include <QObject>
#include <QWidget>
#include <QTreeView>
#include <QLayout>

#include "subwindow.h"
#include "upperwindow.h"

class mwCentralWidget : public QWidget
{
    Q_OBJECT
public:
    /*explicit*/ mwCentralWidget(QWidget *parent = nullptr);
    virtual ~mwCentralWidget() {}
private:
    QTreeView* tree;
    QVBoxLayout* vb;
    QHBoxLayout* hb;
    subWindow* sw;
    upperWindow* uw;
signals:

public slots:
};

#endif // MWCENTRALWIDGET_H
