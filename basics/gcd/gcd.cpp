#include <iostream>

using namespace std;

int gcd(int n, int m) {
    int gcd = 0;
    
    for(int i = min(n, m); i >= 1; i--) {
        if(n % i == 0 && m % i == 0) {
            gcd = i;
            break;
        }
    }

    return gcd;
}

int gcd2(int n, int m) {
    while(n > 0 && m > 0) {
        if (n > m) n = n % m;
        else m = m % n;
    }

    if(n == 0) return m;
    return n;
}

int main() {
    int n, m;
    cout << "Enter two numbers: ";
    cin >> n >> m;

    cout << gcd(n, m);
    cout << '\n';
    cout << gcd2(n, m);

    return 0;
}