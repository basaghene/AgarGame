#include "agar_ball.h"

AgarBall::AgarBall()
    : m_id(QUuid::createUuid())
    , m_X(0)
    , m_Y(0)
    , m_color("")
    , m_isActivated(true)
{

}

AgarBall::~AgarBall()
{

}

void AgarBall::setX(int x)
{
    m_X = x;
    emit XChanged();
}

int AgarBall::X() const
{
    return m_X;
}

void AgarBall::setY(int y)
{
    m_Y = y;
    emit YChanged();

}

int AgarBall::Y() const
{
    return m_Y;
}

void AgarBall::setColor(QString color)
{
   m_color = color;
   emit colorChanged();
}

QString AgarBall::color() const
{
    return m_color;

}

void AgarBall::setIsActivated(bool isActivated)
{
    m_isActivated = isActivated;
    emit isActivatedChanged();

}

bool AgarBall::isActivated() const
{
    return m_isActivated;

}

QUuid AgarBall::id() const
{
    return m_id;

}
