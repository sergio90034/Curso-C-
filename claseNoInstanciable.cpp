#include <iostream>

using namespace std;

class A{
    protected:
        A(){};
    public:
        void mensaje(){
            cout << "Clase A" << endl;
        }
};

class B : public A{
    private:
        int id = 7;
    public:
        B(){
            cout << "clase B" << endl;
        };
        int getId(){
            return this-> id;
        }
};

int main()
{
    B *b = new B;
    A *a = new A;

    
    b->mensaje();
    cout << " con id: " << b->getId() << endl;


    return 0;
}