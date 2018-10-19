#ifndef COMMANDROUTEADD_H
#define COMMANDROUTEADD_H

#include "command.h"
#include "routesmodel.h"

class CommandRouteAdd : public Command
{
    RoutesModel *model;
    Route route;
    int ind;

public:
    CommandRouteAdd();
    CommandRouteAdd(RoutesModel *m, Route &r);
    ~CommandRouteAdd() override;
    void execute() override;
    void unexecute() override;
};

#endif // COMMANDROUTEADD_H
