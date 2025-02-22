#include "App.h"

App::App(Toolbar &toolbar, Canvas &canvas) : toolbar(toolbar), canvas(canvas)
{
}

void App::run()
{
    int opcion;
    do
    {
        showMenu();
        std::cin >> opcion;

        switch (opcion)
        {
        case 1:
        {
            std::cout << "Creando un shape..." << std::endl;
            CommandCreate create(canvas, shapeInterface(toolbar));
            create.run();
            break;
        }
        case 2:
        {
            std::cout << "Listando todos los shapes..." << std::endl;
            CommandList list(canvas);
            list.run();
            break;
        }
        case 3:
        {
            std::cout << "Eliminar un shape por ID..." << std::endl;
            std::string id = idInterface();
            CommandRemove remove(canvas, id);
            remove.run();
            break;
        }
        case 4:
        {
            std::cout << "Moviendo un shape a un punto..." << std::endl;
            std::string id = idInterface();
            Point p = pointInterface();
            CommandMove move(canvas, id, p);
            move.run();
            break;
        }
        case 5:
            std::cout << "Saliendo del programa..." << std::endl;
            break;
        default:
            std::cout << "Opción no válida. Intente de nuevo." << std::endl;
        }
    } while (opcion != 5);
}
