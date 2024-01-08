#include <iostream>
using namespace std;

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