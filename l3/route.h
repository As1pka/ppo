#ifndef ROUTE_H
#define ROUTE_H

#include <QDateTime>
#include <QVector>
#include <QGeoCoordinate>
#include <QGeoPath>

#include "structs.h"

class Route
{
public:
    Route();
    Properties route;
    QList<QGeoCoordinate> track;
    QString polyline;
};

#endif // ROUTE_H
