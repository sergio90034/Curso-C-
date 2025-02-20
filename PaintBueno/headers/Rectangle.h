#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>
#include <string>
#include <memory>
#include "Shapes.h"

class Rectangle : public Shape{
    protected:
        Rectangle(Point start, Point end, Color color); // Es protected para que solo tengan acceso las clases derivadas
    public:
        Rectangle() = default; //Por qué? 
        ~Rectangle();
        std::string toString() const override;
        static std::unique_ptr<Shape> create( Point start, Point end, Color color);
}; 

#endif /* RECTANGLE_H */