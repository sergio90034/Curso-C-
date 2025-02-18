#include <iostream>

using namespace std;

class Padre final{
    public:
        Padre(){
            cout << "Mi clave padre" << endl;
        }
        ~Padre(){
            cout << "Se destruye la clase padre" << endl;
        }
};

class Hija : public Padre{
    public:
        Hija(){
            cout << "Mi clase hija" << endl;
        }
        ~Hija(){
            cout << "Se destruye la clase hija" << endl;
        }
};

int main()
{
    Hija *h = new Hija;
    Padre *p = new Padre;

    delete h;

    return 0;
}