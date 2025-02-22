#ifndef CANVAS_H
#define CANVAS_H

#include <vector>
#include <memory>
#include <algorithm>
#include <iostream>
#include "Shape.h"
#include "Point.h"

class Canvas
{
private:
    std::vector<std::unique_ptr<Shape>> shapes;

public:
    void add(std::unique_ptr<Shape> &&shape);
    void list() const;
    void removeById(const std::string &id);
    bool updateStartById(const std::string &id, const Point &newStart);
};

#endif // CANVAS_H
