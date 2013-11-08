#include "tfighter.h"
#include <QDebug>
#include <QtOpenGL>

TFighter::TFighter(TObject *parent) :
    TObject(parent)
{
}

void TFighter::paint(TPaintParameters &p)
{
    float r = 20;
//    makecurrent
    p.glwidget->makeCurrent();
    glBegin(GL_POLYGON);
    glColor3b(200, 100, 100);
    glVertex2f(pos.x() - r, pos.y() - r);
    glVertex2f(pos.x() - r, pos.y() + r);
    glVertex2f(pos.x() + r, pos.y() + r);
    glVertex2f(pos.x() + r, pos.y() - r);
    glEnd();
//    p.painter->save();
//    p.painter->setPen(QPen(Qt::red));
//    p.painter->translate(pos);
//    p.painter->rotate(this->Orientation().getAngle());
//    TPosition center(0, 0);
//    p.painter->drawEllipse(center, r, r);
//    p.painter->drawLine(center, center.movedX(r));
//    p.painter->restore();
}

TFighter::~TFighter()
{

}
