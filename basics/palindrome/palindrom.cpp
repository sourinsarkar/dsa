#include <iostream>
using namespace std;

bool palindrome(long long n) {
    long long originalNumber = n;
    long long newNumber = 0;
    while(n > 0) {
        int lastDigit = n % 10;
        newNumber = newNumber * 10 + lastDigit;
        n /= 10;
    }

    if(newNumber == originalNumber) {
        return true;
    }
    return false;
}

int main() {
    long long n;
    cout << "Enter a number: ";
    cin >> n;

    bool isPalindrome = palindrome(n);

    if(isPalindrome) {
        cout << "True" << '\n';
    } else {
        cout << "False" << '\n';
    }

    return 0;
}