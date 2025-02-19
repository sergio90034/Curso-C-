#include "../headers/Color.h"

    //Constructor
    Color::Color(byte red, byte green, byte blue){
        this->red = red;
        this->green = green;
        this->blue = blue;
    }
    //Desctructor
    Color::~Color(){
        cout << "Clase Color eliminada" << endl;
    }

    //getters
    //Hay que poner el namespace de color porque hemos definido que tipo byte como un alias para
    // unsigned char
    Color::byte Color::getRed() const{
        return this->red;
    }
    Color::byte Color::getGreen() const{
        return this->green;
    }
    Color::byte Color::getBlue() const{
        return this->blue;
    }

    //setters
    void Color::setRed(byte red){
        this->red = red;
    }
    void Color::setGreen(byte green){
        this->green = green;
    }
    void Color::setBlue(byte blue){
        this->blue = blue;
    }

    //toString
    string Color::toString() const{
        return "RGB(" + std::to_string(static_cast<int>(red)) + ", " +
        std::to_string(static_cast<int>(green)) + ", " +
        std::to_string(static_cast<int>(blue)) + ")";
    }