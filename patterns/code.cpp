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

// -------------------------------------

// Pattern 5
// * * * *
// * * *
// * * 
// *

void pattern_5(int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n-i; j++) {
            cout << '*' << ' ';
        }
        cout << '\n';
    }
}

// -------------------------------------

// Pattern 6
// 1 2 3 4 
// 1 2 3 
// 1 2 
// 1

void pattern_6(int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 1; j <= n-i; j++) {
            cout << j << ' ';
        }
        cout << '\n';
    }
}

// -------------------------------------

// Pattern 7
//       *
//     * * * 
//   * * * * *
// * * * * * * *

void pattern_7(int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            cout << ' ';
        }

        for(int j = 0; j < ((2 * i) + 1); j++) {
            cout << '*';
        }

        for(int j = 0; j < n - i - 1; j++) {
            cout << ' ';
        }
        cout << '\n';
    }
}

// -------------------------------------

// Pattern 8
// * * * * * * *
//   * * * * *
//     * * *
//       *

void pattern_8(int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            cout << ' ';
        }

        for(int j = 0; j < 2*n - (2*i + 1); j++) {
            cout << '*';
        }

        cout << '\n';
    }
}

// -------------------------------------

// Pattern 9
//     *
//   * * *
// * * * * *
//   * * *
//     * 

void pattern_9(int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            cout << ' ';
        }

        for(int j = 0; j < ((2*i) + 1); j++) {
            cout << '*';
        }

        for(int j = 0; j < n - i - 1; j++) {
            cout << ' ';
        }
        cout << '\n';
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < i; j++){
            cout << ' ';
        }

        for(int j = 0; j < 2*n-(2*i + 1); j++){ 
            cout << '*';
        }
        
        for(int j = 0; j < i; j++){
            cout << ' ';
        }
    }
}

// -------------------------------------

// Pattern 10
// *
// * *
// * * *
// * *
// *

void pattern_10(int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            cout << '*';
        }
        cout << '\n';
    }
    for(int i = 0; i < n-1; i++) {
        for(int j = 1; j <= n - 1 - i; j++) {
            cout << '*';
        }
        cout << '\n';
    }
}

void pattern_10$1(int n) {
    for(int i = 1; i <= 2*n - 1; i++) {
        int temp = i;

        if(i > n) temp = 2 * n - i;

        for(int j = 1; j <= temp; j++) {
            cout << '*';
        }
        cout << '\n';
    }
}

// -------------------------------------

// Pattern 11
// 1
// 0 1
// 1 0 1
// 0 1 0 1
// 1 0 1 0 1

void pattern_11(int n) {
    int start = 1;
    for(int i = 0; i < n; i++) {
        if(i % 2 == 0) start = 1;
        else start = 0;
        for(int j = 0; j <= i; j++) {
            cout << start;
            start = 1 - start;
        }
        cout << '\n';
    }
}

// -------------------------------------

// Pattern 12
// 1        1
// 12      21
// 123    321
// 1234  4321
// 1234554321

void pattern_12(int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < i; j++) {
            cout << j + 1;
        }
        
        for(int j = 0; j < 2*n - (2*i + 1); j++) {
            cout << ' ';
        }

        for(int j = 0; j < i; j++) {
            cout << j + 1;
        }
        cout << '\n';
    }
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    pattern_12(n);
}