#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    gl = new QGLWidget();
    gl->resize(this->size());
//    gl->resize(
//    gl->show();
    gl->showFullScreen();
}

MainWindow::~MainWindow()
{
    delete ui;
}
