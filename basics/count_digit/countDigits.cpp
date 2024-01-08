#include <iostream>
using namespace std;

// TC: O(d)
// TC is proportional to the number of digits in the given input.

int countDigits(int n) {
    int result = 0;
    while(n > 0) {
        n /= 10;
        result++;
    }
    return result;
}

int main() {
    int n;
    cin >> n;

    cout << countDigits(n);

    return 0;
}