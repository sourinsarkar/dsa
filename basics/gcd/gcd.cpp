#include <iostream>
using namespace std;

// Naive Approach
// O(min(a, b))
int gcd(int n, int m) {
    int result = min(n, m);
    while(result > 0) {
        if(n % result == 0 && m % result == 0) break;
        result--;
    }

    return result;
}

// Fairly good approach but does multiple operations
int gcd_variant1(int n, int m) {
    while(n != m) {
        if(n > m)
            n -= m;
        else
            m -= n;
    }

    return n;
}

// Optimised Approach
int opt_gcd(int n, int m) {
    if(m == 0)
        return n;
    else
        return opt_gcd(m, n % m);
}

int main() {
    int n, m;
    cin >> n >> m;

    cout << gcd(n, m) << '\n';
    cout << gcd_variant1(n, m) << '\n';
    cout << opt_gcd(n, m) << '\n';

    return 0;
}