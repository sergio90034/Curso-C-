#include "CommandMove.h"

CommandMove::CommandMove(Canvas &canvas, std::string &id, Point &p)
    : CommandBase(canvas), id(id), p(p) {}

void CommandMove::run()
{
    receiver.updateStartById(id, p);
}