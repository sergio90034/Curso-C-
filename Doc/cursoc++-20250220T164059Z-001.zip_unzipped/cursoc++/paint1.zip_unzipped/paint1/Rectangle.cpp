#include "Rectangle.h"

Rectangle::Rectangle(Point start, Point end, Color color)
    : Shape(start, end, color) {}

std::string Rectangle::toString() const {
    return "Rectangle: " + Shape::toString();
}

std::unique_ptr<Shape> Rectangle::create(Point p1, Point p2, Color color) {
    return std::unique_ptr<Rectangle>(new Rectangle(p1, p2, color));
}
