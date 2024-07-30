#include <iostream>

using namespace std;

int sum_n_numbers(int n) {
    if(n <= 0) return 0;

    return n + sum_n_numbers(n - 1);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << sum_n_numbers(n);

    return 0;
}