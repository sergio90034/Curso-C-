#pragma once
#include <iostream>
#include <string>

using namespace std;

class Color{
    private:
        using byte = unsigned char; //byte es un alias para ek tipo de dato unsigned byte
        byte red;
        byte green;
        byte blue;
    public:
        Color(byte red, byte green, byte blue);
        ~Color();

        //getters
        byte getRed() const;
        byte getGreen() const;
        byte getBlue() const;

        //setters
        void setRed(byte red);
        void setGreen(byte green);
        void setBlue(byte blue);

        //toString
        string toString() const;
        

};