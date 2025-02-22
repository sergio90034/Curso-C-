#include "CommandList.h"

CommandList::CommandList(Canvas &canvas) : CommandBase(canvas) {}

void CommandList::run()
{
    receiver.list();
}
