#include <iostream>
using namespace std;

int countZeroes(int n) {
    if(n == 0) return 0;

    int smallOutput = countZeroes(n / 10);

    int lastDigit = n % 10;
    if(lastDigit == 0) {
        return 1 + smallOutput;
    } else {
        return smallOutput;
    }
}


int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << countZeroes(n);
    return 0;
}