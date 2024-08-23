#include <iostream>

using namespace std;

int multiplication(int n, int m) {
    if(m == 0) return 1;

    int smallOutput = multiplication(n, m - 1);

    return n * smallOutput;
}

int main() {
    int n, m;
    cout << "Enter a number and power: ";
    cin >> n >> m;
    
    cout << multiplication(n, m);

    return 0;
}