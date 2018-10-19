#ifndef SLOPETYPES_H
#define SLOPETYPES_H

#include "slopetypes_global.h"
#include <QGeoCoordinate>
#include "visitor.h"

class SLOPETYPESSHARED_EXPORT VisitorSlopeTypes : public Visitor
{
    QList<QGeoCoordinate> track;
public:
    VisitorSlopeTypes() { }
    VisitorSlopeTypes(const QList<QGeoCoordinate> t);
    ~VisitorSlopeTypes() override;
    QString visit() override;
};

extern "C"
{
    SLOPETYPESSHARED_EXPORT VisitorSlopeTypes *buildVisitor(QList<QGeoCoordinate> track);
}

#endif // SLOPETYPES_H
