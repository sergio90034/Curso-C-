#include "Shape.h"
#include "UUID.h"  // Para incluir la función generateUUID
#include <sstream>

Shape::Shape(Point start, Point end, Color color)
    : id(generateUUID()), start(start), end(end), color(color) {}

const std::string &Shape::getId() const {
    return id;
}

void Shape::move(const Point &p) {
    start.setX(start.getX() + p.getX());
    start.setY(start.getY() + p.getY());
    end.setX(end.getX() + p.getX());
    end.setY(end.getY() + p.getY());
}

Point Shape::getStart() const {
    return start;
}

Point Shape::getEnd() const {
    return end;
}

Color Shape::getColor() const {
    return color;
}

std::string Shape::toString() const {
    return "Shape id: " + id + " from " + start.toString() + " to " + end.toString() + " with color " + color.toString();
}
