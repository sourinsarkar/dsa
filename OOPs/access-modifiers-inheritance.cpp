#include <iostream>

using namespace std;

class Base
{
public:
    void print()
    {
        cout << "Base class" << '\n';
    }
};

class Derived : public Base
{
public:
    void print()
    {
        cout << "Derived class" << '\n';
    }
};

int main() {
    Derived d1, d2;
    d1.print();
    d2.Base :: print();
}