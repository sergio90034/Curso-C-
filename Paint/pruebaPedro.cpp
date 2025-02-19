 
#include <iostream>
#include <string>
#include <unordered_map>
#include <functional>
#include <memory>
 
 
class Point
{
private:
    int x;
    int y;
 
public:
    Point() = default;
    Point(int x, int y) : x(x), y(y) {}
 
    int getX() const { return x; }
    int getY() const { return y; }
 
    std::string toString() const
    {
        return "Point(" + std::to_string(x) + ", " + std::to_string(y) + ")";
    }
    friend std::istream& operator>>(std::istream& is, Point& p)
    {
        is >> p.x >> p.y;
        return is;
    }
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
 
    std::string toString() const
    {
        return "RGB(" + std::to_string(static_cast<int>(red)) + ", " +
               std::to_string(static_cast<int>(green)) + ", " +
               std::to_string(static_cast<int>(blue)) + ")";
    }

    friend 
};
 
class Shape
{
private:
    Point start;
    Point end;
    Color color;
 
protected:
    Shape(Point start, Point end, Color color) : start(start), end(end), color(color) {}
 
public:
    Point getStart() const { return start; }
    Point getEnd() const { return end; }
    Color getColor() const { return color; }
    virtual std::string toString() const
    {
        return "Shape from " + start.toString() + " to " + end.toString() + " with color " + color.toString();
    }
};
 
using createShape = std::function<std::unique_ptr<Shape>(Point, Point, Color)>;
 
enum class ShapeType
{
    RECTANGLE,
    CIRCLE
};
 
class Rectangle : public Shape
{
protected:
    Rectangle(Point start, Point end, Color color) : Shape(start, end, color) {}
 
public:
    std::string toString() const override
    {
        return "Rectangle: " + Shape::toString();
    }
 
    static std::unique_ptr<Shape> create(Point p1, Point p2, Color color)
    {
        return std::unique_ptr<Rectangle>(new Rectangle(p1, p2, color));
    }
};
 
class Circle : public Shape
{
 
protected:
    Circle(Point center, Point radiusPoint, Color color) : Shape(center, radiusPoint, color) {}
 
public:
    std::string toString() const override
    {
        return "Circle: " + Shape::toString();
    }
    static std::unique_ptr<Shape> create(Point p1, Point p2, Color color)
    {
        return std::unique_ptr<Circle>(new Circle(p1, p2, color));
    }
};
 
class Toolbar
{
private:
    std::unordered_map<ShapeType, createShape> shapeRegistry;
 
public:
    void registerShape(ShapeType type, createShape factory)
    {
        shapeRegistry[type] = factory;
    }
    std::unique_ptr<Shape> createShape1(ShapeType type, Point p1, Point p2, Color color)
    {
        auto it = shapeRegistry.find(type);
        if (it != shapeRegistry.end())
        {
            return it->second(p1, p2, color);
        }
        return nullptr;
    }
};
 
int main()
{
    Toolbar toolbar;
    toolbar.registerShape(ShapeType::CIRCLE, Circle::create);
    toolbar.registerShape(ShapeType::RECTANGLE, Rectangle::create);
 
    Point p1(0, 0), p2(10, 10);
    Color color(255, 0, 0);
 
    auto shape1 = toolbar.createShape1(ShapeType::CIRCLE, p1, p2, color);
    auto shape2 = toolbar.createShape1(ShapeType::RECTANGLE, p1, p2, color);
    auto shape3 = toolbar.createShape1(ShapeType::RECTANGLE, p1, p2, color);
 
    std::cout << shape1->toString() << std::endl;
    std::cout << shape2->toString() << std::endl;
    std::cout << shape3->toString() << std::endl;  
   
    return 0;
}
 
 
 
 