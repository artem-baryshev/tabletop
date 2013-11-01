#include "tfighter.h"

TFighter::TFighter(TObject *parent) :
    TObject(parent)
{
}

void TFighter::paint(TPaintParameters &p)
{
    float r = 20;
    p.painter->drawEllipse(pos, r, r);
//    QPointF nose1(orient / orient.)
}

TFighter::~TFighter()
{

}
