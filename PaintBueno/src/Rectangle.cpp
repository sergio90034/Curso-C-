#include "../headers/Rectangle.h"

    Rectangle::Rectangle(Point start, Point end, Color color) : Shape(start, end, color) {}
    
    Rectangle::~Rectangle(){
        cout << "Clase Rectangle eliminada" << endl;
    }

    std::unique_ptr<Shape> Rectangle::create(Point start, Point end, Color color){
        return std::unique_ptr<Rectangle>(new Rectangle(start, end, color));
    }

    std::string Rectangle::toString() const{
        return "Rectangle " + Shape::toString();
    }
