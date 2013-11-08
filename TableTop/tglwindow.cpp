#include <QDebug>
#include "tglwindow.h"
#include "pointers.h"
//#include <pthread.h>

TGLWindow::TGLWindow(TSharedPtr <TWorld> &World) :
    QGLWidget()
{
    world = World;
    timer = new QTimer(this);
    connect(&*timer, SIGNAL(timeout()), this, SLOT(onTimer()));
    timer->start(1000);
    setAutoBufferSwap(true);
}

void TGLWindow::onTimer()
{
    updateGL();
}

void TGLWindow::resizeGL(int w, int h)
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-1.0, 1.0, -1.0, 1.0, -10.0, 1.0);
    glViewport(0, 0, (GLint)w, (GLint)h);
}

void TGLWindow::paintGL()
{
//    QPainter painter(this);
//    TWeakPtr <QPainter> painter(new QPainter(this));
//    TWeakPtr
//    QImage img(size(), this->format());
//    painter.begin(&img);
    TPaintParameters pars;
    pars.glwidget = this;
//    pars.painter = &painter;

    makeCurrent();
    glBegin(GL_POLYGON);
    glColor3b(200, 100, 100);
    glVertex2f(11, 11);
    glVertex2f(22, 11);
    glVertex2f(22, 22);
    glVertex2f(11, 22);
    glEnd();
//    pars.rect = rect();
//    painter.setRenderHint(QPainter::Antialiasing);
    world->paint(pars);

    swapBuffers();
//    painter.end();
//    QPainter p2;
//    p2.begin(this);
//    p2.drawImage(img.rect(), img);
//    p2.end();
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
