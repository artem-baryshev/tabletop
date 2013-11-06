#ifndef TWORLD_H
#define TWORLD_H

#include <QObject>
#include <QPainter>
#include <QPaintEvent>
#include <QTimer>

#include "tfighter.h"

class TWorld : public QObject
{
    Q_OBJECT
public:
    explicit TWorld(QObject *parent = 0);
    void paint(QPainter *painter, QPaintEvent *event);
signals:
    
public slots:
    void onTimer();
private:
    TSharedPtr <TFighter> f1, f2;
    TSharedPtr <QTimer> tmr;
};

#endif // TWORLD_H
