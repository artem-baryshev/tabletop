#include <QDebug>
#include "tglwindow.h"
#include "pointers.h"

TGLWindow::TGLWindow(TSharedPtr <TWorld> &World) :
    QGLWidget()
{
    world = World;
}

void TGLWindow::paintEvent(QPaintEvent *e)
{
    QPainter painter;
    painter.begin(this);
    painter.setRenderHint(QPainter::Antialiasing);
    world->paint(&painter, e);;
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
