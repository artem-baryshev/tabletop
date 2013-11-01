#include "tworld.h"

TWorld::TWorld(QObject *parent) :
    QObject(parent)
{
    f1 = new TFighter();
    f1->setPosition(TPosition(50, 50));
    f1->setOrientation(TOrientation(1, 0));
    f2 = new TFighter();
    f2->setPosition(TPosition(150, 50));
    f2->setOrientation(TOrientation(-1, 0));
}

void TWorld::paint(QPainter *painter, QPaintEvent *event)
{
    TPaintParameters pars;
    pars.event = event;
    pars.painter = painter;
    f1->paint(pars);
    f2->paint(pars);
}
