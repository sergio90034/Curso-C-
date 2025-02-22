#include "Toolbar.h"
#include "Canvas.h"
#include "App.h"
#include "Circle.h"
#include "Rectangle.h"

int main()
{
    Toolbar toolbar;
    toolbar.registerShape(ShapeType::CIRCLE, Circle::create);
    toolbar.registerShape(ShapeType::RECTANGLE, Rectangle::create);
    
    Canvas canvas;
    App app(toolbar, canvas);
    app.run();

    return 0;
}
