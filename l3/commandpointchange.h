#ifndef COMMANDPOINTCHANGE_H
#define COMMANDPOINTCHANGE_H

#include "command.h"
#include "routesmodel.h"

class CommandPointChange : public Command
{
    RoutesModel *model;
    QGeoCoordinate prev, curr;
    int ind;

public:
    CommandPointChange();
    CommandPointChange(RoutesModel *m, QGeoCoordinate p);
    ~CommandPointChange() override;
    void execute() override;
    void unexecute() override;
};

#endif // COMMANDPOINTCHANGE_H
