#ifndef UTIL_H
#define UTIL_H

#include <string>
#include <memory>
#include "Shape.h"
#include "Toolbar.h"
#include "Point.h"
#include "Color.h"

std::unique_ptr<Shape> shapeInterface(Toolbar &toolbar);
std::string idInterface();
Point pointInterface();
void clear();
void showMenu();

#endif // UTIL_H
