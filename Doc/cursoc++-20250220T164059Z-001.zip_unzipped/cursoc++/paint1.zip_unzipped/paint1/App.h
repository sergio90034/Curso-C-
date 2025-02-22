#ifndef APP_H
#define APP_H

#include <iostream>
#include <string>
#include "Toolbar.h"
#include "Canvas.h"
#include "CommandCreate.h"
#include "CommandList.h"
#include "CommandRemove.h"
#include "CommandMove.h"
#include "Point.h"
#include "Util.h"

class App
{
private:
    Toolbar &toolbar;
    Canvas &canvas;

public:
    App(Toolbar &toolbar, Canvas &canvas);
    void run();
};

#endif // APP_H
