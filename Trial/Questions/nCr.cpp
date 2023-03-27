#include <iostream>
using namespace std;

int factorial(int n) {
    int fact = 1;
    for(int i = 1; i <= n; i++) {
        fact *= i;
    }

    return fact;
}

int nCr(int n, int r) {
    int Nr = factorial(n);
    int Dr = factorial(r) * factorial(n - r);
    int ans = Nr/Dr;

    return ans;
}

int main() {
    int n, r;
    cin >> n >> r;

    cout << nCr(n, r) << '\n';
    return 0;
}