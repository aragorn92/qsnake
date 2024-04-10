#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    m_gameField=new GameField() ;
}

MainWindow::~MainWindow()
{
    delete ui;
}

