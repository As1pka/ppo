#ifndef COMMANDPOINTDEL_H
#define COMMANDPOINTDEL_H

#include "command.h"
#include "routesmodel.h"

class CommandPointDel : public Command
{
    RoutesModel *model;
    QGeoCoordinate point;
    int ind;

public:
    CommandPointDel();
    CommandPointDel(RoutesModel *m);
    ~CommandPointDel() override;
    void execute() override;
    void unexecute() override;
};

#endif // COMMANDPOINTDEL_H
