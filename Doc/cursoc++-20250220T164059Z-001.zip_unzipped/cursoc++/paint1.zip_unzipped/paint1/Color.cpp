#include "Color.h"

Color::Color(byte r, byte g, byte b) : red(r), green(g), blue(b) {}

Color::byte Color::getRed() const {
    return red;
}

Color::byte Color::getGreen() const {
    return green;
}

Color::byte Color::getBlue() const {
    return blue;
}

std::string Color::toString() const {
    return "RGB(" + std::to_string(static_cast<int>(red)) + ", " +
           std::to_string(static_cast<int>(green)) + ", " +
           std::to_string(static_cast<int>(blue)) + ")";
}

std::istream &operator>>(std::istream &is, Color &c) {
    int r, g, b;
    if (is >> r >> g >> b) {
        if (r >= 0 && r <= 255 && g >= 0 && g <= 255 && b >= 0 && b <= 255) {
            c.red = static_cast<Color::byte>(r);
            c.green = static_cast<Color::byte>(g);
            c.blue = static_cast<Color::byte>(b);
        } else {
            is.setstate(std::ios::failbit);
        }
    }
    return is;
}
