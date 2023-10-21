#include <iostream>
using namespace std;

int factorial(int n) {
    if(n == 0)
        return 1;

    int smallAns = factorial(n - 1);
    return n * smallAns;
}

int main() {
    cout << factorial(4) << '\n';
    cout << factorial(5) << '\n';

    return 0;
}