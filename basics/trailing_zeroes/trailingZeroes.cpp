#include <iostream>
using namespace std;

int trailingZeroes(long long n) {
    long long result = 1;
    for(int i = 2; i <= n; i++) {
        result *= i;
    }

    cout << result << '\n';

    int count = 0;
    while((result % 10) == 0) {
        count++;
        result /= 10;
    }

    return count;
}

int main() {
    long long n;
    cout << "Enter a number: ";
    cin >> n;

    cout << trailingZeroes(n);

    return 0;
}