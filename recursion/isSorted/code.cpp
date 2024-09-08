#include <iostream>
#include <vector>

using namespace std;

// Single pointer or variable solution
void isSorted1(int i, vector<int>& arr, int n) {
    if(i >= n/2) return;
    swap(arr[i], arr[n-i-1]);
    isSorted1(i+1, arr, n);
}

// Dual pointer solution
void isSorted2(int l, vector<int>& arr, int r) {
    if( l >= r) return;

    swap(arr[l], arr[r]);
    isSorted2(l + 1, arr, r - 1);
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    
    vector<int> arr(n);
    cout << "Enter " << n << " elements below:";
    for(int i = 0;  i < n; i++) {
        cin >> arr[i];
    }

    isSorted2(0, arr, n-1);

    for(int i = 0; i < n; i++) {
        cout << arr[i] << ' ';
    }
    
    return 0;
}