#include "Point.h"

    Point::Point(int x, int y){
        this->x = x;
        this->y = y;
    }
    Point::~Point(){
        cout << "CLase point eliminada" << endl;
    }
    int Point::getX() const{
        return this->x;

    }
    int Point::getY() const{
        return this->y;

    }
    void Point::setX(int x) {
        this->x = x;
    }
    void Point::setY(int y) {
        this->y = y;
    }

    string Point::toString() const{
        return "[ " + to_string(x) + ", " + to_string(y) + " ]"; 
    }