/*
 * En el mundo de las aves existen pinguinos y aguilas los pinguinos pesan 5 kg
 * y las aguilas pesan 10 kg y vuelan a 100 km/h
 
 */

#include <iostream>

using namespace std;

class Ave{ //interface
    public:
        virtual int getPeso() = 0;

};

class AveVoladora : public Ave{
    public:
        virtual void volar() = 0;
};

class AveNoVoladora : public Ave {
    public:
        virtual void andar() = 0;
};

class Pinguino : public AveNoVoladora {
    private:
        int peso;
        string name;
    public:
        Pinguino(int peso, string name) : peso(peso), name(name) {};
        ~Pinguino(){};

        int getPeso(){
            return this->peso;
        }

        void andar(){
            cout << "My pinguino anda" << endl;
        }
};

class Aguila : public AveVoladora {
    private:
        int peso;
        string name;
        double vel = 0;
    public:
        Aguila(int peso, string name) : peso(peso), name(name) {};
        ~Aguila(){};

        int getPeso(){
            return this->peso;
        }

        void setVel(int vel){
            this->vel = vel;
        }

        int getVel(){
            return vel;
        }

        void volar(){
            setVel(100.0);
            cout << "My aguila vuela a una velocidad de: " << getVel() << " km/h" << endl;
        }
};


int main()
{
    Pinguino pinguino1 = new Pinguino()
    return 0;
}