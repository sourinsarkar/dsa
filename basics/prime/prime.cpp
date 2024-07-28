#include <iostream>

using namespace std;

int prime(int n) {
    int count = 0;

    for(int i = 1; i * i <= n; i++) {
        if(n % i == 0) {
            count++;
            if(n/i != i) {
                count++;
            }
        }
    }

    return count;
}


int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if(prime(n) == 2) cout << "True";
    else cout << "False";

    return 0;
}