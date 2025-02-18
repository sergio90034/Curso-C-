#include <iostream>
#include <set>

using namespace std;

class A{
    private:
        int id;
    public:
        A(int id) : id(id){};
};

int main()
{
    set<A> set_de_clases;

    set_de_clases.insert(A(1));
    /*set_de_clases.insert(A(2));
    set_de_clases.insert(A(3));
*/
    for (auto i: set_de_clases)
    {
        cout << i. << endl;
    }
    return 0;
}