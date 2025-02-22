#ifndef POINT_H
#define POINT_H

#include <string>
#include <iostream>

class Point {
private:
    int x;
    int y;

public:
    Point() = default;
    Point(int x, int y);

    int getX() const;
    int getY() const;
    void setX(int value);
    void setY(int value);

    std::string toString() const;

    friend std::istream &operator>>(std::istream &is, Point &p);
};

#endif // POINT_H
