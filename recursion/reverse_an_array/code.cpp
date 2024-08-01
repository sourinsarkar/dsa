#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

// Printing an array -----------------------------
void reverse(int arr[], int n) {
    vector<int> v;

    for(int i = 0; i < n; i++) {
        v.push_back(arr[i]);
    }

    sort(v.begin(), v.end(), greater<int>());
    for(auto n: v) cout << n << ' ';

    cout << '\n';
}

// -----------------------------

void reverse_by_swap(int arr[], int n) {
    for(int i = 0; i < n/2; i++) {
        swap(arr[i], arr[n - i - 1]);
    }

    for(int i = 0; i < n; i++) {
        cout << arr[i] << ' ';
    }

    cout << '\n';
}

// -----------------------------

void reverse_by_recursion_helper(int arr[], int left, int right) {
    if(left >= right) {
        return;
    }

    swap(arr[left], arr[right]);

    reverse_by_recursion_helper(arr, left + 1, right - 1);
}

void reverse_by_recursion(int arr[], int n) {
    reverse_by_recursion_helper(arr, 0, n - 1);
}

int main() {
    int n = 5;
    int arr[] = {10, 20, 30, 40, 50};

    // reverse(arr, n);
    // reverse_by_swap(arr, n);
    reverse_by_recursion(arr, n);

    for(int i = 0; i < n; i++) {
        cout << arr[i] <<' ';
    }

    return 0;
}
