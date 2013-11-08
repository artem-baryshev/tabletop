#ifndef TOBJECT_H
#define TOBJECT_H

#include <QObject>
#include <QPainter>
#include <QPaintEvent>
#include <QGLWidget>
#include <math.h>
#include "pointers.h"

struct TPaintParameters
{
//    QPainter> painter;
    QGLWidget * glwidget;
//    QRect rect;
//    QPaintEvent *event;
};

class TPosition : public QPointF
{
public:
    TPosition() : QPointF() {}
    TPosition(const QPoint &p) : QPointF(p) {}
    TPosition(qreal x, qreal y) : QPointF(x, y) {}
    TPosition(const TPosition &p) : QPointF(p.x(), p.y()) {}
    TPosition movedX(qreal dx) {return TPosition(x() + dx, y());}
    TPosition movedY(qreal dy) {return TPosition(x(), y() + dy);}
    TPosition moved(TPosition dp) {return TPosition(*this).movedX(dp.x()).movedY(dp.y());}
};
//typedef QPointF TOrientation;
class TOrientation : public QPointF
{
public:
    TOrientation() : QPointF(1, 0) { angle = 0; }
    TOrientation(qreal a) : QPointF(sin(a * M_PI / 180), cos(a * M_PI / 180)) { resetAngle(); }
    TOrientation(const QPoint &p) : QPointF(p) { resetAngle(); }
    TOrientation(qreal x, qreal y) : QPointF(x / sqrt(x*x + y*y), y / sqrt(x*x + y*y)) { resetAngle(); }
    qreal getAngle();
private:
    void resetAngle();
    qreal angle;
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
    TPosition Position();
    TOrientation Orientation();
signals:
    
public slots:
protected:
    TPosition pos;
    TOrientation orient;
private:

};

#endif // TOBJECT_H
