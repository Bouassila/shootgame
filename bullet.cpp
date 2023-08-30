#include "bullet.h"
#include <QList>
#include "game.h"


extern Game *game;
Bullet::Bullet()
{
    setPixmap(QPixmap(":/Images/bullet.png").scaled(20,70));
    QTimer *time = new QTimer();
    connect(time,SIGNAL(timeout()),this,SLOT(move()));
    time->start(20);



}

void Bullet::move()
{
    QList<QGraphicsItem *> colliding_items = collidingItems();
    for(int i = 0;i<colliding_items.size();i++){
        if(typeid(*(colliding_items[i])) == typeid(Enemy)){
            game->score->increase();
        scene()->removeItem(colliding_items[i]);
        scene()->removeItem(this);
        delete colliding_items[i];
        delete this;
        return ;
        }
    }
    setPos(x(),y()-10);
    if(pos().y()+10 < 0){
        scene()->removeItem(this);
        delete this;
    }
}
