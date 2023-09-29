#ifndef UPPERWINDOW_H
#define UPPERWINDOW_H

#include <QObject>
#include <QWidget>
#include <QLayout>
#include <QPushButton>
#include <QSpacerItem>
class upperWindow : public QWidget
{
    Q_OBJECT
public:
    /*explicit*/ upperWindow(QWidget *parent = nullptr);
    virtual ~upperWindow() {}
private:
    QPushButton* pb1;
    QPushButton* pb2;
    QSpacerItem* sp;
    QHBoxLayout* hb;

signals:

public slots:
};

#endif // UPPERWINDOW_H
