#include <iostream>
#include <vector>
#include <functional>
 
// Funciones de operaciones básicas con template
template <typename T>
T add(T a, T b) { return a + b; }
 
template <typename T>
T subtract(T a, T b) { return a - b; }
 
template <typename T>
T multiply(T a, T b) { return a * b; }
 
template <typename T>
T divide(T a, T b) { return b != 0 ? a / b : 0; }
 
// Definimos un alias para el tipo de función con template
template <typename T>
using Operation = std::function<T(T, T)>;
 
// Función que devuelve un vector con punteros a las operaciones
template <typename T>
std::vector<Operation<T>> operations() {
    return {add<T>, subtract<T>, multiply<T>, divide<T>};
}
 
int main() {    
 
    std::cout << "enteros" << std::endl;
    for(auto operation:operations<int>()){
        std::cout << operation(2,2) << std::endl;
    }
 
    std::cout << "dobles" << std::endl;
    for(auto operation:operations<double>()){
        std::cout << operation(2.5,2.1) << std::endl;
    }
 
    return 0;
}