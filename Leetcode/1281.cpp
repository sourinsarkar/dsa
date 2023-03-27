// Subtract the product and sum of digits of an integer ---------------------

#include <iostream>
using namespace std;

int main() {
    int n, product = 1, sum = 0;
    cin >> n;

    while(n != 0) {
        int digits = n % 10;
        sum += digits;
        product *= digits;
        n = n / 10;
    }

    cout << product - sum;
}