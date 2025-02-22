#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"

class Rectangle : public Shape {
protected:
    Rectangle(Point start, Point end, Color color);

public:
    std::string toString() const override;
    static std::unique_ptr<Shape> create(Point p1, Point p2, Color color);
};

#endif // RECTANGLE_H
