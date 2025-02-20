#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
#include "Point.h" //Incluimos la clase Point para que el compilador pueda enlazarla
#include "Color.h" //Incluimos la clase Color para que el compilador pueda enlazarla

using namespace std;


class Shape : public Point, public Color{
    private:
        Point start;
        Point end;
        Color color;
    protected:    
        Shape(Point start, Point end, Color color); //Para que solo tengan acceso las clases derivadas
        
    public:
        ~Shape();
        //Constructor para hacer pruebas
        Shape() = default; // Por qué? 
        // Getters
        Point getStart() const;
        Point getEnd() const;
        Color getColor() const;
        // Setters
        void setStart(Point start);
        void setEnd(Point end);
        void setColor(Color color);

        //To string
        virtual string toString() const;
};

#endif /* SHAPE_H */