#include "util.h"
#include <iostream>
#include <cstdlib>

std::unique_ptr<Shape> shapeInterface(Toolbar &toolbar)
{
    Point p0, p1;
    Color color;
    int shapeInput;
    ShapeType shape;

    std::cout << "Introduzca el punto de inicio:\n";
    std::cin >> p0;
    std::cout << "Introduzca el punto final:\n";
    std::cin >> p1;
    std::cout << "Introduzca el color:\n";
    std::cin >> color;

    std::cout << "Introduzca el shape (0-rectangle, 1-circle):\n";
    std::cin >> shapeInput;

    if (shapeInput != 0 && shapeInput != 1)
    {
        std::cout << "Entrada inválida.\n";
        return nullptr;
    }

    shape = static_cast<ShapeType>(shapeInput);
    return toolbar.createShape(shape, p0, p1, color);
}

std::string idInterface()
{
    std::string id;
    std::cout << "Introduzca el id:\n";
    std::cin >> id;
    return id;
}

Point pointInterface()
{
    Point p;
    std::cout << "Introduzca el punto de inicio:\n";
    std::cin >> p;
    return p;
}

void clear()
{
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

void showMenu()
{
    std::cout << "\n--- Menu Shapes ---" << std::endl;
    std::cout << "1. Crea el shape" << std::endl;
    std::cout << "2. Lista todos los shapes" << std::endl;
    std::cout << "3. Elimina el shape por id" << std::endl;
    std::cout << "4. Mueve el shape a un punto en concreto" << std::endl;
    std::cout << "5. Exit" << std::endl;
    std::cout << "Seleccione una opcion: ";
}
