#include "tfighter.h"
#include <QDebug>

TFighter::TFighter(TObject *parent) :
    TObject(parent)
{
}

void TFighter::paint(TPaintParameters &p)
{
    float r = 20;
    p.painter->save();
    p.painter->translate(pos);
    p.painter->rotate(this->Orientation().getAngle());
    TPosition center(0, 0);
    p.painter->drawEllipse(center, r, r);
    p.painter->drawLine(center, center.movedX(r));
    p.painter->restore();
}

TFighter::~TFighter()
{

}
