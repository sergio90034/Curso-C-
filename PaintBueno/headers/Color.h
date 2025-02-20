#ifndef COLOR_H
#define COLOR_H

#include <iostream>
#include <string>

class Color{
    private:
        using byte = unsigned char; //byte es un alias para el tipo de dato unsigned char
        byte red;
        byte green;
        byte blue;
    public:
        Color() = default; // Por qué? 
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
        std::string toString() const;
        
};

#endif /* COLOR_H */