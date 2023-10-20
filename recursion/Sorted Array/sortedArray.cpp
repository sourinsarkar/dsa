#include <iostream>
using namespace std;
 
bool isSorted(int arr[], int n) {
    if(n == 0) return true;

    if(arr[0] > arr[1]) return false;

    bool isSmallSorted = isSorted(arr + 1, n - 1);

    return isSmallSorted;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};

    if(isSorted(arr, 5)) cout << "Sorted";
    else cout << "Unsorted";
 
    return 0;
}