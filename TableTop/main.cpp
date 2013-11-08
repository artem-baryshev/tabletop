//#include <QtGui/QApplication>
//#include <QtGui
#include <QApplication>
#include <QGLWidget>
#include <QtOpenGL>
#include "pointers.h"
#include "mainwindow.h"
#include "tglwindow.h"
#include "tworld.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    TSharedPtr <TWorld> g(new TWorld);
    TGLWindow w(g);
//    w.showFullScreen();
    w.show();
//    MainWindow w;
//    w.show();
    
    return a.exec();
}
