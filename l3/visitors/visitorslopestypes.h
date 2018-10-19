#ifndef VISITORSLOPETYPES_H
#define VISITORSLOPETYPES_H

#include "visitor.h"

class VisitorSlopeTypes : public Visitor
{
    QList<QGeoCoordinate> track;
public:
    VisitorSlopeTypes();
    VisitorSlopeTypes(const QList<QGeoCoordinate> &t);
    ~VisitorSlopeTypes() override;
    QString visit() override;
};

#endif // VISITORSLOPETYPES_H
