#include <iostream>

using namespace std;

// Way 1
int revDigits(int n) {
    int revNumber = 0;

    while(n > 0) {
        int lastDigit = n % 10;
        revNumber = (revNumber * 10) + lastDigit;
        n /= 10;
    }

    return revNumber;
}

int main() {
    int n;

    cout << "Enter number: ";
    cin >> n;

    cout << "Entered value is: " << n << '\n';
    cout << "Answer:- " << '\n';

    cout << revDigits(n) << '\n';
}