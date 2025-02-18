#include <iostream>

#include <vector>
#include <algorithm>

using namespace std;

class MiClase {
    public:
    
        int valor;
    
        MiClase(int v) : valor(v) {}  
        
};
     
  /*  agregamos a un vector cuatro instancias de la clase con los valores
     
        1,2,3,4
     
    Escribir un algoritmo para filtrar los pares y agregarlos a un nuevo vector
*/

int main()
{
    vector<MiClase> myvector;
    vector<MiClase> result;

    myvector.push_back(MiClase(1));
    myvector.push_back(MiClase(2));
    myvector.push_back(MiClase(3));
    myvector.push_back(MiClase(4));
    
    for (auto it = begin(myvector); it != end(myvector); it++) {
        // Access element using dereference operator
        cout << it->valor << " " << endl;;
      }

      

    return 0;
}