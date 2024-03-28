#include <iostream>
using namespace std;

// Pattern 1
// * * * *
// * * * *
// * * * *
// * * * *

void pattern_1(int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << '*' << ' ';
        }
        cout << '\n';
    }
}

// -------------------------------------

// Pattern 2
// *
// * * 
// * * * 
// * * * *

void pattern_2(int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            cout << '*' << ' '; 
        }
        cout << '\n';
    }
}

// -------------------------------------

// Pattern 3
// 1
// 1 2 
// 1 2 3 
// 1 2 3 4

void pattern_3(int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            cout << j + 1 << ' ';
        }
        cout << '\n';
    }
}

// -------------------------------------

// Pattern 4
// 1
// 2 2 
// 3 3 3 
// 4 4 4 4

void pattern_4(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cout << i << ' ';
        }
        cout << '\n';
    }
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    // pattern_1(n);
    // pattern_2(n);
    // pattern_3(n);
    pattern_4(n);
}