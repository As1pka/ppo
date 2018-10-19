#ifndef COMMANDROUTEDEL_H
#define COMMANDROUTEDEL_H

#include "command.h"
#include "routesmodel.h"

class CommandRouteDel : public Command
{
    RoutesModel *model;
    Route route;
    int ind;

public:
    CommandRouteDel();
    CommandRouteDel(RoutesModel *m);
    ~CommandRouteDel() override;
    void execute() override;
    void unexecute() override;
};

#endif // COMMANDROUTEDEL_H
