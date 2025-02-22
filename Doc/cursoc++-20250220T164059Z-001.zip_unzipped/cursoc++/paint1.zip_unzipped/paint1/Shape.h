#ifndef SHAPE_H
#define SHAPE_H

#include <string>
#include <memory>
#include <functional>
#include "Point.h"
#include "Color.h"

class Shape {
protected:
    std::string id;
    Point start;
    Point end;
    Color color;

    Shape(Point start, Point end, Color color);

public:
    const std::string &getId() const;
    void move(const Point &p);
    Point getStart() const;
    Point getEnd() const;
    Color getColor() const;
    virtual std::string toString() const;

    virtual ~Shape() = default;
};

using createShapefn = std::function<std::unique_ptr<Shape>(Point, Point, Color)>;

enum class ShapeType
{
    RECTANGLE = 0,
    CIRCLE = 1
};

#endif // SHAPE_H
