#include "tobject.h"

TObject::TObject(QObject *parent) :
    QObject(parent)
{
}

QPointF TObject::Position()
{
    return pos;
}

QPointF TObject::Orientation()
{
    return orient;
}

void TObject::setPosition(TPosition Pos)
{
    pos = Pos;
}

void TObject::setOrientation(TOrientation Orient)
{
    orient = Orient;
}

TObject::~TObject()
{

}
