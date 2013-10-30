#ifndef TWORLD_H
#define TWORLD_H

#include <QObject>
#include <QPainter>
#include <QPaintEvent>
#include "tobject.h"

class TWorld : public QObject
{
    Q_OBJECT
public:
    explicit TWorld(QObject *parent = 0);
    void paint(QPainter *painter, QPaintEvent *event);
signals:
    
public slots:
    
};

#endif // TWORLD_H
