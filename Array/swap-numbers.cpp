#include <iostream>
using namespace std;

void swap_usingTemp(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;

    cout << "Solution by general way: A: " << a << ", B: " << b << '\n';
}

void swap_usingReference(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}   

void swap_usingArithmeticOp(int a, int b)
{
    // Approach 1
    b = a + b;
    a = b - a;
    b = b - a;

    // Approach 1
    // b = a * b;
    // a = b / a;
    // b = b / a;

    cout << "Solution by ArithmeticOp: A: " << a << ", B: " << b << '\n';
}

void swap_usingXOR(int a, int b)
{
    a = a ^ b;
    b = b ^ a;
    a = a ^ b;

    cout << "Solution by XOR: A: " << a << ", B: " << b << '\n';
}

// Using friend function
class swap_usingFF
{
    int temp, a, b;

public:
    swap_usingFF(int a, int b)
    {
        this->a = a;
        this->b = b;
    }

    friend void swap_ff(swap_usingFF &);
};

void swap_ff(swap_usingFF &x)
{
    cout << "Before swap: A: " << x.a << ", B: " << x.b << '\n';

    x.temp = x.a;
    x.a = x.b;
    x.b = x.temp;

    cout << "After swap: A: " << x.a << ", B: " << x.b << '\n';
}

void swap_oneLiner(int a, int b) {
    b = a - b + (a = b);
    cout << "Solution by short way: A: " << a << ", B: " << b << '\n';
}

int main()
{
    int a, b;
    cout << "Enter two elements: ";
    cin >> a >> b;

    // swap_usingTemp(a,b);
    swap_usingReference(&a, &b);

    cout << "Solution by reference: A: " << a  << ", B: " << b << '\n';

    // swap(a,b);
    // cout << "Solution by swap function: A: " << a  << ", B: " << b << '\n';

    // swap_usingFF obj(1, 2);
    // swap_ff(obj); 

    // int a = 1, b = 3;
    // swap_oneLiner(a,b);

    return 0;
}