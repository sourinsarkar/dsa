#include <iostream>

using namespace std;

int countDigits(int n) {
    if(n == 0) return 0;

    return countDigits(n/10) + 1;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << countDigits(n);

    return 0;
}