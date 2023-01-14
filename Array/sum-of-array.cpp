#include <iostream>
#include <numeric>

using namespace std;

// WAY 1 -- Normal
// int main() {
//     int n;
//     cout << "Enter array size: ";
//     cin >> n;

//     int arr[n];
//     cout << "Enter aray: ";

//     //taking input
//     for(int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     int sum = 0;

//     //adding
//     for(int i = 0; i < n; i++) {
//         sum += arr[i];
//     }

//     cout << sum << '\n';
// }

// ----------------------------------------------------------------------------------------------------------

// WAY 2 -- Normal
// int sum(int n[], int m) {
//     int sum = 0;

//     for(int i = 0; i < m; i++) {
//         sum += n[i];
//     }

//     return sum;
// }

// int main() {
//     int arr[] = {1,2,7,10,20};
//     int arrSize = sizeof(arr) / sizeof(arr[0]);
//     cout << "Sum: " << sum(arr, arrSize) << '\n';
    
//     return 0;
// }

// ----------------------------------------------------------------------------------------------------------

// Way 3 -- Using accumulate() function -- defined in <numeric> hearder file
// int main() {
//     int n;
//     cout << "Enter array size: ";
//     cin >> n;


//     int arr[n];
//     for(int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     int arrSize = sizeof(arr) / sizeof(arr[0]); 

//     int sum = 0;
//     cout << accumulate(arr, arr + arrSize, sum);

//     return 0;

// }