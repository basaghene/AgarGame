#pragma once
#include <QObject>
#include <QUuid>

class AgarBall : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString color READ color WRITE setColor NOTIFY colorChanged)
    Q_PROPERTY(bool isActivated READ isActivated WRITE setIsActivated NOTIFY isActivatedChanged)
    Q_PROPERTY(int X READ X WRITE setX NOTIFY XChanged)
    Q_PROPERTY(int Y READ Y WRITE setY NOTIFY YChanged)

public:
    AgarBall();
    virtual ~AgarBall();

    QUuid id() const;

    void setX(int x);
    int X() const;

    void setY(int y);
    int Y() const;

    void setColor(QString color);
    QString color() const;

    void setIsActivated(bool isActivated);
    bool isActivated()const;

signals:
    void colorChanged();
    void isActivatedChanged();
    void XChanged();
    void YChanged();

private:
    QUuid m_id;
    int m_X;
    int m_Y;
    QString m_color;
    bool m_isActivated;
};
Q_DECLARE_METATYPE(AgarBall *)
Q_DECLARE_METATYPE(const AgarBall *)
