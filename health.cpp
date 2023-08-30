#include "health.h"

Health::Health(QGraphicsItem *parent): QGraphicsTextItem(parent)
{
    health = 3;

    setPlainText(QString("Health: ") +  QString::number(health));
    setDefaultTextColor(Qt::blue);
    setFont(QFont("times",16));

}

void Health::decrease()
{
    health--;
    setPlainText(QString("Health: ") +  QString::number(health));
    setDefaultTextColor(Qt::blue);
    setFont(QFont("times",16));

}

int Health::getHealth()
{
    return health;

}
