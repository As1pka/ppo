#ifndef COMMANDSTACK_H
#define COMMANDSTACK_H

#include <QObject>
#include <QStack>

#include "command.h"

class CommandStack : public QObject
{
    Q_OBJECT
    QStack<Command*> commands;
    int curr;
    void delCommand();

public:
    explicit CommandStack(QObject *parent = nullptr);

public slots:
    void addCommand(Command *c);
    void redo();
    void undo();
};

#endif // COMMANDSTACK_H
