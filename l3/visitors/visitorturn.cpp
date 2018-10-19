#include "visitorturn.h"

#include <QDebug>

typedef QString (*Counter)(const QList<QGeoCoordinate>);

VisitorTurn::VisitorTurn(const QList<QGeoCoordinate> &t)
{
    track = t;
}

VisitorTurn::~VisitorTurn() { }

QString VisitorTurn::visit()
{
    QLibrary lib("Turnsd");
    if(!lib.load())
        return QString("Can`t load lib.");

    QString res;
    Counter counter = (Counter) lib.resolve("turnsCounter");
    if(counter)
        res = counter(track);

    return res;
}
