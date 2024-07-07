#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

void divisors(int n) {
    for(int i = 1; i <= n; i++) {
        if (n % i == 0) {
            cout << i << ", ";
        }
    }
    cout << '\n';
}

void divisors2(int n) {
    vector<int> ls;

    // other way to write for the sqrt, cause that is a function, thus not optimized.
    // instead use i * i <= n
    // example: 6 * 6 <= 36 (Makes sense)
    // case: 7 * 7 <= 36 false (Won't work)

    // for(int i = 1; i <= sqrt(n); i++) {
    for(int i = 1; i * i <= n; i++) {
        if(n % i == 0) {
            ls.push_back(i);
            if(i != n/i) {
                ls.push_back(n/i);
            }
        }
    }

    sort(ls.begin(), ls.end());

    for (int i = 0; i < ls.size(); i++) {
        cout << ls[i] << ", ";
    }
    cout << '\n';
}

int main() {
    int n;

    cout << "Enter number: ";
    cin >> n;

    cout << "Entered value is: " << n << '\n';
    cout << "Answer:- " << '\n';

    divisors(n);
    divisors2(n);
}