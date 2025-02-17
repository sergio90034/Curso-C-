#include <iostream>

using namespace std;

void initVector(int vector[])
{
    int num;
    
    for (int i = 0; num ; i++)
    {
        cout << "Introduzca un numero (0 para terminar): " << endl;
        cin >> num;

        vector[i] = num;
    }
}

void imprimirVector(int vector[])
{
    int length = sizeof(vector) / sizeof(vector[0]);

    cout << "[ ";

    for (int i = 0; i < length; i++ )
    {
        cout << vector[i] << ", ";
    }

    cout << " ]" << endl;
}

int main()
{
    int vector[] = {0};

    initVector(vector);
    imprimirVector(vector);

    return 0;
}