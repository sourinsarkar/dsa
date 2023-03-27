#include <iostream>
using namespace std;

bool isEven(int n) {
    if(n & 1) return false;
    else return true;
}

int main() {
    int n;
    cin >> n;

    if(isEven(n)) cout << "Even" << '\n';
    else cout << "Odd" << '\n';

    return 0;
}