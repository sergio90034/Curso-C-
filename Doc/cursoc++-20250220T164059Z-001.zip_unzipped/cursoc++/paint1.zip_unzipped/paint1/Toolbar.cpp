#include "Toolbar.h"

void Toolbar::registerShape(ShapeType type, createShapefn factory) {
    shapeRegistry[type] = factory;
}

std::unique_ptr<Shape> Toolbar::createShape(ShapeType type, Point p1, Point p2, Color color) {
    auto it = shapeRegistry.find(type);
    if (it != shapeRegistry.end()) {
        return it->second(p1, p2, color);
    }
    return nullptr;  // Si no se encuentra el tipo, se devuelve nullptr
}
