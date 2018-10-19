#include "commandrouteadd.h"

CommandRouteAdd::CommandRouteAdd() { }

CommandRouteAdd::CommandRouteAdd(RoutesModel *m, Route &r) : model(m), route(r)
{
    ind = model->getCurrIndRoute();
    if (ind != 0)
        ind++;
}

CommandRouteAdd::~CommandRouteAdd() { }

void CommandRouteAdd::execute()
{
    model->addRoute(route, ind);
}

void CommandRouteAdd::unexecute()
{
    model->delRoute();
}

