#ifndef VISITORMANAGER_H
#define VISITORMANAGER_H

#include "visitor.h"

class VisitorManager
{
    QVector<Visitor*> visitors;
public:
    VisitorManager(QList<QGeoCoordinate> track);
    QVector<QString> manage();
    QString accept(Visitor *v);
};

#endif // VISITORMANAGER_H
