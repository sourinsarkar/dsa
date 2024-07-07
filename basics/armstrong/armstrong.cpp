#include <iostream>

using namespace std;

bool isArmstrong(int n) {
    int transformedNumber = 0;
    int storedN = n;

    while(n > 0) {
        int lastDigit = n % 10;
        int op = lastDigit * lastDigit * lastDigit;
        transformedNumber += op;
        n /= 10;
    }

    if(transformedNumber == storedN) return true;
    else return false;
}

int main() {
    int n;

    cout << "Enter number: ";
    cin >> n;

    cout << "Entered value is: " << n << '\n';
    cout << "Answer:- " << '\n';

    if(isArmstrong(n)) cout << "It's an Armstrong Number." << '\n';
    else cout << "It's Not an Amstrong Number" << '\n';
}