#include "enemy.h"
#include <stdlib.h>

extern Game *game;
Enemy::Enemy()
{
    int randomPos = rand() % 700;

    setPixmap(QPixmap(":/Images/enemy.png").scaled(100,100));


    setPos(randomPos,0);


    QTimer *time = new QTimer();
    connect(time,SIGNAL(timeout()),this,SLOT(move()));
    time->start(50);



}

void Enemy::move()
{
    setPos(x(),y()+5);
    if(pos().y()+10 > 700){
        scene()->removeItem(this);
        game->health->decrease();


        delete this;
    }

}
