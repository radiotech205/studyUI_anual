#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    mwcw = new mwCentralWidget(this);
    this->setCentralWidget(mwcw);

}

MainWindow::~MainWindow()
{

}
