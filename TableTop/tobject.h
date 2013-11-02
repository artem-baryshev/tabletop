#ifndef TOBJECT_H
#define TOBJECT_H

#include <QObject>
#include <QPainter>
#include <QPaintEvent>

#include "pointers.h"


struct TPaintParameters
{
    QPainter *painter;
    QPaintEvent *event;
};

typedef QPointF TPosition;
//typedef QPointF TOrientation;
class TOrientation : public QPointF
{
public:
    TOrientation() : QPointF() {}
    TOrientation(const QPoint &p) : QPointF(p) {}
    TOrientation(qreal x, qreal y) : QPointF(x, y) {}
};

class TObject : public QObject
{
    Q_OBJECT
public:
    explicit TObject(QObject *parent = 0);
    virtual ~TObject();
    void setPosition(TPosition Pos);
    void setOrientation(TOrientation Orient);
    virtual void paint(TPaintParameters &p) = 0;
    QPointF Position();
    QPointF Orientation();
signals:
    
public slots:
protected:
    TPosition pos;
    TOrientation orient;
private:

};

#endif // TOBJECT_H
