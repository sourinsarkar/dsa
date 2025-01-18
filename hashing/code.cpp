#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter the length of array you want: ";
    cin >> n;

    // Insert into array
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    } 

    // precompute
    int hash[13] = {0}; // all fields initialized with zeroes 0s
    for(int i = 0; i < n; i++) {
        hash[arr[i]] += 1;
    }

    // Ask for frequency
    int times;
    cout << "Search times: ";
    cin >> times;
    while(times--) {
        int number;
        cout << "Search frequencies for: ";
        cin >> number;

        cout << "Answer: " << hash[number] << '\n';
    }
}