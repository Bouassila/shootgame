#include "myrect.h"
#include <QDebug>



MyRect::MyRect()
{

}

void MyRect::keyPressEvent(QKeyEvent *event)
{

    if(event->key() == 16777236){
        if(pos().x()+50 < 1000){
        setPos(x()+20,y());
        }
    }
    if(event->key() == 16777234){
        if(pos().x() > 0){
        setPos(x()-20,y());
        }
    }

    if(event->key() == ' '){
        Bullet *bullet = new Bullet();
        Bullet *bulletRight = new Bullet();
        scene()->addItem(bullet);
        bullet->setPos(x(),y());
        scene()->addItem(bulletRight);
        bulletRight->setPos(x()+45,y());


        bullet->move();
    }


}

void MyRect::spawn()
{
    Enemy * enemy = new Enemy();

    scene()->addItem(enemy);
}
