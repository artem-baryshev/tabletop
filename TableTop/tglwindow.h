#ifndef TGLWINDOW_H
#define TGLWINDOW_H

#include <QGLWidget>
#include <QPaintEvent>
#include <QKeyEvent>
#include <QTimer>
#include "tworld.h"
#include "pointers.h"

class TGLWindow : public QGLWidget
{
    Q_OBJECT
public:
    explicit TGLWindow(TSharedPtr<TWorld> &World);

protected:
//    void paintEvent(QPaintEvent *);
    void paintGL();
//    void initializeGL();
    void resizeGL(int w, int h);
//    void keyReleaseEvent(QKeyEvent *);
    void keyPressEvent(QKeyEvent *);
signals:
    
public slots:
    void onTimer();
private:
    TSharedPtr <TWorld> world;
    TSharedPtr <QTimer> timer;
};

#endif // TGLWINDOW_H
