#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shapes.h"
#include <memory>
#include <string>
#include <iostream>

class Circle : public Shape{
    protected:
        /*
            Para que solo tengan acceso las clases derivadas
        */
        Circle() = default; //Por qué? 
        Circle(Point center, Point radiusPoint, Color color);
        
    public:
        ~Circle();
        /*
         static -> Sirve para poder llamar a la funcion sin tener el objeto de la clase
         unique_ptr -> Devuelve un puntero único a un objeto Shape que se destruye cuando unique_ptr
         salga de su ambito
        */
        static std::unique_ptr<Shape> create(Point p1, Point p2, Color color);

        std::string toString() const;
};

#endif /* CIRCLE_H */