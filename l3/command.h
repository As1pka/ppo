#ifndef COMMAND_H
#define COMMAND_H

#include <QGeoCoordinate>

class Command
{
public:
    Command() {}
    virtual ~Command() = default;
    virtual void execute() = 0;
    virtual void unexecute() = 0;
};

#endif // COMMAND_H
