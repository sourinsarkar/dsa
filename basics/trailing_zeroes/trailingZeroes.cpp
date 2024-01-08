#include <iostream>
using namespace std;

// Brut Force
// O(n)
int trailingZeroes(long long n) {
    long long result = 1;
    for(int i = 2; i <= n; i++) { // O(n)
        result *= i;
    }

    cout << result << '\n';

    int count = 0;
    while((result % 10) == 0) { // O(d)
        count++;
        result /= 10;
    }

    return count;
}

// Optimised
// O(log n)
int opt_trailingZeroes(int n) {
    int result = 0;
    for(int i = 5; i <= n; i *= 5) {
        result += n / i;
    }

    return result;
}

int main() {
    long long n;
    cout << "Enter a number: ";
    cin >> n;

    // cout << trailingZeroes(n) << '\n';
    cout << opt_trailingZeroes(n) << '\n';

    return 0;
}