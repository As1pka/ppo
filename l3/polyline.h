#ifndef POLYLINE_H
#define POLYLINE_H

#include "structs.h"
#include "route.h"

class Polyline
{
    static QString encodeCoordinate(const QGeoCoordinate &coordinate);
    static QString encodeNumber(double number);
    static int decodeCoordinate(QString &polyline, QGeoCoordinate &coordinate);
    static double decodeNumber(QString &polyline);

public:
    static QString encode(const QList<QGeoCoordinate> &route);
    static QList<QGeoCoordinate> decode(const QString &polyline);
};

#endif // POLYLINE_H
