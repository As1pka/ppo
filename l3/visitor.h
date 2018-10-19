#ifndef VISITOR_H
#define VISITOR_H

#include <QString>
#include <QLibrary>
#include "route.h"

class Visitor
{
public:
    Visitor() {}
    virtual ~Visitor() = default;
    virtual QString visit() = 0;
};

#endif // VISITOR_H
