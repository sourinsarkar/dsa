#include <iostream>
using namespace std;

// Factorial

int factorial(int n) {
    if(n == 0)
        return 1;

    int smallAns = factorial(n - 1);
    return n * smallAns;
}

// Fibonacci series

int fib(int n) {
    if(n == 0) return 0;
    if(n == 1) return 1;

    return fib(n - 1) + fib(n - 2);
}

int main() {
    cout << "Factorial: " << factorial(4) << '\n';
    cout << "Factorial: " << factorial(5) << '\n';
    cout << "Fibonacci: " << fib(4) << '\n';
    cout << "Fibonacci: " << fib(5) << '\n';

    return 0;
}