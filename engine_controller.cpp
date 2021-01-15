#include "engine_controller.h"

EngineController::EngineController()
    : m_agarBallModel(new AgarBallModel(parent()))
{}

EngineController::~EngineController() {}

AgarBallModel *EngineController::agarBallModel() const
{
    return m_agarBallModel;
}

void EngineController::setAgarBallModel(AgarBallModel *agarBallModel)
{
    if (m_agarBallModel == agarBallModel)
        return;

    m_agarBallModel = agarBallModel;
    emit agarBallModelChanged(m_agarBallModel);
}

