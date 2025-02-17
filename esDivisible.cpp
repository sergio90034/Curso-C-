#include <iostream>

using namespace std;

int main()
{
    int num;

    cout << "Introduzca un numero" << endl;
    cin >>  num;

    if(num%2 == 0)
    {
        cout << "El numero es divisible por 2" << endl;
    }
    else cout << " El numero no es divisible por 2" << endl;
}