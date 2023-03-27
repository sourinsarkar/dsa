#include <iostream>
#include <array>
#include <algorithm>
using namespace std;
 
int main() {
    array<int, 5> arr = {50,20,30,40};
    int size = arr.size();

    for(int i = 0; i < size; i++) {
        cout << arr[i] << ' ';
    }

    cout << "\nElement at 2nd index: " << arr.at(2) << '\n';
    cout << "Empty or not: " << arr.empty() << '\n';
    
    sort(arr.begin(), arr.end());

    cout << "After sort:" << '\n';
    for(int i = 0; i < size; i++) {
        cout << arr[i] << ' ';
    }

    int maxsize = arr.max_size();
    // cout << "\nCurrent elements in the array: " << size << '\n';
    cout << "\nMax Size: " << maxsize << '\n';

    return 0;
}