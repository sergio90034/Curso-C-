/*
Un vector {1,2,3,4,5,6}
 
Vamos a buscar el primer elemento par
 
#include <algorithm>
find_if
*/
#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
#include <numeric>

using namespace std;

bool isOdd(int i){
    return ((i%2)==0);
}

int main()
{
    vector<int> myVector = {1,2,3,4,5,6};

    //Imprimimos el vector

    cout << "Elementos de mi vector : { ";

    for(auto it = myVector.begin(); it != myVector.end(); it++ )
    {
        cout << *it << ", ";
    }
    cout << "}" << endl;

    //algoritmo para buscar el primer elemento par
    //Declaramos el iterador para el vector
    vector<int>::iterator it;
    //Buscamos el primer elemento par
    it = find_if(myVector.begin(), myVector.end(), isOdd);

    cout << "el primer elemento par del vector es: " << *it << endl;

    // Algoritmo para buscar el último elemento par
    // Declaramos el iterador al reves para leer el vector desde el final
    vector<int>::reverse_iterator it2;
    /*
     * rbegin() -> Inicializa el iterador al final
     * rend() -> Inicializa el iterado al principio
     */
    it2 = find_if(myVector.rbegin(), myVector.rend(), isOdd);

    cout << "el último elemento par del vector es: " << *it2 << endl;

    // Suma de los valores del vector usando acumulate
    // Declaramos el vector

    int suma = accumulate(myVector.begin(), myVector.end(), 0);
    cout << "LA suma del vector es: " << suma << endl;

    return 0;
}