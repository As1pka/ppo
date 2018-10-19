#include "slopetypes.h"

#include "iostream"
#include <QDebug>
#include <QGeoPath>
#include <QtMath>

int whichType(double angle);
int acceptingSlope(int type, double slopeLen);
QString makeResult(QVector<int> types);
QString slopeTypesCounter(QList<QGeoCoordinate> track);

VisitorSlopeTypes::VisitorSlopeTypes(QList<QGeoCoordinate> t)
{
    track = t;
}

VisitorSlopeTypes::~VisitorSlopeTypes() { }

QString VisitorSlopeTypes::visit()
{
    QString res = slopeTypesCounter(track);

    return res;
}

QString slopeTypesCounter(QList<QGeoCoordinate> track)
{
    QString res = QString("Невозможно подсчитать типы склонов.\n\n");
    int end = track.size() - 1;
    if (end < 1)
        return res;

    QVector<int> types = {0, 0, 0, 0, 0};
    int type = 5;
    QGeoCoordinate a, b;
    double angle, dist, height, slopeLen;
    angle = slopeLen = 0.;
    for (int i = 0; i < end; i++)
    {
        double newAngle;
        a = QGeoCoordinate(track.at(i));
        b = QGeoCoordinate(track.at(i + 1));
        dist = QGeoPath(QList<QGeoCoordinate>({a, b})).length()/1000.;
        if ((b.altitude() == 0) && (a.altitude() == 0))
        {
            angle = slopeLen = 0.;
            continue;
        }
        height = fabs(b.altitude() - a.altitude());
        newAngle = qRadiansToDegrees(qAtan(dist/height));

        int tmp = whichType(newAngle);
        if (tmp != 5)
        {
            if ((type == tmp) && (angle >= 0.) && (newAngle >= 0.))
                slopeLen += dist;
            else if ((type == tmp) && (angle < 0.) && (newAngle < 0.))
                slopeLen += dist;
            else
            {
                if (type != 5)
                {
                    types[tmp] += acceptingSlope(type, slopeLen);
                    slopeLen = 0.;
                }
                else
                    slopeLen = dist;

                type = tmp;
            }
        }
        else
        {
            type = tmp;
            slopeLen = 0;
        }

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
    if (angle >= 2 && angle < 4.)
        return 0;
    else if (angle >= 4. && angle < 8.)
        return 1;
    else if (angle >= 8. && angle < 15.)
        return 2;
    else if (angle >= 15. && angle < 35.)
        return 3;
    else if (angle >= 35.)
        return 4;

    return 5;
}

int acceptingSlope(int type, double slopeLen)
{
    switch (type) {
    case 0:
        if (slopeLen >= 600)
            return 1;
        break;
    case 1:
        if (slopeLen >= 450)
            return 1;
        break;
    case 2:
        if (slopeLen >= 350)
            return 1;
        break;
    case 3:
        if (slopeLen >= 300)
            return 1;
        break;
    case 4:
        if (slopeLen >= 270)
            return 1;
        break;
    }

    return 0;
}

QString makeResult(QVector<int> types)
{
    QString res;

    res.append("Количество очень пологих склонов: ");
    res.append(QString::number(types[0]));
    res.append("\n");

    res.append("Количество пологих склонов: ");
    res.append(QString::number(types[1]));
    res.append("\n");

    res.append("Количество склонов средней крутизны: ");
    res.append(QString::number(types[2]));
    res.append("\n");

    res.append("Количество крутых склонов: ");
    res.append(QString::number(types[3]));
    res.append("\n");

    res.append("Количество очень крутых склонов: ");
    res.append(QString::number(types[4]));
    res.append("\n");
    res.append("\n");

    return res;
}

VisitorSlopeTypes *buildVisitor(QList<QGeoCoordinate> track)
{
    VisitorSlopeTypes *visitor = new VisitorSlopeTypes(track);

    return visitor;
}
