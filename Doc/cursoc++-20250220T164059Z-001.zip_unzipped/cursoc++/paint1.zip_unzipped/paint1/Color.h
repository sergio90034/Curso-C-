#ifndef COLOR_H
#define COLOR_H

#include <string>
#include <iostream>

class Color {
private:
    using byte = unsigned char;  // Alias para unsigned char
    byte red;
    byte green;
    byte blue;

public:
    Color() = default;
    Color(byte r, byte g, byte b);

    byte getRed() const;
    byte getGreen() const;
    byte getBlue() const;

    std::string toString() const;

    friend std::istream &operator>>(std::istream &is, Color &c);
};

#endif // COLOR_H
