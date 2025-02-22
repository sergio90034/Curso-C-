#include "CommandCreate.h"

CommandCreate::CommandCreate(Canvas &canvas, std::unique_ptr<Shape> shape)
    : CommandBase(canvas), shape(std::move(shape)) {}

void CommandCreate::run()
{
    receiver.add(std::move(shape));
}
