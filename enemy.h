#ifndef ENEMY_H
#define ENEMY_H


#include <QGraphicsRectItem>
#include <QTimer>
#include <QObject>
#include <QGraphicsScene>
#include "game.h"
#include <QGraphicsPixmapItem>


class Enemy:public QObject , public QGraphicsPixmapItem
{
    Q_OBJECT


public:
    Enemy();

public slots:
    void move();
};


#endif // ENEMY_H
