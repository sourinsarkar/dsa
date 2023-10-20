#include <iostream>
#include <vector>
#include "rin.hpp"
// using namespace rin;
using namespace std;

int countDigits(int n)
{
    int count = 0;
    // while (n--)
    while (n>0)
    {
        n /= 10;
        count++;
    }

    return count;
}

int main()
{
    // int n;
    // cout << "Enter number: ";

    // cin >> n;

    // int arr[] = {56, 786465, 45476, 76};
    vector<int> arr = {56, 786465, 45476, 76};
    // int size = sizeof(arr) / sizeof(arr[0]);
    // int ans = countDigits(n);
    // cout << ans;

    for (int i = 0; i < arr.size(); i++)
    {
        // int ans = countDigits(arr[i]);
        int ans = rin::count(arr[i]);
        cout << ans << ' ';
    }
}