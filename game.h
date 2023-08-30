#ifndef GAME_H
#define GAME_H
#include <QApplication>
#include <myrect.h>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QTimer>
#include <QObject>
#include <QWidget>
#include "score.h"
#include "health.h"



class Game:public QGraphicsView
{
public:
    Game(QWidget * parent=0);

    QGraphicsScene * scene;

    Score * score;
    Health * health;
};

#endif // GAME_H
