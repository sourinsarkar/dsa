#include <iostream>
using namespace std;

int factorial(int n) {
    int result = 1;
    for(int i = 1; i <= n; i++) {
        result *= i;
    }

    return result;
}

int r_factorial(int n) {
    if(n == 0) 
        return 1;
    
    return n * r_factorial(n - 1);
}

int r_explained_factorial(int n) {
    cout << "Function: " << n << '\n';

    if(n == 0) {
        cout << "Base case reached, returns 1" << '\n';
        return 1;
    }

    cout << "Calculating " << n << " * r_explained_factorial(" << n - 1 << ")" << '\n';
    int result = n * r_explained_factorial(n - 1);
    cout << "Returning result: " << result << '\n';

    return result;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // cout << factorial(n) << '\n';
    cout << r_factorial(n) << '\n';
    // cout << r_explained_factorial(n) << '\n';

    return 0;
}