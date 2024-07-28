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

int main() {
    int n, m;
    cout << "Enter two numbers: ";
    cin >> n >> m;

    cout << gcd(n, m);

    return 0;
}