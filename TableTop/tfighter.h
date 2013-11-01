#ifndef TFIGHTER_H
#define TFIGHTER_H

#include "tobject.h"

class TFighter : public TObject
{
    Q_OBJECT
public:
    explicit TFighter(TObject *parent = 0);
    ~TFighter();
    virtual void paint(TPaintParameters &p);
signals:
    
public slots:
private:

};

#endif // TFIGHTER_H
