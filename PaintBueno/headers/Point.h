#ifndef POINT_H
#define POINT_H

#include <iostream>
#include <string>


class Point{
    private:
        int x;
        int y;
    public:
        Point() = default; // Por qué? 
        Point(int x, int y);
        ~Point();

        int getX() const;
        int getY() const;

        void setX(int x);
        void setY(int y);

        std::string toString() const;
};

#endif /* POINT_H */