#include "Point.h"

Point::Point(int x, int y) : x(x), y(y) {}

int Point::getX() const {
    return x;
}

int Point::getY() const {
    return y;
}

void Point::setX(int value) {
    x = value;
}

void Point::setY(int value) {
    y = value;
}

std::string Point::toString() const {
    return "Point(" + std::to_string(x) + ", " + std::to_string(y) + ")";
}

std::istream &operator>>(std::istream &is, Point &p) {
    is >> p.x >> p.y;
    return is;
}
