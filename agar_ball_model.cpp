#include "agar_ball_model.h"

AgarBallModel::AgarBallModel(QObject* parent)
    : QAbstractListModel(parent)
{}

AgarBallModel::~AgarBallModel()
{}

void AgarBallModel::addAgarBall(AgarBall* agarBall)
{
    beginInsertRows(QModelIndex(), rowCount(), rowCount());
    m_agarBallList << agarBall;
    endInsertRows();
}

int AgarBallModel::rowCount(const QModelIndex& parent) const
{
    Q_UNUSED(parent)
    return m_agarBallList.count();
}

QVariant AgarBallModel::data(const QModelIndex& index, int role) const
{
    if(index.row() < 0 || index.row() >= m_agarBallList.count())
    {
        return QVariant();
    }

    const AgarBall& agarBall = *m_agarBallList[index.row()];

    if(role == IsActivatedRole){
        return agarBall.isActivated();
    }
    else if(role == ColorRole) {
        return agarBall.color();
    }

    return QVariant();
}

QHash<int, QByteArray> AgarBallModel::roleNames() const
{
    QHash<int, QByteArray> roles;
    roles[IsActivatedRole] = "ballActivated";
    roles[ColorRole] = "ballColor";

    return roles;
}

AgarBall* AgarBallModel::getByIndex(const int index) const
{
    if(m_agarBallList.count() > index)
    {
        return m_agarBallList.at(index);
    }
    else
    {
        return new AgarBall();
    }
}
