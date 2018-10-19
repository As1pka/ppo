#include "commandstack.h"

void CommandStack::delCommand()
{
    for (int i = curr; i < commands.size();)
        commands.pop_back();
}

CommandStack::CommandStack(QObject *parent) : QObject(parent) { curr = 0; }

void CommandStack::addCommand(Command *c)
{
    if (commands.size() != curr)
        delCommand();

    commands.append(c);
    c->execute();
    curr++;
}

void CommandStack::redo()
{
    if (curr < commands.size())
        commands[curr++]->execute();
}

void CommandStack::undo()
{
    if (curr > 0)
        commands[--curr]->unexecute();
}
