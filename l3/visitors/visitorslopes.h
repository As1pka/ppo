#ifndef VISITORSLOPES_H
#define VISITORSLOPES_H

#include "visitor.h"

class VisitorSlopes : public Visitor
{
    QList<QGeoCoordinate> track;
public:
    VisitorSlopes();
    VisitorSlopes(const QList<QGeoCoordinate> &t);
    ~VisitorSlopes() override;
    QString visit() override;
};

#endif // VISITORSLOPES_H
