#ifndef TOOLBAR_H
#define TOOLBAR_H

#include <unordered_map>
#include <memory>
#include "Shape.h"  // Incluye las definiciones de Shape, ShapeType y createShapefn

class Toolbar {
private:
    std::unordered_map<ShapeType, createShapefn> shapeRegistry;

public:
    void registerShape(ShapeType type, createShapefn factory);
    std::unique_ptr<Shape> createShape(ShapeType type, Point p1, Point p2, Color color);
};

#endif // TOOLBAR_H
