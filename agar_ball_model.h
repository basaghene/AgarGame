#ifndef AGAR_BALL_MODEL_H
#define AGAR_BALL_MODEL_H

#include <QObject>
#include <QAbstractListModel>

#include "agar_ball.h"

class AgarBallModel: public QAbstractListModel
{
        Q_OBJECT
    public:
        enum AgarBallRoles {
            IsActivatedRole = Qt::UserRole + 1,
            ColorRole,
        };

        /**
         * @brief C-tor
         * @param parent; parent QObject based component
         */
        AgarBallModel(QObject *parent = nullptr);

        /**
         * @brief D-tor
         */
        ~AgarBallModel();

        void addAgarBall(AgarBall* agarBall);

        int rowCount(const QModelIndex& parent = QModelIndex()) const;

        QVariant data(const QModelIndex & index, int role = Qt::DisplayRole) const;

        QHash<int, QByteArray> roleNames() const;

        AgarBall* getByIndex(const int index) const;

    private:
    signals:
        void dataChanged(const QModelIndex & topLeft, const QModelIndex & bottomRight);

    private:
        QList<AgarBall*> m_agarBallList;
};

#endif // AGAR_BALL_MODEL_H
