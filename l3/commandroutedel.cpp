#include "commandroutedel.h"

CommandRouteDel::CommandRouteDel() { }

CommandRouteDel::CommandRouteDel(RoutesModel *m) : model(m)
{
    route.route = model->getProperties();
    route.track = model->getTrack();
    route.polyline = model->getPolyline();
    ind = model->getCurrIndRoute();
}

CommandRouteDel::~CommandRouteDel() { }

void CommandRouteDel::execute()
{
    model->delRoute();
}

void CommandRouteDel::unexecute()
{
    model->addRoute(route, ind);
}

