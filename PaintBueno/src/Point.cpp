#include "../headers/Point.h"

    Point::Point(int x, int y) : x(x), y(y) {};

    Point::~Point(){
        std::cout << "CLase point eliminada" << std::endl;
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

    std::string Point::toString() const{
        return "[ " + std::to_string(x) + ", " + std::to_string(y) + " ]"; 
    }