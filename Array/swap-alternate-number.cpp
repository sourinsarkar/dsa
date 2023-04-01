#include <iostream>
using namespace std;

// temp
void swap_usingTemp(int a, int b) {
    int temp = a;
    a = b;  
    b = temp;
    cout << "A: " << a << " B: " << b << '\n';
}

// ref
void swap_usingRef(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    cout << "A: " << *a << " B: " << *b << '\n';
}

// arithmetic

void swap_usingArithmetics(int a, int b) {
    
    // using + and -
    // b = a + b;
    // a = b - a;
    // b = b - a;

    // using * and /
    // b = a * b;
    // a = b / a;
    // b = b / a;

    //using XOR (^)
    a = a ^ b;
    b = b ^ a;
    a = a ^ b;

    cout << "A: " << a << " B: " << b << '\n';
}

// Friend Class
class swap_usingFF {
    int a, b, temp;

public:
    swap_usingFF(int a, int b) {
        this->a = a;
        this->b = b;
    }

    friend void swap_ff(swap_usingFF &);
};

void swap_ff(swap_usingFF &x) {
    cout << "Before:\nA: " << x.a << " B: " << x.b << '\n';

    int temp = x.a;
    x.a = x.b;
    x.b = temp;

    cout << "After:\nA: " << x.a << " B: " << x.b << '\n';
}

int main() {
    int n,m;
    cout << "Enter: ";
    cin >> n >> m;

    // swap_usingTemp(n, m);
    // swap_usingRef(&n, &m);
    // swap_usingArithmetics(n, m);

    // swap_usingFF obj(n, m);
    // swap_ff(obj);
    
    
    return 0;
}