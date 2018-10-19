#include "visitorslopestypes.h"

#include <QDebug>

typedef QString (*Counter)(const QList<QGeoCoordinate>);

VisitorSlopeTypes::VisitorSlopeTypes() { }

VisitorSlopeTypes::VisitorSlopeTypes(const QList<QGeoCoordinate> &t)
{
    track = t;
}

VisitorSlopeTypes::~VisitorSlopeTypes() { }

QString VisitorSlopeTypes::visit()
{
    QLibrary lib("SlopeTypesd");
    if(!lib.load())
        return QString("Can`t load lib.");

    QString res;
    Counter counter = (Counter)lib.resolve("slopeTypesCounter");

    if(counter)
        res = counter(track);

    return res;
}
