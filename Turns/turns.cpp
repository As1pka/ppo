#include "turns.h"

#include <QDebug>
#include <QGeoPath>
#include <QtMath>

int whichType(double angle);
QString makeResult(QVector<int> types);
QString turnsCounter(QList<QGeoCoordinate> track);

VisitorTurns::VisitorTurns(QList<QGeoCoordinate> t)
{
    track = t;
}

VisitorTurns::~VisitorTurns() { }

QString VisitorTurns::visit()
{
    QString res = turnsCounter(track);

    return res;
}


QString turnsCounter(QList<QGeoCoordinate> track)
{
    QString res = "Невозможно подсчитать количество поворотов.\n\n";
    QVector<int> types = {0, 0, 0, 0, 0, 0, 0, 0};

    int end = track.size() - 2;
    if (end < 1)
        return res;

    QGeoCoordinate a, b, c;
    double angle, dist1, dist2;
    angle = 0.;
    int type = 8;
    for (int i = 0; i < end; i += 2)
    {
        double newAngle;
        a = QGeoCoordinate(track.at(i));
        b = QGeoCoordinate(track.at(i + 1));
        c = QGeoCoordinate(track.at(i + 2));
        dist1 = QGeoPath(QList<QGeoCoordinate>({a, b})).length()/1000.;
        dist2 = QGeoPath(QList<QGeoCoordinate>({a, c})).length()/1000.;
        if ((dist1 == 0) || (dist2 == 0))
        {
            angle = 0.;
            continue;
        }
        newAngle = qRadiansToDegrees(qAtan(dist1/dist2));
        if (c.latitude() < b.latitude())
            newAngle *= -1;
        int tmp = whichType(fabs(newAngle));
        if (tmp != 8)
        {
            if ((tmp != type) || ((angle >= 0.) && (newAngle < 0.)))
            {
                types[tmp] += 1;
                type = tmp;
            }
            else if ((type == tmp) || ((angle < 0.) && (newAngle >= 0.)))
            {
                types[tmp] += 1;
                type = tmp;
            }
        }
        else
            type = tmp;
        angle = newAngle;
    }

    for (int i = 0; i < types.size(); i ++)
    {
        if (types[i] != 0)
            break;
        if (i == types.size() - 1)
            return res;
    }

    res = makeResult(types);

    return res;
}

int whichType(double angle)
{
    if (angle < 6.)
        return 0;
    else if (angle < 11.5)
        return 1;
    else if (angle < 34.)
        return 2;
    else if (angle < 56.5)
        return 3;
    else if (angle < 79.)
        return 4;
    else if (angle < 90.)
        return 5;
    else if (angle < 135.5)
        return 6;
    else if (angle < 160.)
        return 7;

    return 8;
}

QString makeResult(QVector<int> types)
{
    QString res;

    res.append("Количество поворотов 0 категории: ");
    res.append(QString::number(types[0]));
    res.append("\n");

    res.append("Количество поворотов 1 категории: ");
    res.append(QString::number(types[1]));
    res.append("\n");

    res.append("Количество поворотов 2 категории: ");
    res.append(QString::number(types[2]));
    res.append("\n");

    res.append("Количество поворотов 3 категории: ");
    res.append(QString::number(types[3]));
    res.append("\n");

    res.append("Количество поворотов 4 категории: ");
    res.append(QString::number(types[4]));
    res.append("\n");

    res.append("Количество поворотов 5 категории: ");
    res.append(QString::number(types[5]));
    res.append("\n");

    res.append("Количество поворотов 6 категории: ");
    res.append(QString::number(types[6]));
    res.append("\n");

    res.append("Количество поворотов 7 категории: ");
    res.append(QString::number(types[7]));
    res.append("\n");
    res.append("\n");

    return res;
}

VisitorTurns *buildVisitor(QList<QGeoCoordinate> track)
{
    VisitorTurns *visitor = new VisitorTurns(track);

    return visitor;
}
