#ifndef MYRECT_H
#define MYRECT_H
#include <QGraphicsRectItem>
#include <QKeyEvent>
#include <QEvent>
#include "bullet.h"
#include <QGraphicsScene>
#include <QObject>
#include "enemy.h"
#include <QGraphicsPixmapItem>


class MyRect : public QObject , public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    MyRect();
    void keyPressEvent(QKeyEvent *event);
public slots:
    void spawn();

};

#endif // MYRECT_H
