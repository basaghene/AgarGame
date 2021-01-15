#include "agar_board.h"

#include <stdlib.h>

AgarBoard::AgarBoard()
{

}

AgarBoard::~AgarBoard()
{

}

bool AgarBoard::removeBall(QUuid id)
{
 for(std::vector<AgarBall*>::iterator it = m_ballList.begin(); it!=m_ballList.end();)
 {
     if((*it)->id() == id)
     {
         m_ballList.erase(it);
     }
 }
 return true;

}

bool AgarBoard::updateAgarball(AgarBall* ball)
{
   for(std::vector<AgarBall*>::iterator it = m_ballList.begin(); it!=m_ballList.end();)
   {
        while((*it)->X() != ball->X() && (*it)->Y() != ball->Y())
        {
           int x = rand() % m_boardWidth;
           int y = rand() % m_boardHeight;
           ball->setX(x);
           ball->setY(y);
           return true;

        }

   }
   return false;
}


std::vector<AgarBall*> AgarBoard::ballList() const
{
    return m_ballList;
}
