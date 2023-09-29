#ifndef SUBWINDOW_H
#define SUBWINDOW_H

#include <QObject>
#include <QWidget>
#include <QFrame>
#include <QLayout>
#include <QPushButton>

class subWindow : public QWidget
{
    Q_OBJECT
public:
    /*explicit*/ subWindow(QWidget *parent = nullptr);
    virtual ~subWindow() {}
private:
    QFrame* frame01;
    QFrame* frame02;
    QFrame* frame03;
    QVBoxLayout* vb;
signals:

public slots:
};

#endif // SUBWINDOW_H
