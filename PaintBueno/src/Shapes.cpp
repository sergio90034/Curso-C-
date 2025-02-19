#include "../headers/Shapes.h"

Shape::Shape(int x, int y, byte red, byte green, byte blue) :
Shape::~Shape(){
    cout << "Clase Shape eliminada" << endl;
}

// Getters
Point Shape::getStart() const{
    return this->start;
}
Point Shape::getEnd() const{
    return this->end;
}
Color Shape::getColor() const{
    return this->color;
}
// Setters
void Shape::setStart(Point start){
    this->start = start;
}
void Shape::setEnd(Point end){
    this->end = end;
}
void Shape::setColor(Color color){
    this->color = color;
}

//To string
string Shape::toString() const{
    return "Shape: " + start.toString() + end.toString() + "with color: " + color.toString();
}