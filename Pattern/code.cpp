#include <iostream>
using namespace std;

void pattern_1(int n) {

    // * * *
    // * * *
    // * * *

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << '*' << ' ';
        }
        cout << '\n';
    }
    cout << '\n';
}

void pattern_2(int n) {

    // *
    // **
    // ***
    // ****

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << '*' << ' ';
        }
        cout << '\n';
    }
    cout << '\n';
}

void pattern_3(int n) {
    
    // 1
    // 12
    // 123
    // 1234

    for(int i = 0; i < n; i++)
    {
        for(int j = 1; j <= i + 1; j++)
        {
            cout << j << ' ';
        }
        cout << '\n';
    }
    cout << '\n';
}

void pattern_4(int n) {

    // 1
    // 22
    // 333
    // 4444

    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            cout << i + 1 << ' ';
        }
        cout << '\n';
    }
    cout << '\n';
}

void pattern_5(int n) {

    // ****
    // ***
    // **
    // *

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n - i; j++) {
            cout << '*' << ' ';
        }
        cout << '\n';
    }
    cout << '\n';
}

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    pattern_1(n);
    pattern_2(n);
    pattern_3(n);
    pattern_4(n);
    pattern_5(n);

    return 0;
}