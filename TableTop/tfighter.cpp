#include "tfighter.h"

TFighter::TFighter(TObject *parent) :
    TObject(parent)
{
}

void TFighter::paint(TPaintParameters &p)
{
    float r = 20;
    p.painter->save();
//    QRect viewport = p.painter->viewport();
//    viewport.moveTo(pos.x() - viewport.width()/2, pos.y() - viewport.height()/2);
//    p.painter->setViewport(viewport);
//    p.painter->setWindow(pos.x(), pos.y(), pos.x() + r, pos.y() + r);
//    p.painter->rotate(rand() % 360);
//    QRect rct = p.painter->viewport();
//    p.painter->setViewport(pos.x(), pos.y(), pos.x() + r, pos.y() + r);
//    p.painter->rotate(rand() % 360);
//    p.painter->setViewport(rct);
    p.painter->drawEllipse(pos, r, r);
    p.painter->drawLine(pos, pos.movedX(r));
    p.painter->restore();
//    QPointF nose1(orient / orient.)
}

TFighter::~TFighter()
{

}
