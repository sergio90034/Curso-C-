#include <iostream>
#include <string>
#include "Shapes.h"

using namespace std;

class Rectangle : public Shape{
    protected:
        Rectangle(Point start, Point end, Color color);
    public:
        string toString() const /*override*/;
}; 