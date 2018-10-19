#ifndef SLOPES_H
#define SLOPES_H

#include "slopes_global.h"
#include <QGeoCoordinate>
#include "visitor.h"

class SLOPESSHARED_EXPORT VisitorSlopes : public Visitor
{
    QList<QGeoCoordinate> track;
public:
    VisitorSlopes() { }
    VisitorSlopes(QList<QGeoCoordinate> t);
    ~VisitorSlopes() override;
    QString visit() override;
};

extern "C"
{
    SLOPESSHARED_EXPORT VisitorSlopes *buildVisitor(QList<QGeoCoordinate> track);
}

#endif // SLOPES_H
