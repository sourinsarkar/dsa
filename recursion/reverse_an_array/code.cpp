#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

// Printing an array
void reverse(int arr[], int n) {
    vector<int> v;

    for(int i = 0; i < n; i++) {
        v.push_back(arr[i]);
    }

    sort(v.begin(), v.end(), greater<int>());
    for(auto n: v) cout << n << ' ';

    cout << '\n';
}

void reverse_by_swap(int arr[], int n) {
    for(int i = 0; i < n/2; i++) {
        swap(arr[i], arr[n - i - 1]);
    }

    for(int i = 0; i < n; i++) {
        cout << arr[i] << ' ';
    }

    cout << '\n';
}


int main() {
    int n = 5;
    int arr[] = {10, 20, 30, 40, 50};

    reverse(arr, n);
    reverse_by_swap(arr, n);

    return 0;
}