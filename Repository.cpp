/*
Crear una clase repository
 
que herede el metodo add de una clase add
que herede el metodo update de una clase update
que herede el metodo remove de una clase remove
que herede el metodo get de una clase get
 
Tanto update como remove heredan el metodo get de 
la clase get
 
Update* update = new Repository()
 
update.get()
update.update()
*/
#include <iostream>

class Add{
    public:
        Add(){
            std::cout << "Clase Add" << std::endl;
        }
        virtual void add() = 0;
        ~Add(){
            std::cout << "eliminamos clase Add" << std::endl;
        };
};

class Get{
    public:
        Get(){
            std::cout << "Clase Get" << std::endl;
        }
        virtual void get() = 0;
        ~Get(){
            std::cout << "Eliminamos clase Get" << std::endl;
        };
};

class Update : virtual public Get{
    public:
        Update(){
            std::cout << "Clase Update" << std::endl;
        }
        virtual void update() = 0;
        ~Update(){
            std::cout << "Eliminamos clase Update" << std::endl;
        };
};

class Remove : virtual public Get{
    public:
        Remove(){
            std::cout << "Clase Remove" << std::endl;
        }
        virtual void remove() = 0;
        ~Remove(){
            std::cout << "Eliminamos clase Remove" << std::endl;
        };
};

class Repository : public Add, public Update, public Remove{
    public:
        void add() override
        {
            std::cout << "Método add()" << std::endl;
        }
        void remove() override
        {
            std::cout << "Método remove()" << std::endl;
        }         
        void update() override
        {
            std::cout << "Método update()" << std::endl;
        }
        void get() override
        {
            std::cout << "Método get()" << std::endl;
        }
};

int main()
{
    Update *update = new Repository();
    update->get();
    update->update();

    delete update;
    return 0;
}
