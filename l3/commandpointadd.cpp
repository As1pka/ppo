#include "commandpointadd.h"

CommandPointAdd::CommandPointAdd() { }

CommandPointAdd::CommandPointAdd(RoutesModel *m, QGeoCoordinate p)
{
    model = m;
    point = p;
    ind = m->getCurrIndPoint();
}

CommandPointAdd::~CommandPointAdd() { }

void CommandPointAdd::execute()
{
    model->addPoint(point, ind);
}

void CommandPointAdd::unexecute()
{
    model->delPoint(ind);
}
