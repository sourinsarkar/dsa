#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// Way 1
int countDigits(int n) {
    int cnt = 0;
    while(n > 0) {
        int lastDigit = n % 10;
        cnt += 1;
        n /= 10;
    }

    return cnt;
}

// Way 2
int countDigitsLog(int n) {
    int cnt = (int)(log10(n) + 1);
    return cnt;
}

// Way 3
int countDigitsRecursive(int n) {
    if(n / 10 == 0) return 1;
    return 1 + countDigitsRecursive(n / 10);
}

// Way 4
int countDigitsString(int n) {
    string num = to_string(n);
    return num.length();
}

int main() {
    int n;

    cout << "Enter number: ";
    cin >> n;

    cout << "Entered value is: " << n << '\n';
    cout << "Answer:- " << '\n';

    cout << countDigits(n) << '\n';
    cout << countDigitsLog(n) << '\n';
    cout << countDigitsRecursive(n) << '\n';
    cout << countDigitsString(n) << '\n';
}