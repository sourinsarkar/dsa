#include <iostream>
using namespace std;

// Brut Force
int lcm(int n, int m) {
    int result = max(n, m);
    
    while(true) {
        if(result % n == 0 && result % m == 0) break;
        result++;
    }

    return result;
}

// Optimised Approach
// This follows the formula: a * b = gcd(a, b) * lcm(a, b)

int gcd(int n, int m) {
    if(m == 0)
        return n;
    else
        return gcd(m, n % m); 
}

int opt_lcm(int n, int m) {
    return (n * m) / gcd(n, m);
}

int main() {
    int n, m;
    cout << "Enter values: ";
    cin >> n >> m;

    cout << lcm(n, m) << '\n';
    cout << opt_lcm(n, m) << '\n';
    return 0;
}