// CommandMove.h
#ifndef COMMANDMOVE_H
#define COMMANDMOVE_H

#include "CommandBase.h"
#include "Point.h"
#include "Canvas.h"

class CommandMove : public CommandBase
{
private:
    std::string &id;
    Point &p;

public:
    CommandMove(Canvas &canvas, std::string &id, Point &p);
    void run() override;
};

#endif // COMMANDMOVE_H