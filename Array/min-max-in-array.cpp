#include <iostream>
#include <climits>
#include <algorithm>

using namespace std;

// Way 1 -- Using CLIMITS
// int main() {
//     int n;
//     cout << "Enter size: ";
//     cin >> n;

//     int arr[n];
//     cout << "Enter array: ";
//     for(int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     //for MAX ELEMENT
//     int max = INT_MIN;
    
//     for(int i = 0; i < n; i++) {
//         if(arr[i] > max) max = arr[i];
//     }

//     //for MIN ELEMENT
//     int min = INT_MAX;

//     for(int i = 0; i < n; i++) {
//         if(arr[i] < min) min = arr[i];
//     }

//     cout << "MAX: " << max << '\n';
//     cout << "MIN: " << min << '\n';

//     return 0;
// }
// --------------------------------------------------------------------------------------------------------
// Way 2-- Using CLIMITS, making function sets

// int max_ele(int arr[], int n) {
//     // int size = sizeof(arr) / sizeof(arr[0]);

//     int max = INT_MIN;

//     for(int i = 0; i < n; i++) {
//         if(arr[i] > max) max = arr[i];
//     }

//     return max;
// }

// int min_ele(int arr[], int n) {
//     // int size = sizeof(arr) / sizeof(arr[0]);

//     int min = INT_MAX;

//     for(int i = 0; i < n; i++) {
//         if(arr[i] < min) min = arr[i];
//     }

//     return min;
// }

// int main() {
//     int n;
//     cout << "Enter size: ";
//     cin >> n;

//     int arr[n];
//     cout << "Enter array elements: ";
//     for(int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     cout << "MAX: " << max_ele(arr, n) << '\n';
//     cout << "MIN: " << min_ele(arr, n) << '\n';
// }

// --------------------------------------------------------------------------------------------------------

// Way 3 -- By sorting the array and printing first and last element as needed -- sort() defined in <algorithms> header file
int main() {
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr, arr+n);
    cout << "MAX: " << arr[n-1] << '\n';
    cout << "MIN: " << arr[0] << '\n';

    return 0;
}