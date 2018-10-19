#ifndef TURNS_H
#define TURNS_H

#include "turns_global.h"
#include <QGeoCoordinate>
#include "visitor.h"

class TURNSSHARED_EXPORT VisitorTurns : public Visitor
{
    QList<QGeoCoordinate> track;
public:
    VisitorTurns() { }
    VisitorTurns(QList<QGeoCoordinate> t);
    ~VisitorTurns() override;
    QString visit() override;
};

extern "C"
{
    TURNSSHARED_EXPORT VisitorTurns *buildVisitor(QList<QGeoCoordinate> track);
}

#endif // TURNS_H
