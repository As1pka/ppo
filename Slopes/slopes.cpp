#include "slopes.h"

#include <QDebug>
#include <QGeoPath>
#include <QtMath>

QString slopesCounter(QList<QGeoCoordinate> track);

VisitorSlopes::VisitorSlopes(QList<QGeoCoordinate> t)
{
    track = t;
}

VisitorSlopes::~VisitorSlopes() { }

QString VisitorSlopes::visit()
{
    QString res = slopesCounter(track);

    return res;
}

QString slopesCounter(QList<QGeoCoordinate> track)
{
    int count = 0;
    QString res = QString("Невозможно подсчитать количество склонов.\n\n");
    int end = track.size() - 1;
    if (end < 1)
        return res;

    QGeoCoordinate a, b;
    double angle, dist, height;
    angle = 0.;
    for (int i = 0; i < end; i++)
    {
        double newAngle;
        a = QGeoCoordinate(track.at(i));
        b = QGeoCoordinate(track.at(i + 1));
        dist = QGeoPath(QList<QGeoCoordinate>({a, b})).length()/1000.;
        if ((b.altitude() == 0) && (a.altitude() == 0))
        {
            angle = 0;
            continue;
        }
        height = fabs(b.altitude() - a.altitude());
        newAngle = qRadiansToDegrees(qAtan(dist/height));

        if (fabs(angle) >= 8.)
        {
            if ((angle >= 0) && (newAngle >= 0))
                count++;
            else if ((angle < 0) && (newAngle < 0))
                count++;
        }
        angle = newAngle;
    }

    if (count)
    {
        res = QString("Количество крутых склонов: ");
        res.append(QString::number(count));
        res.append("\n");
        res.append("\n");
    }

    return res;
}

VisitorSlopes *buildVisitor(QList<QGeoCoordinate> track)
{
    VisitorSlopes *visitor = new VisitorSlopes(track);

    return visitor;
}

