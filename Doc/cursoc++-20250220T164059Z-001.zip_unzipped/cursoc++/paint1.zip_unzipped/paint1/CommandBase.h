
#ifndef COMMAND_BASE_H
#define COMMAND_BASE_H

#include "Canvas.h"

class CommandBase {
protected:
    Canvas &receiver;

public:
    CommandBase(Canvas &canvas);
    virtual void run() = 0; // Método abstracto
    virtual ~CommandBase() = default;
};

#endif // COMMAND_BASE_H
