#include <QtGui/QApplication>
#include <QGLWidget>
#include <QtOpenGL>
#include "pointers.h"
#include "mainwindow.h"
#include "tglwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    TGLWindow w;
    w.showFullScreen();
//    MainWindow w;
//    w.show();
    
    return a.exec();
}
