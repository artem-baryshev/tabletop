#include <QDebug>
#include "tglwindow.h"
#include "pointers.h"
#include <pthread.h>

//void *repaintLoop(void * w)
//{
//    std::pair <TSharedPtr<TGLWindow>, TSharedPtr<TWorld> > ptr = static_cast <std::pair <TSharedPtr<TGLWindow>, TSharedPtr<TWorld> > > (w);
//    while(1)
//    {
//        QPainter painter(img);
//    }
//}

TGLWindow::TGLWindow(TSharedPtr <TWorld> &World) :
    QGLWidget()
{
    world = World;
//    pthread_t paintThread;
//    std::pair <TSharedPtr<TGLWindow>, TSharedPtr<TWorld> > *objs = new std::pair <TSharedPtr<TGLWindow>, TSharedPtr<TWorld> > (this, world);
//    pthread_create(paintThread, 0, repaintLoop, objs);
}

void TGLWindow::paintEvent(QPaintEvent *e)
{
    QPainter painter;
    painter.begin(this);
    painter.setRenderHint(QPainter::Antialiasing);
    world->paint(&painter, e);
    painter.end();
}

void TGLWindow::keyPressEvent(QKeyEvent *e)
{
    switch (e->key())
    {
    case Qt::Key_Escape:
        exit(0);
        break;
    }
}
