#ifndef BULLET_H
#define BULLET_H
#include <QGraphicsRectItem>
#include <QTimer>
#include <QObject>
#include <QGraphicsScene>
#include "enemy.h"
#include "score.h"
#include <QGraphicsPixmapItem>


class Bullet:public QObject , public QGraphicsPixmapItem
{
    Q_OBJECT


public:
    Bullet();

public slots:
    void move();
};

#endif // BULLET_H
