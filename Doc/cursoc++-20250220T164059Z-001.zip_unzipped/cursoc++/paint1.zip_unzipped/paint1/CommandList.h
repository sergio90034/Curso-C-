#ifndef COMMAND_LIST_H
#define COMMAND_LIST_H

#include "CommandBase.h"

class CommandList : public CommandBase
{
public:
    CommandList(Canvas &canvas);
    void run() override;
};

#endif // COMMAND_LIST_H
