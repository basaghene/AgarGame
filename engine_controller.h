#pragma once
#include <QObject>

#include "agar_ball_model.h"

class EngineController : public QObject
{
    Q_OBJECT
    Q_PROPERTY(AgarBallModel* agarBallModel READ agarBallModel WRITE setAgarBallModel NOTIFY agarBallModelChanged)

public:
    EngineController();
    virtual ~EngineController();

    AgarBallModel* agarBallModel() const;

public slots:
    void setAgarBallModel(AgarBallModel* agarBallModel);

signals:
    void agarBallModelChanged(AgarBallModel* agarBallModel);

private:
    AgarBallModel* m_agarBallModel;
};
