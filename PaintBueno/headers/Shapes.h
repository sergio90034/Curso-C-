#pragma once
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
        
        Shape(Point start, Point end, Color color);
        ~Shape();
    public:
        //Constructor para hacer pruebas
        Shape() = default;
        // Getters
        Point getStart() const;
        Point getEnd() const;
        Color getColor() const;
        // Setters
        void setStart(Point start);
        void setEnd(Point end);
        void setColor(Color color);

        //To string
        string toString() const;
};