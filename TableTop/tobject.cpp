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

TObject::~TObject()
{

}
