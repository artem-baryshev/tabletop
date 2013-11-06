#include "tobject.h"
#include <QDebug>

TObject::TObject(QObject *parent) :
    QObject(parent)
{
}

TPosition TObject::Position()
{
    return pos;
}

TOrientation TObject::Orientation()
{
    return orient;
}

qreal TOrientation::getAngle()
{
    return -angle;
}

void TOrientation::resetAngle()
{
    if (y() >= 0)
    {
        if (x() >= 0)
        {
            angle = acos(x());
        }
        else
        {
            angle = M_PI - acos(x());
        }
    }
    else
    {
        if (x() >= 0)
        {
            angle = - acos(x());
        }
        else
        {
            angle = - M_PI + acos(x());
        }
    }
    angle *= 180 / M_PI;
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
