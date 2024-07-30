#include <iostream>

using namespace std;

void print_numbers(int i, int n) {
    if(i < 1) return;

    print_numbers(i - 1, n);
    cout << i << '\n';
}

void print_n_to_1(int i, int n) {
    if (i < 1) {
        // cout << i << ' ';
        return;
    }

    print_n_to_1(i - 1, n);
    cout << i << '\n';
}

int main() {
    int n;
    cout << "Enter a number :";
    cin >> n;

    // print_numbers(n, n);
    print_n_to_1(n, n);

    return 0;
}
