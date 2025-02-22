#include "Circle.h"

Circle::Circle(Point center, Point radiusPoint, Color color)
    : Shape(center, radiusPoint, color) {}

std::string Circle::toString() const {
    return "Circle: " + Shape::toString();
}

std::unique_ptr<Shape> Circle::create(Point p1, Point p2, Color color) {
    return std::unique_ptr<Circle>(new Circle(p1, p2, color));
}
