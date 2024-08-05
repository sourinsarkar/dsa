#include <iostream>

using namespace std;

int sum(int n) {
    if(n == 0) return 0;
    int lastDigit = n % 10;
    int smalloutput = sum(n/10);
    return smalloutput + lastDigit;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << sum(n);

    return 0;
}