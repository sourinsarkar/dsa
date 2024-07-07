#include <iostream>

using namespace std;

void palindrome(int n) {
    int pd = 0;
    int storedN = n;

    while(n > 0) {
        int lastDigit = n %10;
        pd = (pd * 10) + lastDigit;
        n /= 10;
    }   

    if(storedN == pd) cout << "Palindrome" << '\n';
    else cout << "Not Palindrome!" << '\n';
}

int main() {
    int n;

    cout << "Enter number: ";
    cin >> n;

    cout << "Entered value is: " << n << '\n';
    cout << "Answer:- " << '\n';

    palindrome(n);
    
}