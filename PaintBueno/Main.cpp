#include "headers/Point.h"
#include "headers/Color.h"
#include "headers/Rectangle.h"

int main()
{
    Point* p1 = new Point(3,7);
    Point* p2 = new Point(100,100);
    Color* c = new Color(255,0,0);

    p1->toString();
    p2->toString();
    c->toString();

    Rectangle* r = new Rectangle(*p1, *p2, *c);
    
    r->toString();
    return 0;
}
/*#include <iostream>
 
class MiClase {
public:
    int valor;
 
    // Constructor normal
    MiClase(int v) : valor(v) {
        std::cout << "Constructor normal\n";
    }
 
    // Constructor de copia
    MiClase(const MiClase& otra) : valor(otra.valor) {
        std::cout << "Constructor de copia\n";
    }
 
    // Constructor de movimiento
    MiClase(MiClase&& otra) noexcept : valor(otra.valor) {
        std::cout << "Constructor de movimiento\n";      
    }
 
    // Destructor
    ~MiClase() {
        std::cout << "Destructor\n";
    }
};
 
 
void funcionPorValor(MiClase obj) {
    std::cout << "Dentro de funcionPorValor " << obj.valor  << std::endl;
}
 
void funcionPorReferencia(const MiClase& obj) {
    std::cout << "Dentro de funcionPorReferencia " << obj.valor << std::endl;
}
 
int main() {
    std::cout << "Creando objeto...\n";
    MiClase obj1(10);
 
    std::cout << "\nPasando a funcionPorValor...\n";
    funcionPorValor(obj1);
 
    std::cout << "\nForzando constructor de movimiento...\n";
    funcionPorValor(std::move(obj1));
   
 
    std::cout << "\nPasando a funcionPorReferencia...\n";
    funcionPorReferencia(obj1);
 
    std::cout << "\nFin del main\n";
    return 0;
}*/