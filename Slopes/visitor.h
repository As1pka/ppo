#ifndef VISITOR_H
#define VISITOR_H

#include <QString>
#include <QLibrary>

class Visitor
{
public:
    Visitor() {}
    virtual ~Visitor() = default;
    virtual QString visit() = 0;
};

#endif // VISITOR_H
