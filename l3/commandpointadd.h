#ifndef COMMANDPOINTADD_H
#define COMMANDPOINTADD_H

#include "command.h"
#include "routesmodel.h"

class CommandPointAdd : public Command
{
    RoutesModel *model;
    QGeoCoordinate point;
    int ind;

public:
    CommandPointAdd();
    CommandPointAdd(RoutesModel *m, QGeoCoordinate p);
    ~CommandPointAdd() override;
    void execute() override;
    void unexecute() override;
};

#endif // COMMANDPOINTADD_H
