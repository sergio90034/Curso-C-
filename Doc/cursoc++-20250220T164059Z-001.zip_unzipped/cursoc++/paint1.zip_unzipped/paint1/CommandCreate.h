#ifndef COMMAND_CREATE_H
#define COMMAND_CREATE_H

#include "CommandBase.h"
#include <memory>

class CommandCreate : public CommandBase
{
private:
    std::unique_ptr<Shape> shape;

public:
    CommandCreate(Canvas &canvas, std::unique_ptr<Shape> shape);
    void run() override;
};

#endif // COMMAND_CREATE_H
