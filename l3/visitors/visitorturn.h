#ifndef VISITORTURN_H
#define VISITORTURN_H

#include "visitor.h"

class VisitorTurn : public Visitor
{
    QList<QGeoCoordinate> track;
public:
    VisitorTurn() { }
    VisitorTurn(const QList<QGeoCoordinate> &t);
    ~VisitorTurn() override;
    QString visit() override;
};

#endif // VISITORTURN_H
