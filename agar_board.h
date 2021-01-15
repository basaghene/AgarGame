#pragma once
#include <QObject>
#include "agar_ball.h"

class AgarBoard : public QObject
{
    Q_OBJECT

public:
    AgarBoard();
    virtual ~AgarBoard();

    bool removeBall(QUuid id);
    bool addBall(QUuid id);
    bool updateAgarball(AgarBall* ball);

    std::vector<AgarBall*> ballList() const;

private:
    std::vector<AgarBall*> m_ballList;
    int m_boardWidth {400};
    int m_boardHeight {300};
};
