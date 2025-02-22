#ifndef COMMAND_REMOVE_H
#define COMMAND_REMOVE_H

#include "CommandBase.h"
#include <string>

class CommandRemove : public CommandBase
{
private:
    std::string id;

public:
    CommandRemove(Canvas &canvas, const std::string &id);
    void run() override;
};

#endif // COMMAND_REMOVE_H
