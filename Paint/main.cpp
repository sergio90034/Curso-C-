#include <iostream>
#include "App.cpp"

using namespace std;

int main()
{
    Point* p = new Point(3,5);
    cout << p->toString() << endl;

    return 0;
}