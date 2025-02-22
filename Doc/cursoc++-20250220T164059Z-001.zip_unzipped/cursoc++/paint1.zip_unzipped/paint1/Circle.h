#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"

class Circle : public Shape {
protected:
    Circle(Point center, Point radiusPoint, Color color);

public:
    std::string toString() const override;
    static std::unique_ptr<Shape> create(Point p1, Point p2, Color color);
};

#endif // CIRCLE_H
