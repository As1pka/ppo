#include "commandpointdel.h"

CommandPointDel::CommandPointDel() { }

CommandPointDel::CommandPointDel(RoutesModel *m)
{
    model = m;
    point = model->getPoint();
    ind = model->getCurrIndPoint();
}

CommandPointDel::~CommandPointDel() { }

void CommandPointDel::execute()
{
    model->delPoint(ind);
}

void CommandPointDel::unexecute()
{
    model->addPoint(point, ind);
}
