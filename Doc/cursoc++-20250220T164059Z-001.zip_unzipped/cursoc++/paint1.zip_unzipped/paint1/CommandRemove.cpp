#include "CommandRemove.h"

CommandRemove::CommandRemove(Canvas &canvas, const std::string &id)
    : CommandBase(canvas), id(id) {}

void CommandRemove::run()
{
    receiver.removeById(id);
}

