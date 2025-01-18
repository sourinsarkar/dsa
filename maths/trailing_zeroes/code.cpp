// count of traiing zeroes in a factorial of a number

#include <iostream>

using namespace std;

// Way 1: Naive
int countZeroes(int n) {
    int ans = 1;
    for(int i = 2; i <= n; i++) {
        ans *= i;
    }

    int count = 0;
    while(ans % 10 == 0) {
        count++;
        ans /= 10;
    }

    return count;
}

// Way 2
int countZeroesOn5(int n) {
    int count = 0;

    for(int i = 5; i <= n; i *= 5) {
        count += n / i;
    }

    return count;
}

int main() {
    cout << "Enter a number: ";
    int input;
    cin >> input;

    // cout << countZeroes(input) << '\n'; // Commented out due to potential overflow
    cout << countZeroesOn5(input) << '\n';
    return 0;
}
