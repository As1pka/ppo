#include "commandpointchange.h"

CommandPointChange::CommandPointChange(RoutesModel *m, QGeoCoordinate p)
{
    model = m;
    prev = model->getPoint();
    curr = p;
    ind = model->getCurrIndPoint();
}

CommandPointChange::~CommandPointChange() { }

void CommandPointChange::execute()
{
    model->changePoint(curr, ind);
}

void CommandPointChange::unexecute()
{
    model->changePoint(prev, ind);
}


