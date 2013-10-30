#ifndef TGLWINDOW_H
#define TGLWINDOW_H

#include <QGLWidget>
#include <QPaintEvent>
#include <QKeyEvent>
#include "tworld.h"
#include "pointers.h"

class TGLWindow : public QGLWidget
{
    Q_OBJECT
public:
    explicit TGLWindow(TSharedPtr<TWorld> &World);

protected:
    void paintEvent(QPaintEvent *);
//    void keyReleaseEvent(QKeyEvent *);
    void keyPressEvent(QKeyEvent *);
signals:
    
public slots:
private:
    TSharedPtr <TWorld> world;
};

#endif // TGLWINDOW_H
