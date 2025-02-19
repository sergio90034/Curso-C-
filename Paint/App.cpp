/*
App
	ToolBar
		Shapes
		Colors
	Canvas
		add
		remove
		mover elementos a un punto
 
Factory pattern, command pattern, strategie pattern
SOLID
 
Shapes->circle,rectangle
	point start, point end
Color->white,black
	R,G,B
 
Point, Color, Shape
 
Command
	add shape
	remove id
	move id point
 
 
command(receiver, ...args)
 
Canvas->receiver
App.run add rectangle 0,0 100,100
 
1. Point
2. Color
3. Shape
	Circle
	Rectangle
 
2. Toolbar
	registrar el color			registerColor(Color.Back, []()) Map
	registrar los shapes
	get->strategi pattern enum
 
 
	if(shapetype==circle){
            return new Circle
        }else(shapetype==cuadrado)	
	    return rectangle
*/

#include <iostream>

using namespace std;

class Point{
    private:
        uint x;
        uint y;
    public:
        //Constructor y desctructor
        Point(uint x, uint y) : x(x), y(y){};
        ~Point (){ cout << "Clase point eliminada" <<endl; }
        //Getters
        uint getX() const { return x; }
        uint getY() const { return y; }
        //Setters
        void setX(uint x){ this->x = x; }
        void setY(uint y){ this->y = y; }

        // Metodo para imprimir los valores de la clase
        string toString() const { return "[ " + to_string(x) + ", " + to_string(y) + " ]"; }
};
 
class Color
{
    private:
        using byte = unsigned char;
        byte red;
        byte green;
        byte blue;
    
    public:
    
        Color(byte r, byte g, byte b) : red(r), green(g), blue(b) {}
    
    
        byte getRed() const { return red; }
        byte getGreen() const { return green; }
        byte getBlue() const { return blue; }
    
        string toString() const
        {
            return "RGB(" + std::to_string(static_cast<int>(red)) + ", " +
                std::to_string(static_cast<int>(green)) + ", " +
                std::to_string(static_cast<int>(blue)) + ")";
        }
};

class Shape{
    private:
        Point start;
        Point end;
        Color color;
    protected:
        Shape(Point start, Point end, Color color) : start(start), end(end), color(color) {};
    public:
        Point getStart() const{ return start; }
        Point getEnd() const { return end; }
        Color getColor() const { return color; }

        string toString() const { return "Shape: " + start.toString() + end.toString() + "with color: " + color.toString(); }
};

class Circle : public Shape{
    protected:
        Circle(Point start, Point end, Color color) : Shape(start, end, color) {}
    public:
        string toString() const override { 
            return "Circle: " + Shape::toString();
        }
};

class Rectangle : public Shape{
    protected:
        Rectangle(Point start, Point end, Color color) : Shape(start, end, color) {}
    public:
        string toString() const override {
            return "Rectangle: " + Shape::toString();
        }
}