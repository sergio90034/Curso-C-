#include <iostream>
 
/*
En el mundo de las aves existen pinguinos y aguilas los pinguinos pesan 5 kg
y las aguilas pesan 10 kg y vuelan a 100 km/h
*/
 
// Clase base abstracta
class Ave {
protected:
    double peso;
 
public:
    explicit Ave(double p) : peso(p) {}
 
    virtual void hacerSonido() const = 0; // Método común a todas las aves
    virtual ~Ave() = default;
 
    double getPeso() const { return peso; }
};
 
// Subclase abstracta para aves que vuelan
class AveVoladora : public Ave {
protected:
    double velocidadVuelo;
 
public:
    AveVoladora(double p, double v) : Ave(p), velocidadVuelo(v) {}
 
    virtual void volar() const = 0; // Método puro virtual para aves voladoras
 
    double getVelocidadVuelo() const { return velocidadVuelo; }
};
 
// Subclase abstracta para aves que no vuelan
class AveNoVoladora : public Ave {
public:
    explicit AveNoVoladora(double p) : Ave(p) {}
 
    virtual void hacerSonido() const = 0; // Método puro virtual mantiene la clase abstracta
};
 
// Implementaciones concretas
 
class Aguila : public AveVoladora {
public:
    Aguila(double p, double v) : AveVoladora(p, v) {}
 
    void hacerSonido() const override {
        std::cout << "El aguila emite un chillido agudo.\n";
    }
 
    void volar() const override {
        std::cout << "El aguila vuela a " << velocidadVuelo << " km/h.\n";
    }
};
 
class Pinguino : public AveNoVoladora {
public:
    explicit Pinguino(double p) : AveNoVoladora(p) {}
 
    void hacerSonido() const override {
        std::cout << "El pinguino emite un graznido.\n";
    }
};
 
int main() {
    Aguila aguila(5.0, 120.0);
    Pinguino pinguino(15.0);
 
    std::cout << "Ejemplo con Aguila:\n";
    aguila.hacerSonido();
    aguila.volar();
    std::cout << "Peso: " << aguila.getPeso() << " kg\n";
 
    std::cout << "\nEjemplo con Pinguino:\n";
    pinguino.hacerSonido();
    std::cout << "Peso: " << pinguino.getPeso() << " kg\n";
 
    return 0;
}
 