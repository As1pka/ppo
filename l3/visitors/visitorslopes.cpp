#include "visitorslopes.h"

#include <QDebug>

typedef QString (*Counter)(const QList<QGeoCoordinate>);

VisitorSlopes::VisitorSlopes() { }

VisitorSlopes::VisitorSlopes(const QList<QGeoCoordinate> &t)
{
    track = t;
}

VisitorSlopes::~VisitorSlopes() { }

QString VisitorSlopes::visit()
{
    QLibrary lib("Slopesd");
    if(!lib.load())
        return QString("Can`t load lib.");

    QString res;
    Counter counter = (Counter)lib.resolve("slopesCounter");

    if(counter)
        res = counter(track);

    return res;
}
