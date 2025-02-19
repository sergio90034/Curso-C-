#pragma once
#include <iostream>
#include <string>

using namespace std;

class Point{
    private:
        int x;
        int y;
    public:
        Point() = default;
        Point(int x, int y);
        ~Point();
        int getX() const;
        int getY() const;
        void setX(int x);
        void setY(int y);
        string toString() const;
};