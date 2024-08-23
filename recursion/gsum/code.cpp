#include <iostream>
#include <math.h>
using namespace std;

double gsum(int n) {
    if(n == 0) return 1.0;
    return gsum(n - 1) + (1.0 / pow(2, n));
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << gsum(n);
    return 0;
}