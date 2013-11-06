#include "tworld.h"
#include <QDebug>

TWorld::TWorld(QObject *parent) :
    QObject(parent)
{
    f1 = new TFighter();
    f1->setPosition(TPosition(50, 50));
    f1->setOrientation(TOrientation(20));
    f2 = new TFighter();
    f2->setPosition(TPosition(150, 50));
    f2->setOrientation(TOrientation(1, 0));

    tmr = new QTimer(this);

    connect(&*tmr, SIGNAL(timeout()), this, SLOT(onTimer()));

    tmr->start(100);
}

void TWorld::paint(QPainter *painter, QPaintEvent *event)
{
    TPaintParameters pars;
    pars.event = event;
    pars.painter = painter;
    f1->paint(pars);
    f2->paint(pars);
}

void TWorld::onTimer()
{

}
