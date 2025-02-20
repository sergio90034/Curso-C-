#include "../headers/Circle.h"

    Circle::Circle(Point center, Point radiusPoint, Color color) : Shape(center, radiusPoint, color){};
    
    Circle::~Circle(){
        std::cout << "Clase Circle eliminada" << std::endl;
    }

    std::unique_ptr<Shape> Circle::create(Point p1, Point p2, Color color){
        /*
         new Circle(p1, p2, color) -> crea un objeto Circle con los parámetros descritos
         unique_ptr<Circle> -> asocia este puntero al objeto creado anteriormente
         return -> Al ser punteros inteligentes, se hace la conversión automáticamente
         por lo tanto, la devolución de esta función es un puntero unique_ptr<Shape> que 
         apunta al objeto Circle(p1, p2, color)
        */
        return std::unique_ptr<Circle>(new Circle(p1, p2, color) );
    }

    string Circle::toString() const{
        return "Circulo" + Shape::toString();
    }