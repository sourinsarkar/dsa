#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

void divisors(int n) {
    for(int i = 1; i <= n; i++) {
        if(n % i == 0) {
            cout << i << ' ';
        }
    }
}

void divisors2(int n) {
    vector <int> v;
    for(int i = 1; i * i<= n; i++) {
        if( n % i == 0) {
            v.push_back(i);
            if(n / i != i) {
                v.push_back(n / i);
            }
        }
    }

    sort(v.begin(), v.end());
    for(auto i : v) cout << i << ' ';
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    divisors(n);
    cout << '\n';
    divisors2(n);
    return 0;
}