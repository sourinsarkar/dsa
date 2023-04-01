#include <iostream>
using namespace std;

bool isEven(int n) {
    if(n & 1) return true;
    else return false;
}

int main() {
    int n;
    cin >> n;

    if(isEven(n)) cout << "Odd" << '\n';
    else cout << "Even" << '\n';

    return 0;
} 